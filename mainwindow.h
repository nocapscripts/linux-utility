#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCheckBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
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
    void onCheckboxToggled(QCheckBox* checkbox, const QString& package, bool checked);

private:
    Ui::MainWindow *ui;

    bool isInstalled(const QString& package);
    void runWithProgress(const QString& statusMsg, const QStringList& args);
    void installPackage(const QString& package);
    void removePackage(const QString& package);
    void showProgress(const QString& message);
    void hideProgress();
};

#endif // MAINWINDOW_H