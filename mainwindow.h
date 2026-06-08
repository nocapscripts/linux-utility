#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCheckBox>
#include <functional>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;



private slots:
    void on_btnDisablePAM_clicked();
    void on_btnRestorePAM_clicked();
    void on_btnUpdateSystem_clicked();
    void on_btnOpenLogs_clicked();
    void writeLog(const QString& txt);
    void updateDistroLabel();
    void getSystemData();
    void onCheckboxToggled(QCheckBox* checkbox, const QString& package, bool checked);

private:
    Ui::MainWindow *ui;

    bool isInstalled(const QString& package);
    void runWithProgress(const QString &statusMsg,
                         const QStringList &args,
                         std::function<void(bool)> onFinished = nullptr);
    void installPackage(const QString& package);
    void removePackage(const QString& package);
    void showProgress(const QString& message);
    void runInTerminal(const QString& txt, const QStringList& args);
    void hideProgress();
    // Package manager system
    QString getPackageManager();
    QString detectPackageManager();
    QString choosePackageManager();
    QStringList getInstallCommand(const QString& pm, const QString& package);
    QStringList getRemoveCommand(const QString& pm, const QString& package);
};

#endif // MAINWINDOW_H
