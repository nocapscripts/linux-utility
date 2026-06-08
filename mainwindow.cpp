#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QDesktopServices>
#include <QUrl>
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

#include <QInputDialog>
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

    // Show warning after the window is visible
    QTimer::singleShot(0, this, [this]() {
        QMessageBox::warning(this, "Warning",
                             "This app is currently unstable and usable only on Arch Linux systems.\n"
                             "It will not work on any other systems.\n\n"
                             "If you encounter any problems, please report them at:\n"
                             "https://github.com/nocapscripts/linux-utility/issues");
    });

    ui->statusbar->clearMessage();

    QFile file(":/tools.json");
    if (!file.open(QIODevice::ReadOnly)) {
        file.setFileName("tools.json");
        if (!file.open(QIODevice::ReadOnly)) {
            writeLog("Error: tools.json not found or could not be opened");
            QMessageBox::critical(this, "Error", "Could not open tools.json");
            return;
        }
    }

    QByteArray data = file.readAll();
    file.close();

    QJsonParseError err;
    QJsonDocument doc = QJsonDocument::fromJson(data, &err);

    if (err.error != QJsonParseError::NoError) {
        writeLog("Error: JSON parse error: " + err.errorString());
        QMessageBox::critical(this, "JSON Error", err.errorString());
        return;
    }

    if (!doc.isArray()) {
        writeLog("Error: tools.json is not a JSON array");
        QMessageBox::critical(this, "Error", "tools.json must be a JSON array");
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
        QString labelName    = obj["label"].toString();   // optional in tools.json

        QCheckBox *checkbox = findChild<QCheckBox*>(checkboxName);
        if (!checkbox) {
            qWarning() << "Checkbox not found:" << checkboxName;
            writeLog("Warning: checkbox not found: " + checkboxName);
            continue;
        }

        QLabel *label = findChild<QLabel*>(labelName);   // null if not found, handled safely

        bool installed = isInstalled(packageName);
        checkbox->blockSignals(true);
        checkbox->setChecked(installed);
        checkbox->blockSignals(false);

        if (label)
            label->setStyleSheet(installed ? "color: #4caf50; font-weight: bold;" : "");

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
    QString logDirPath = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);

    if (logDirPath.isEmpty())
        logDirPath = QDir::homePath() + "/.local/share/LinutilGUI";

    QDir dir(logDirPath);
    if (!dir.exists())
        dir.mkpath(".");

    QString filePath = logDirPath + "/app.log";

    QFile file(filePath);
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        qWarning() << "Failed to open log file:" << filePath;
        return;
    }

    QTextStream out(&file);
    out << "[" << QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss") << "] "
        << message << "\n";

    out.flush();
    file.close();
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


QString MainWindow::detectPackageManager()
{
    #ifdef Q_OS_LINUX
        if (!QStandardPaths::findExecutable("pacman").isEmpty())
            writeLog("Package manager: PACMAN");
            return "pacman";

        if (!QStandardPaths::findExecutable("yay").isEmpty())
            writeLog("Package manager: YAY");
            return "yay";

        if (!QStandardPaths::findExecutable("apt").isEmpty())
            writeLog("Package manager: APT");
            return "apt";

        if (!QStandardPaths::findExecutable("dnf").isEmpty())
            writeLog("Package manager: DNF");
            return "dnf";

        if (!QStandardPaths::findExecutable("zypper").isEmpty())
            writeLog("Package manager: ZYPPER");
            return "zypper";
    #endif

    return "pacman"; // safe fallback for Arch-based systems
}

QString MainWindow::choosePackageManager()
{
    QStringList managers = {
        "pacman",
        "yay",
        "apt",
        "dnf",
        "zypper"
    };

    bool ok;
    QString choice = QInputDialog::getItem(
        this,
        "Select Package Manager",
        "Choose how to install this package:",
        managers,
        0,
        false,
        &ok
        );
    writeLog("Choosed package manager: " + choice);
    // If user cancels → fallback to system default
    if (!ok || choice.isEmpty())
        return detectPackageManager();

    return choice;
}

QStringList MainWindow::getInstallCommand(const QString &pkgManager, const QString &package)
{
    if (pkgManager == "pacman") {
        writeLog("Install command: pacman -Sy --noconfirm " + package);
        return {"pacman", "-Sy", "--noconfirm", package};
    }
    if (pkgManager == "apt") {
        writeLog("Install command: apt install -y " + package);
        return {"apt", "install", "-y", package};
    }
    if (pkgManager == "dnf") {
        writeLog("Install command: dnf install -y " + package);
        return {"dnf", "install", "-y", package};
    }
    if (pkgManager == "zypper") {
        writeLog("Install command: zypper --non-interactive install " + package);
        return {"zypper", "--non-interactive", "install", package};
    }

    writeLog("Install command: unknown package manager: " + pkgManager);
    return {};
}

