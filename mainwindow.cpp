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
    updateDistroLabel();

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
void MainWindow::updateDistroLabel()
{
    QFile osFile("/etc/os-release");
    if (!osFile.open(QIODevice::ReadOnly))
    {
        ui->DistInfo_Label->setText("Unknown");
        return;
    }

    QString data = osFile.readAll();

    if (data.contains("arch") || data.contains("cachyos"))
        ui->DistInfo_Label->setText("Arch / CachyOS");

    else if (data.contains("ubuntu") || data.contains("debian"))
        ui->DistInfo_Label->setText("Ubuntu / Debian");

    else if (data.contains("fedora"))
        ui->DistInfo_Label->setText("Fedora");

    else if (data.contains("opensuse"))
        ui->DistInfo_Label->setText("OpenSUSE");

    else
        ui->DistInfo_Label->setText("Unknown");
}

QString MainWindow::getPackageManager()
{
    QFile osFile("/etc/os-release");
    if (!osFile.open(QIODevice::ReadOnly))

        return "unknown";

    QString data = osFile.readAll();

    if (data.contains("arch") || data.contains("cachyos"))

        return "pacman";

    if (data.contains("ubuntu") || data.contains("debian"))

        return "apt";

    if (data.contains("fedora"))

        return "dnf";

    if (data.contains("opensuse"))

        return "zypper";

    return "unknown";
}

QStringList MainWindow::getInstallCommand(const QString &pkgManager, const QString &package)
{
    if (pkgManager == "pacman")
        return {"pacman", "-Sy", "--noconfirm", package};

    if (pkgManager == "apt")
        return {"apt", "install", "-y", package};

    if (pkgManager == "dnf")
        return {"dnf", "install", "-y", package};

    if (pkgManager == "zypper")
        return {"zypper", "--non-interactive", "install", package};

    return {};
}

QStringList MainWindow::getRemoveCommand(const QString &pkgManager, const QString &package)
{
    if (pkgManager == "pacman")
        return {"pacman", "-Rs", "--noconfirm", package};

    if (pkgManager == "apt")
        return {"apt", "remove", "-y", package};

    if (pkgManager == "dnf")
        return {"dnf", "remove", "-y", package};

    if (pkgManager == "zypper")
        return {"zypper", "--non-interactive", "remove", package};

    return {};
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

void MainWindow::runInTerminal(const QString &txt, const QStringList &args)
{
    ui->statusbar->showMessage(txt + " (starting terminal...)");

    QString command = "pkexec";

    for (const QString &arg : args) {
        command += " " + arg;
    }

    QProcess *p = new QProcess(this);

    connect(p, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            this,
            [this, txt, p](int exitCode, QProcess::ExitStatus)
            {
                if (exitCode == 0)
                    ui->statusbar->showMessage(txt + " done");
                else
                    ui->statusbar->showMessage(txt + " failed");

                p->deleteLater();
            });

    connect(p, &QProcess::errorOccurred,
            this,
            [this, txt, p](QProcess::ProcessError)
            {
                QMessageBox::warning(this, "Error", txt + " failed to start terminal");
                p->deleteLater();
            });

    p->start(
        "konsole",
        {
            "-e",
            "bash", "-c",
            command + "; echo; echo 'Press Enter to close...'; read"
        }
        );

    ui->statusbar->showMessage(txt + " launched in terminal");
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
    QString pm = getPackageManager();

    runWithProgress(
        "Installing " + package + "...",
        getInstallCommand(pm, package)
        );
}

void MainWindow::removePackage(const QString &package)
{
    QString pm = getPackageManager();

    runWithProgress(
        "Removing " + package + "...",
        getRemoveCommand(pm, package)
        );
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

void MainWindow::on_btnUpdateSystem_clicked()
{

    runInTerminal("Updating system packages . . .", {"pacman", "-Syu", "--noconfirm"});

}
