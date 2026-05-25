/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QProgressBar *progressBar;
    QLabel *statusLabel;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QCheckBox *chFirefox;
    QCheckBox *chBrave;
    QWidget *tab_5;
    QCheckBox *chCode;
    QCheckBox *chZed;
    QWidget *tab_6;
    QWidget *tab_7;
    QCheckBox *chDiscord;
    QCheckBox *chSpotify;
    QWidget *tab_2;
    QWidget *tab_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 801, 601));
        tab = new QWidget();
        tab->setObjectName("tab");
        progressBar = new QProgressBar(tab);
        progressBar->setObjectName("progressBar");
        progressBar->setEnabled(true);
        progressBar->setGeometry(QRect(250, 510, 281, 23));
        progressBar->setValue(24);
        progressBar->setTextVisible(true);
        statusLabel = new QLabel(tab);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setEnabled(true);
        statusLabel->setGeometry(QRect(280, 480, 211, 20));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(0, 0, 801, 491));
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        chFirefox = new QCheckBox(tab_4);
        chFirefox->setObjectName("chFirefox");
        chFirefox->setGeometry(QRect(20, 30, 91, 41));
        QFont font;
        font.setPointSize(14);
        chFirefox->setFont(font);
        chBrave = new QCheckBox(tab_4);
        chBrave->setObjectName("chBrave");
        chBrave->setGeometry(QRect(20, 80, 221, 41));
        chBrave->setFont(font);
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        chCode = new QCheckBox(tab_5);
        chCode->setObjectName("chCode");
        chCode->setGeometry(QRect(280, 40, 201, 23));
        chCode->setFont(font);
        chZed = new QCheckBox(tab_5);
        chZed->setObjectName("chZed");
        chZed->setGeometry(QRect(280, 70, 201, 23));
        chZed->setFont(font);
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");
        chDiscord = new QCheckBox(tab_7);
        chDiscord->setObjectName("chDiscord");
        chDiscord->setGeometry(QRect(270, 50, 201, 23));
        chDiscord->setFont(font);
        chSpotify = new QCheckBox(tab_7);
        chSpotify->setObjectName("chSpotify");
        chSpotify->setGeometry(QRect(270, 80, 201, 23));
        chSpotify->setFont(font);
        tabWidget_2->addTab(tab_7, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Linutil GUI", nullptr));
        statusLabel->setText(QString());
        chFirefox->setText(QCoreApplication::translate("MainWindow", "Firefox", nullptr));
        chBrave->setText(QCoreApplication::translate("MainWindow", "Brave Browser", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", "The browsers", nullptr));
        chCode->setText(QCoreApplication::translate("MainWindow", "Visual Studio Code", nullptr));
        chZed->setText(QCoreApplication::translate("MainWindow", "Zed Studio", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Programming", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Gaming", nullptr));
        chDiscord->setText(QCoreApplication::translate("MainWindow", "Discord", nullptr));
        chSpotify->setText(QCoreApplication::translate("MainWindow", "Spotify", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QCoreApplication::translate("MainWindow", "Communication", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Applications", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tweaks", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