QStringList MainWindow::getRemoveCommand(const QString &pkgManager, const QString &package)
{
    if (pkgManager == "pacman") {
        writeLog("Remove command: pacman -Rs --noconfirm " + package);
        return {"pacman", "-Rs", "--noconfirm", package};
    }
    if (pkgManager == "yay") {
        writeLog("Remove command: yay -Rns --noconfirm " + package);
        return {"yay", "-Rns", "--noconfirm", package};
    }
    if (pkgManager == "apt") {
        writeLog("Remove command: apt remove -y " + package);
        return {"apt", "remove", "-y", package};
    }
    if (pkgManager == "dnf") {
        writeLog("Remove command: dnf remove -y " + package);
        return {"dnf", "remove", "-y", package};
    }
    if (pkgManager == "zypper") {
        writeLog("Remove command: zypper --non-interactive remove " + package);
        return {"zypper", "--non-interactive", "remove", package};
    }

    writeLog("Remove command: unknown package manager: " + pkgManager);
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
    for (const QString &arg : args)
        command += " " + arg;

    // Detect terminal
    QString terminal;

    const QStringList terminals = {
        "konsole",
        "gnome-terminal",
        "xfce4-terminal",
        "kitty",
        "alacritty",
        "terminator",
        "xterm"
    };

    for (const QString &t : terminals) {
        if (QStandardPaths::findExecutable(t).length() > 0) {
            terminal = t;
            break;
        }
    }

    if (terminal.isEmpty()) {
        QMessageBox::critical(this, "Error", "No supported terminal found");
        return;
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

    QStringList terminalArgs;

    if (terminal == "konsole") {
        terminalArgs << "-e" << "bash" << "-c"
                     << command + "; echo; echo 'Press Enter to close...'; read";
    }
    else if (terminal == "gnome-terminal") {
        terminalArgs << "--" << "bash" << "-c"
                     << command + "; echo; echo 'Press Enter...'; read";
    }
    else if (terminal == "xfce4-terminal") {
        terminalArgs << "-e" << "bash -c \"" +
                                    command + "; echo; read\"";
    }
    else {
        // generic fallback (xterm/kitty/alacritty)
        terminalArgs << "-e" << "bash" << "-c"
                     << command + "; echo; read";
    }

    p->start(terminal, terminalArgs);

    ui->statusbar->showMessage(txt + " launched in " + terminal);
}

void MainWindow::runWithProgress(
    const QString &statusMsg,
    const QStringList &args,
    std::function<void(bool)> onFinished)
{
    showProgress(statusMsg);

    QProcess *process = new QProcess(this);
    process->setProcessChannelMode(QProcess::MergedChannels);

    connect(process,
            QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            this,
            [this, process, statusMsg, onFinished](int exitCode, QProcess::ExitStatus)
            {
                bool ok = (exitCode == 0);

                if (ok) {
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

                if (onFinished)
                    onFinished(ok);
            });

    connect(process, &QProcess::errorOccurred,
            this,
            [this, process, onFinished](QProcess::ProcessError)
            {
                QMessageBox::warning(
                    this,
                    "Process Error",
                    process->errorString()
                    );
                    writeLog("Process error: " +  process->errorString()); // works or not ?
                hideProgress();
                process->deleteLater();

                if (onFinished)
                    onFinished(false);  // also fire callback on error
            });

    process->start("pkexec", args);
}

// Now it needs a feature that updates tools checklist after package is installed
void MainWindow::installPackage(const QString &package)
{
    QString pm = choosePackageManager();

    if (pm.isEmpty())
        pm = getPackageManager(); // system default

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
    checkbox->setEnabled(false);

    auto refresh = [this, checkbox, package](bool /*success*/) {
        bool installed = isInstalled(package);
        checkbox->blockSignals(true);
        checkbox->setChecked(installed);
        checkbox->blockSignals(false);
        checkbox->setEnabled(true);
    };

    QString pm = choosePackageManager();
    if (pm.isEmpty())
        pm = getPackageManager();

    if (checked) {
        runWithProgress(
            "Installing " + package + "...",
            getInstallCommand(pm, package),
            refresh          // ← called when the process exits
        );
    } else {
        runWithProgress(
            "Removing " + package + "...",
            getRemoveCommand(pm, package),
            refresh
        );
    }
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
    qDebug() << "MB:" << motherboard;
    qDebug() << "GPU:" << gpu;

    writeLog("CPU: " + cpu);
    writeLog("Motherboard: " + motherboard);
    writeLog("GPU: " + gpu);
    writeLog("RAM: " + ram);


}

void MainWindow::on_btnOpenLogs_clicked()
{
    writeLog("Opening logs folder");
    QString logDir = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    QDesktopServices::openUrl(QUrl::fromLocalFile(logDir));
}
