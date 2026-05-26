#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QApplication>
#include <QCheckBox>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMessageBox>
#include <QProcess>
#include <QRegularExpression>
#include <QStandardPaths>


#include <QTextStream>

#include <QStorageInfo>
#include <QSysInfo>
#include <QTimer>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setFixedSize(1031, 723);
    updateDistroLabel();
    QTimer::singleShot(0, this, &MainWindow::getSystemData);

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


void MainWindow::writeLog(const QString &message)
{
    QString appName = "LinutilGUI";

    // ✅ Correct Linux-safe path
    QString logDirPath = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);

    if (logDirPath.isEmpty())
        logDirPath = QDir::homePath() + "/.local/share/" + appName;

    QDir dir(logDirPath);
    if (!dir.exists())
        dir.mkpath(".");

    QString filePath = logDirPath + "/app.log";

    QFile file(filePath);
    if (!file.open(QIODevice::Append | QIODevice::Text))
        return;

    QTextStream out(&file);

    QString timestamp = QDateTime::currentDateTime()
                            .toString("yyyy-MM-dd HH:mm:ss");

    out << "[" << timestamp << "] " << message << "\n";
}

// detects OS type
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

    else if (data.contains("arch"))
        ui->DistInfo_Label->setText("Arch");

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
    {
        writeLog("OS: unknown (failed to read os-release)");
        return "unknown";
    }

    QString data = osFile.readAll();

    if (data.contains("arch") || data.contains("cachyos"))
    {
        writeLog("OS detected: Arch/CachyOS");
        return "pacman";
    }

    if (data.contains("ubuntu") || data.contains("debian"))
    {
        writeLog("OS detected: Ubuntu/Debian");
        return "apt";
    }

    if (data.contains("fedora"))
    {
        writeLog("OS detected: Fedora");
        return "dnf";
    }

    if (data.contains("opensuse"))
    {
        writeLog("OS detected: OpenSUSE");
        return "zypper";
    }

    writeLog("OS detected: unknown");
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
    if (package.isEmpty())
        return false;

    QProcess p;
    p.setProgram("pacman");
    p.setArguments({"-Q", package});
    p.setProcessChannelMode(QProcess::MergedChannels);

    p.start();

    if (!p.waitForStarted(1500))
        return false;

    if (!p.waitForFinished(5000))
        return false;

    // pacman exit codes:
    // 0 = installed
    // 1 = not installed
    // >1 = error
    const int code = p.exitCode();

    return (p.exitStatus() == QProcess::NormalExit && code == 0);
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

void MainWindow::getSystemData()
{
    // ---------------- CPU INFO ----------------
    QString cpu = "Unknown";
    QProcess cpuProc;
    cpuProc.start("sh", {"-c", "grep -m1 'model name' /proc/cpuinfo | cut -d: -f2"});
    cpuProc.waitForFinished(2000);
    cpu = cpuProc.readAllStandardOutput().trimmed();
    cpu.remove(QRegularExpression(R"(\(R\)|\(TM\)|CPU\s+)"));
    cpu = cpu.simplified();
    if (cpu.isEmpty()) cpu = "Unknown";
    ui->cpuLabel->setText(cpu);

    // ---------------- CPU CORES / FREQ ----------------
    int coreCount = 0;
    double maxFreq = 0.0;
    QFile cpufreq("/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq");
    if (cpufreq.open(QIODevice::ReadOnly)) {
        maxFreq = cpufreq.readAll().trimmed().toDouble() / 1000.0; // MHz
        cpufreq.close();
    }
    QFile corefile("/proc/cpuinfo");
    if (corefile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&corefile);
        while (!in.atEnd()) {
            if (in.readLine().startsWith("processor"))
                coreCount++;
        }
    }
    if (coreCount > 0)
        cpu += QString(" (%1 cores)").arg(coreCount);
    if (maxFreq > 0)
        cpu += QString(" @ %1 MHz").arg(maxFreq, 0, 'f', 0);

    // ---------------- RAM INFO ----------------
    QString ram = "Unknown";
    QProcess ramProc;
    ramProc.start("sh", {"-c",
                            "awk '/MemTotal/{t=$2} /MemAvailable/{a=$2} END{"
                            "used=(t-a)/1048576; total=t/1048576; "
                            "printf \"%.2f GiB / %.2f GiB (%d%%)\", used, total, used/total*100"
                            "}' /proc/meminfo"
                        });
    ramProc.waitForFinished(2000);
    ram = ramProc.readAllStandardOutput().trimmed();
    if (ram.isEmpty()) ram = "Unknown";

    // ---------------- DISK INFO ----------------
    QString disk = "Unknown";
    QStorageInfo storage = QStorageInfo::root();
    if (storage.isValid() && storage.isReady()) {
        double totalGB = storage.bytesTotal() / (1024.0 * 1024 * 1024);
        double freeGB  = storage.bytesAvailable() / (1024.0 * 1024 * 1024); // bytesAvailable respects reserved blocks
        double usedGB  = totalGB - freeGB;
        disk = QString("%1 GB used / %2 GB total (%3% used)")
                   .arg(usedGB,  0, 'f', 1)
                   .arg(totalGB, 0, 'f', 1)
                   .arg((int)(usedGB / totalGB * 100));
    }

    // ---------------- MOTHERBOARD INFO ----------------
    QString motherboard = "Unknown";
    auto readSysFile = [](const QString &path) -> QString {
        QFile f(path);
        if (f.open(QIODevice::ReadOnly))
            return QString(f.readAll()).trimmed();
        return {};
    };
    QString boardVendor = readSysFile("/sys/devices/virtual/dmi/id/board_vendor");
    QString boardName   = readSysFile("/sys/devices/virtual/dmi/id/board_name");
    QString boardVer    = readSysFile("/sys/devices/virtual/dmi/id/board_version");
    if (!boardName.isEmpty())
        motherboard = QString("%1 %2%3")
                          .arg(boardVendor)
                          .arg(boardName)
                          .arg(boardVer.isEmpty() ? "" : " v" + boardVer)
                          .trimmed();

    // ---------------- GPU INFO ----------------
    QString gpu = "Unknown";
    QProcess gpuProc;
    gpuProc.start("sh", {"-c",
                            "lspci | grep -E 'VGA|3D|Display' | sed 's/.*: //' | sed 's/ (rev [0-9a-fA-F]*)//g'"
                        });
    gpuProc.waitForFinished(3000);
    QString gpuOut = gpuProc.readAllStandardOutput().trimmed();
    if (!gpuOut.isEmpty())
        gpu = gpuOut.replace('\n', " | ");

    // ---------------- UPDATE UI ----------------

    ui->ramLabel->setText(ram);
   // ui->diskLabel->setText(disk);
    ui->mbLabel->setText(motherboard);
    ui->gpuLabel->setText(gpu);

    qDebug() << "CPU:" << cpu;
    qDebug() << "RAM:" << ram;
    qDebug() << "Disk:" << disk;
    qDebug() << "MB:" << motherboard;
    qDebug() << "GPU:" << gpu;
}
