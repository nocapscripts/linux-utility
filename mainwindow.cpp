#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QApplication>
#include <QCheckBox>
#include <QDebug>
#include <QFile>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMessageBox>
#include <QProcess>
#include <QRegularExpression>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setFixedSize(900, 629);

    ui->statusbar->clearMessage();

    QFile file(":/tools.json");

    if (!file.open(QIODevice::ReadOnly)) {
        file.setFileName("tools.json");

        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::critical(
                this,
                "Error",
                "Could not open tools.json"
                );
            return;
        }
    }

    QByteArray data = file.readAll();
    file.close();

    QJsonParseError err;
    QJsonDocument doc = QJsonDocument::fromJson(data, &err);

    if (err.error != QJsonParseError::NoError) {
        QMessageBox::critical(
            this,
            "JSON Error",
            err.errorString()
            );
        return;
    }

    if (!doc.isArray()) {
        QMessageBox::critical(
            this,
            "Error",
            "tools.json must be a JSON array"
            );
        return;
    }

    QJsonArray tools = doc.array();

    for (auto it = tools.constBegin(); it != tools.constEnd(); ++it)
    {
        if (!it->isObject())
            continue;

        QJsonObject obj = it->toObject();

        QString checkboxName = obj["checkbox"].toString();
        QString packageName  = obj["package"].toString();

        QCheckBox *checkbox = findChild<QCheckBox*>(checkboxName);

        if (!checkbox) {
            qWarning() << "Checkbox not found:" << checkboxName;
            continue;
        }

        checkbox->setChecked(isInstalled(packageName));

        connect(checkbox, &QCheckBox::toggled, this,
                [this, checkbox, packageName](bool checked)
                {
                    onCheckboxToggled(checkbox, packageName, checked);
                });
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::isInstalled(const QString &package)
{
    QProcess p;
    p.start("pacman", {"-Qi", package});

    if (!p.waitForStarted())
        return false;

    p.waitForFinished(3000);

    return p.exitStatus() == QProcess::NormalExit &&
           p.exitCode() == 0;
}

void MainWindow::showProgress(const QString &message)
{
    ui->statusbar->showMessage(message);
    setEnabled(true);
}

void MainWindow::hideProgress()
{
    ui->statusbar->clearMessage();
    setEnabled(true);
}

void MainWindow::runWithProgress(
    const QString &statusMsg,
    const QStringList &args)
{
    showProgress(statusMsg);

    QProcess *process = new QProcess(this);
    process->setProcessChannelMode(QProcess::MergedChannels);

    connect(process,
            QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            this,
            [this, process, statusMsg](int exitCode, QProcess::ExitStatus)
            {
                if (exitCode == 0) {
                    ui->statusbar->showMessage(statusMsg + " done");
                } else {
                    QMessageBox::warning(
                        this,
                        "Error",
                        statusMsg + " failed:\n" +
                            process->readAllStandardOutput()
                        );
                }

                hideProgress();
                process->deleteLater();
            });

    connect(process, &QProcess::errorOccurred,
            this,
            [this, process](QProcess::ProcessError)
            {
                QMessageBox::warning(
                    this,
                    "Process Error",
                    process->errorString()
                    );

                hideProgress();
                process->deleteLater();
            });

    process->start("pkexec", args);
}

void MainWindow::installPackage(const QString &package)
{
    runWithProgress("Installing " + package + "...",
                    {"pacman", "-S", "--noconfirm", package});
}

void MainWindow::removePackage(const QString &package)
{
    runWithProgress("Removing " + package + "...",
                    {"pacman", "-Rs", "--noconfirm", package});
}

void MainWindow::onCheckboxToggled(
    QCheckBox *checkbox,
    const QString &package,
    bool checked)
{
    checkbox->blockSignals(true);

    if (checked)
        installPackage(package);
    else
        removePackage(package);

    checkbox->setChecked(isInstalled(package));

    checkbox->blockSignals(false);
}


void MainWindow::on_btnDisablePAM_clicked()
{
    runWithProgress(
        "Applying lockout config...",
        {
            "bash", "-c",
            "grep -q '^deny' /etc/security/faillock.conf && "
            "sed -i 's/^deny.*/deny = 0/' /etc/security/faillock.conf || "
            "echo 'deny = 0' >> /etc/security/faillock.conf"
        }
        );
}


void MainWindow::on_btnRestorePAM_clicked()
{
    runWithProgress(
        "Restoring PAM defaults...",
        {
            "bash", "-c",
            "cat > /etc/security/faillock.conf << 'EOF'\n"
            "deny = 3\n"
            "unlock_time = 900\n"
            "fail_interval = 900\n"
            "EOF"
        }
        );
}
