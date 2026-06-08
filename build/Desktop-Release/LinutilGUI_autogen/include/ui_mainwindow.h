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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
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
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QFrame *frame_4;
    QCheckBox *chBrave;
    QCheckBox *chFirefox;
    QCheckBox *chChromium;
    QCheckBox *chOpera;
    QWidget *tab_5;
    QFrame *frame_3;
    QCheckBox *chCode;
    QCheckBox *chZed;
    QCheckBox *chVSCodium;
    QCheckBox *chNeovim;
    QCheckBox *chNODEJS;
    QWidget *tab_6;
    QFrame *frame_8;
    QCheckBox *chSteam;
    QCheckBox *chLutris;
    QCheckBox *chHeroic;
    QFrame *frame_14;
    QCheckBox *chLegacyNvidia580;
    QCheckBox *chLegacyNvidia470;
    QCheckBox *chLegacyNvidia390;
    QCheckBox *chNvidiaCurrent;
    QCheckBox *chNvidiaOpen;
    QWidget *tab_7;
    QFrame *frame_5;
    QCheckBox *chSpotify;
    QCheckBox *chDiscord;
    QCheckBox *chTelegram;
    QWidget *tab_14;
    QFrame *frame_11;
    QCheckBox *chAlacritty;
    QCheckBox *chKonsole;
    QCheckBox *chKitty;
    QCheckBox *chGnomeTerm;
    QCheckBox *chXfce4;
    QCheckBox *chWezterm;
    QCheckBox *chKrita;
    QWidget *tab_8;
    QFrame *frame_9;
    QCheckBox *chOBS;
    QCheckBox *chGIMP;
    QCheckBox *chKdenlive;
    QCheckBox *chVLC;
    QCheckBox *chInkscape;
    QWidget *tab_2;
    QFrame *frame_6;
    QFrame *frame;
    QPushButton *btnDisablePAM;
    QLabel *label;
    QPushButton *btnRestorePAM;
    QFrame *frame_10;
    QPushButton *btnUpdateSystem;
    QLabel *label_2;
    QWidget *tab_3;
    QFrame *frame_7;
    QFrame *frame_12;
    QLabel *DistInfo_Label;
    QFrame *frame_13;
    QGroupBox *groupBox;
    QLabel *cpuTitle;
    QLabel *cpuLabel;
    QLabel *mbTitle;
    QLabel *gpuTitle;
    QLabel *ramTitle;
    QLabel *mbLabel;
    QLabel *ramLabel;
    QLabel *gpuLabel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1031, 723);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 1031, 701));
        tabWidget->setTabPosition(QTabWidget::TabPosition::South);
        tabWidget->setElideMode(Qt::TextElideMode::ElideMiddle);
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(0, 0, 1031, 671));
        tabWidget_2->setTabPosition(QTabWidget::TabPosition::North);
        tabWidget_2->setElideMode(Qt::TextElideMode::ElideNone);
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        frame_4 = new QFrame(tab_4);
        frame_4->setObjectName("frame_4");
        frame_4->setEnabled(true);
        frame_4->setGeometry(QRect(0, 0, 221, 641));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(102, 102, 102, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        QBrush brush2(QColor(153, 153, 153, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        QBrush brush3(QColor(127, 127, 127, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        QBrush brush4(QColor(51, 51, 51, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        QBrush brush5(QColor(68, 68, 68, 255));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush8(QColor(255, 255, 255, 127));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush9(QColor(51, 51, 51, 127));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
        QBrush brush10(QColor(72, 72, 72, 255));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        frame_4->setPalette(palette);
        frame_4->setMouseTracking(false);
        frame_4->setAcceptDrops(true);
        frame_4->setAutoFillBackground(true);
        frame_4->setFrameShape(QFrame::Shape::Panel);
        frame_4->setFrameShadow(QFrame::Shadow::Sunken);
        chBrave = new QCheckBox(frame_4);
        chBrave->setObjectName("chBrave");
        chBrave->setGeometry(QRect(10, 10, 201, 21));
        QFont font;
        font.setPointSize(14);
        chBrave->setFont(font);
        chFirefox = new QCheckBox(frame_4);
        chFirefox->setObjectName("chFirefox");
        chFirefox->setGeometry(QRect(10, 40, 201, 21));
        chFirefox->setFont(font);
        chChromium = new QCheckBox(frame_4);
        chChromium->setObjectName("chChromium");
        chChromium->setGeometry(QRect(10, 70, 201, 21));
        chChromium->setFont(font);
        chOpera = new QCheckBox(frame_4);
        chOpera->setObjectName("chOpera");
        chOpera->setGeometry(QRect(10, 100, 201, 21));
        chOpera->setFont(font);
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        frame_3 = new QFrame(tab_5);
        frame_3->setObjectName("frame_3");
        frame_3->setEnabled(true);
        frame_3->setGeometry(QRect(0, 0, 241, 641));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        frame_3->setPalette(palette1);
        frame_3->setMouseTracking(false);
        frame_3->setAcceptDrops(true);
        frame_3->setAutoFillBackground(true);
        frame_3->setFrameShape(QFrame::Shape::Panel);
        frame_3->setFrameShadow(QFrame::Shadow::Sunken);
        chCode = new QCheckBox(frame_3);
        chCode->setObjectName("chCode");
        chCode->setGeometry(QRect(10, 10, 221, 23));
        chCode->setFont(font);
        chZed = new QCheckBox(frame_3);
        chZed->setObjectName("chZed");
        chZed->setGeometry(QRect(10, 40, 221, 23));
        chZed->setFont(font);
        chVSCodium = new QCheckBox(frame_3);
        chVSCodium->setObjectName("chVSCodium");
        chVSCodium->setGeometry(QRect(10, 70, 221, 23));
        chVSCodium->setFont(font);
        chNeovim = new QCheckBox(frame_3);
        chNeovim->setObjectName("chNeovim");
        chNeovim->setGeometry(QRect(10, 100, 221, 23));
        chNeovim->setFont(font);
        chNODEJS = new QCheckBox(frame_3);
        chNODEJS->setObjectName("chNODEJS");
        chNODEJS->setGeometry(QRect(10, 130, 221, 23));
        chNODEJS->setFont(font);
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        frame_8 = new QFrame(tab_6);
        frame_8->setObjectName("frame_8");
        frame_8->setEnabled(true);
        frame_8->setGeometry(QRect(0, 0, 251, 641));
        QPalette palette2;
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        frame_8->setPalette(palette2);
        frame_8->setMouseTracking(false);
        frame_8->setAcceptDrops(true);
        frame_8->setAutoFillBackground(true);
        frame_8->setFrameShape(QFrame::Shape::Panel);
        frame_8->setFrameShadow(QFrame::Shadow::Sunken);
        chSteam = new QCheckBox(frame_8);
        chSteam->setObjectName("chSteam");
        chSteam->setGeometry(QRect(10, 10, 191, 23));
        chSteam->setFont(font);
        chLutris = new QCheckBox(frame_8);
        chLutris->setObjectName("chLutris");
        chLutris->setGeometry(QRect(10, 40, 191, 23));
        chLutris->setFont(font);
        chHeroic = new QCheckBox(frame_8);
        chHeroic->setObjectName("chHeroic");
        chHeroic->setGeometry(QRect(10, 70, 191, 23));
        chHeroic->setFont(font);
        frame_14 = new QFrame(tab_6);
        frame_14->setObjectName("frame_14");
        frame_14->setEnabled(true);
        frame_14->setGeometry(QRect(260, 0, 251, 641));
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        frame_14->setPalette(palette3);
        frame_14->setMouseTracking(false);
        frame_14->setAcceptDrops(true);
        frame_14->setAutoFillBackground(true);
        frame_14->setFrameShape(QFrame::Shape::Panel);
        frame_14->setFrameShadow(QFrame::Shadow::Sunken);
        chLegacyNvidia580 = new QCheckBox(frame_14);
        chLegacyNvidia580->setObjectName("chLegacyNvidia580");
        chLegacyNvidia580->setGeometry(QRect(10, 70, 191, 23));
        chLegacyNvidia580->setFont(font);
        chLegacyNvidia470 = new QCheckBox(frame_14);
        chLegacyNvidia470->setObjectName("chLegacyNvidia470");
        chLegacyNvidia470->setGeometry(QRect(10, 100, 191, 23));
        chLegacyNvidia470->setFont(font);
        chLegacyNvidia390 = new QCheckBox(frame_14);
        chLegacyNvidia390->setObjectName("chLegacyNvidia390");
        chLegacyNvidia390->setGeometry(QRect(10, 130, 191, 23));
        chLegacyNvidia390->setFont(font);
        chNvidiaCurrent = new QCheckBox(frame_14);
        chNvidiaCurrent->setObjectName("chNvidiaCurrent");
        chNvidiaCurrent->setGeometry(QRect(10, 10, 191, 23));
        chNvidiaCurrent->setFont(font);
        chNvidiaOpen = new QCheckBox(frame_14);
        chNvidiaOpen->setObjectName("chNvidiaOpen");
        chNvidiaOpen->setGeometry(QRect(10, 40, 191, 23));
        chNvidiaOpen->setFont(font);
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");
        frame_5 = new QFrame(tab_7);
        frame_5->setObjectName("frame_5");
        frame_5->setEnabled(true);
        frame_5->setGeometry(QRect(0, 0, 221, 641));
        QPalette palette4;
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        frame_5->setPalette(palette4);
        frame_5->setMouseTracking(false);
        frame_5->setAcceptDrops(true);
        frame_5->setAutoFillBackground(true);
        frame_5->setFrameShape(QFrame::Shape::Panel);
        frame_5->setFrameShadow(QFrame::Shadow::Sunken);
        chSpotify = new QCheckBox(frame_5);
        chSpotify->setObjectName("chSpotify");
        chSpotify->setGeometry(QRect(10, 10, 201, 23));
        chSpotify->setFont(font);
        chDiscord = new QCheckBox(frame_5);
        chDiscord->setObjectName("chDiscord");
        chDiscord->setGeometry(QRect(10, 40, 201, 23));
        chDiscord->setFont(font);
        chTelegram = new QCheckBox(frame_5);
        chTelegram->setObjectName("chTelegram");
        chTelegram->setGeometry(QRect(10, 70, 201, 23));
        chTelegram->setFont(font);
        tabWidget_2->addTab(tab_7, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName("tab_14");
        frame_11 = new QFrame(tab_14);
        frame_11->setObjectName("frame_11");
        frame_11->setEnabled(true);
        frame_11->setGeometry(QRect(0, 0, 221, 641));
        QPalette palette5;
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        frame_11->setPalette(palette5);
        frame_11->setMouseTracking(false);
        frame_11->setAcceptDrops(true);
        frame_11->setAutoFillBackground(true);
        frame_11->setFrameShape(QFrame::Shape::Panel);
        frame_11->setFrameShadow(QFrame::Shadow::Sunken);
        chAlacritty = new QCheckBox(frame_11);
        chAlacritty->setObjectName("chAlacritty");
        chAlacritty->setGeometry(QRect(10, 10, 201, 23));
        chAlacritty->setFont(font);
        chKonsole = new QCheckBox(frame_11);
        chKonsole->setObjectName("chKonsole");
        chKonsole->setGeometry(QRect(10, 40, 201, 23));
        chKonsole->setFont(font);
        chKitty = new QCheckBox(frame_11);
        chKitty->setObjectName("chKitty");
        chKitty->setGeometry(QRect(10, 70, 201, 23));
        chKitty->setFont(font);
        chGnomeTerm = new QCheckBox(frame_11);
        chGnomeTerm->setObjectName("chGnomeTerm");
        chGnomeTerm->setGeometry(QRect(10, 100, 201, 23));
        chGnomeTerm->setFont(font);
        chXfce4 = new QCheckBox(frame_11);
        chXfce4->setObjectName("chXfce4");
        chXfce4->setGeometry(QRect(10, 130, 201, 23));
        chXfce4->setFont(font);
        chWezterm = new QCheckBox(frame_11);
        chWezterm->setObjectName("chWezterm");
        chWezterm->setGeometry(QRect(10, 160, 201, 23));
        chWezterm->setFont(font);
        chKrita = new QCheckBox(frame_11);
        chKrita->setObjectName("chKrita");
        chKrita->setGeometry(QRect(10, 190, 201, 23));
        chKrita->setFont(font);
        tabWidget_2->addTab(tab_14, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName("tab_8");
        frame_9 = new QFrame(tab_8);
        frame_9->setObjectName("frame_9");
        frame_9->setEnabled(true);
        frame_9->setGeometry(QRect(0, 0, 221, 641));
        QPalette palette6;
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        frame_9->setPalette(palette6);
        frame_9->setMouseTracking(false);
        frame_9->setAcceptDrops(true);
        frame_9->setAutoFillBackground(true);
        frame_9->setFrameShape(QFrame::Shape::Panel);
        frame_9->setFrameShadow(QFrame::Shadow::Sunken);
        chOBS = new QCheckBox(frame_9);
        chOBS->setObjectName("chOBS");
        chOBS->setGeometry(QRect(10, 10, 201, 23));
        chOBS->setFont(font);
        chGIMP = new QCheckBox(frame_9);
        chGIMP->setObjectName("chGIMP");
        chGIMP->setGeometry(QRect(10, 40, 201, 23));
        chGIMP->setFont(font);
        chKdenlive = new QCheckBox(frame_9);
        chKdenlive->setObjectName("chKdenlive");
        chKdenlive->setGeometry(QRect(10, 70, 201, 23));
        chKdenlive->setFont(font);
        chVLC = new QCheckBox(frame_9);
        chVLC->setObjectName("chVLC");
        chVLC->setGeometry(QRect(10, 100, 201, 23));
        chVLC->setFont(font);
        chInkscape = new QCheckBox(frame_9);
        chInkscape->setObjectName("chInkscape");
        chInkscape->setGeometry(QRect(10, 130, 201, 23));
        chInkscape->setFont(font);
        tabWidget_2->addTab(tab_8, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        frame_6 = new QFrame(tab_2);
        frame_6->setObjectName("frame_6");
        frame_6->setEnabled(true);
        frame_6->setGeometry(QRect(-10, 0, 1041, 671));
        QPalette palette7;
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        frame_6->setPalette(palette7);
        frame_6->setMouseTracking(false);
        frame_6->setAcceptDrops(true);
        frame_6->setAutoFillBackground(true);
        frame_6->setFrameShape(QFrame::Shape::Panel);
        frame_6->setFrameShadow(QFrame::Shadow::Sunken);
        frame = new QFrame(frame_6);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 0, 181, 671));
        QPalette palette8;
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush11(QColor(45, 45, 45, 255));
        brush11.setStyle(Qt::BrushStyle::SolidPattern);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush11);
        QBrush brush12(QColor(67, 67, 67, 255));
        brush12.setStyle(Qt::BrushStyle::SolidPattern);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush12);
        QBrush brush13(QColor(56, 56, 56, 255));
        brush13.setStyle(Qt::BrushStyle::SolidPattern);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush13);
        QBrush brush14(QColor(22, 22, 22, 255));
        brush14.setStyle(Qt::BrushStyle::SolidPattern);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush14);
        QBrush brush15(QColor(30, 30, 30, 255));
        brush15.setStyle(Qt::BrushStyle::SolidPattern);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush15);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush11);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush14);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush11);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush12);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush13);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush14);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush15);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush11);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush14);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush14);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush11);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush12);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush13);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush14);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush15);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush14);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush14);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush11);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush11);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush11);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush16(QColor(22, 22, 22, 127));
        brush16.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush16);
#endif
        QBrush brush17(QColor(32, 32, 32, 255));
        brush17.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush17);
#endif
        frame->setPalette(palette8);
        frame->setAutoFillBackground(true);
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        btnDisablePAM = new QPushButton(frame);
        btnDisablePAM->setObjectName("btnDisablePAM");
        btnDisablePAM->setGeometry(QRect(10, 40, 161, 31));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 161, 20));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        btnRestorePAM = new QPushButton(frame);
        btnRestorePAM->setObjectName("btnRestorePAM");
        btnRestorePAM->setGeometry(QRect(10, 80, 161, 31));
        frame_10 = new QFrame(frame_6);
        frame_10->setObjectName("frame_10");
        frame_10->setGeometry(QRect(200, 0, 181, 671));
        QPalette palette9;
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush11);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush12);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush13);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush14);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush15);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush11);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush14);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush11);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush12);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush13);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush14);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush15);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush11);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush14);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush14);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush11);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush12);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush13);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush14);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush15);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush14);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush14);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush11);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush11);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush11);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush16);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush17);
#endif
        frame_10->setPalette(palette9);
        frame_10->setAutoFillBackground(true);
        frame_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_10->setFrameShadow(QFrame::Shadow::Raised);
        btnUpdateSystem = new QPushButton(frame_10);
        btnUpdateSystem->setObjectName("btnUpdateSystem");
        btnUpdateSystem->setGeometry(QRect(10, 40, 161, 31));
        label_2 = new QLabel(frame_10);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 10, 161, 20));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        frame_7 = new QFrame(tab_3);
        frame_7->setObjectName("frame_7");
        frame_7->setEnabled(true);
        frame_7->setGeometry(QRect(-10, 0, 1041, 671));
        QPalette palette10;
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        frame_7->setPalette(palette10);
        frame_7->setMouseTracking(false);
        frame_7->setAcceptDrops(true);
        frame_7->setAutoFillBackground(true);
        frame_7->setFrameShape(QFrame::Shape::Panel);
        frame_7->setFrameShadow(QFrame::Shadow::Sunken);
        frame_12 = new QFrame(frame_7);
        frame_12->setObjectName("frame_12");
        frame_12->setGeometry(QRect(870, 640, 171, 31));
        QPalette palette11;
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush11);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush12);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush13);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush14);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush15);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush11);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush14);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush11);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush12);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush13);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush14);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush15);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush11);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush14);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush14);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush11);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush12);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush13);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush14);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush15);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush14);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush14);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush11);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush11);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush11);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush16);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush17);
#endif
        frame_12->setPalette(palette11);
        frame_12->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        frame_12->setAutoFillBackground(true);
        frame_12->setFrameShape(QFrame::Shape::StyledPanel);
        frame_12->setFrameShadow(QFrame::Shadow::Raised);
        DistInfo_Label = new QLabel(frame_12);
        DistInfo_Label->setObjectName("DistInfo_Label");
        DistInfo_Label->setGeometry(QRect(20, 0, 131, 31));
        QFont font1;
        font1.setPointSize(8);
        DistInfo_Label->setFont(font1);
        DistInfo_Label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        DistInfo_Label->setScaledContents(true);
        DistInfo_Label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame_13 = new QFrame(frame_7);
        frame_13->setObjectName("frame_13");
        frame_13->setGeometry(QRect(20, 10, 1011, 601));
        QPalette palette12;
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush11);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush12);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush13);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush14);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush15);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush11);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush14);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush11);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush12);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush13);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush14);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush15);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush11);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush14);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush14);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush11);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush12);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush13);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush14);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush15);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush14);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush14);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush11);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush11);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush11);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush16);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush17);
#endif
        frame_13->setPalette(palette12);
        frame_13->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        frame_13->setAutoFillBackground(true);
        frame_13->setFrameShape(QFrame::Shape::StyledPanel);
        frame_13->setFrameShadow(QFrame::Shadow::Raised);
        groupBox = new QGroupBox(frame_13);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 991, 581));
        QPalette palette13;
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush18(QColor(25, 25, 25, 255));
        brush18.setStyle(Qt::BrushStyle::SolidPattern);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush18);
        QBrush brush19(QColor(37, 37, 37, 255));
        brush19.setStyle(Qt::BrushStyle::SolidPattern);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush19);
        QBrush brush20(QColor(31, 31, 31, 255));
        brush20.setStyle(Qt::BrushStyle::SolidPattern);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush20);
        QBrush brush21(QColor(12, 12, 12, 255));
        brush21.setStyle(Qt::BrushStyle::SolidPattern);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush21);
        QBrush brush22(QColor(17, 17, 17, 255));
        brush22.setStyle(Qt::BrushStyle::SolidPattern);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush22);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush18);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush21);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush18);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush19);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush20);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush21);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush22);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush18);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush21);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush21);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush18);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush19);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush20);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush21);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush22);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush21);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush21);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush18);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush18);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush18);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush23(QColor(12, 12, 12, 127));
        brush23.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush23);
#endif
        QBrush brush24(QColor(18, 18, 18, 255));
        brush24.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush24);
#endif
        groupBox->setPalette(palette13);
        groupBox->setAutoFillBackground(true);
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        cpuTitle = new QLabel(groupBox);
        cpuTitle->setObjectName("cpuTitle");
        cpuTitle->setGeometry(QRect(340, 40, 311, 31));
        QFont font2;
        font2.setBold(true);
        font2.setUnderline(true);
        cpuTitle->setFont(font2);
        cpuTitle->setTextFormat(Qt::TextFormat::PlainText);
        cpuTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);
        cpuLabel = new QLabel(groupBox);
        cpuLabel->setObjectName("cpuLabel");
        cpuLabel->setGeometry(QRect(80, 80, 841, 31));
        QFont font3;
        font3.setBold(false);
        font3.setUnderline(false);
        cpuLabel->setFont(font3);
        cpuLabel->setTextFormat(Qt::TextFormat::AutoText);
        cpuLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        mbTitle = new QLabel(groupBox);
        mbTitle->setObjectName("mbTitle");
        mbTitle->setGeometry(QRect(340, 120, 311, 31));
        mbTitle->setFont(font2);
        mbTitle->setTextFormat(Qt::TextFormat::PlainText);
        mbTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);
        gpuTitle = new QLabel(groupBox);
        gpuTitle->setObjectName("gpuTitle");
        gpuTitle->setGeometry(QRect(340, 310, 311, 31));
        gpuTitle->setFont(font2);
        gpuTitle->setTextFormat(Qt::TextFormat::PlainText);
        gpuTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ramTitle = new QLabel(groupBox);
        ramTitle->setObjectName("ramTitle");
        ramTitle->setGeometry(QRect(340, 220, 311, 31));
        ramTitle->setFont(font2);
        ramTitle->setTextFormat(Qt::TextFormat::PlainText);
        ramTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);
        mbLabel = new QLabel(groupBox);
        mbLabel->setObjectName("mbLabel");
        mbLabel->setGeometry(QRect(80, 170, 841, 31));
        mbLabel->setFont(font3);
        mbLabel->setTextFormat(Qt::TextFormat::AutoText);
        mbLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ramLabel = new QLabel(groupBox);
        ramLabel->setObjectName("ramLabel");
        ramLabel->setGeometry(QRect(80, 260, 831, 31));
        ramLabel->setFont(font3);
        ramLabel->setTextFormat(Qt::TextFormat::AutoText);
        ramLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        gpuLabel = new QLabel(groupBox);
        gpuLabel->setObjectName("gpuLabel");
        gpuLabel->setGeometry(QRect(70, 360, 841, 31));
        gpuLabel->setFont(font3);
        gpuLabel->setTextFormat(Qt::TextFormat::AutoText);
        gpuLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Linutil GUI", nullptr));
        chBrave->setText(QCoreApplication::translate("MainWindow", "Brave Browser", nullptr));
        chFirefox->setText(QCoreApplication::translate("MainWindow", "Firefox", nullptr));
        chChromium->setText(QCoreApplication::translate("MainWindow", "Chromium", nullptr));
        chOpera->setText(QCoreApplication::translate("MainWindow", "Opera Browser", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", "The browsers", nullptr));
        chCode->setText(QCoreApplication::translate("MainWindow", "Visual Studio Code", nullptr));
        chZed->setText(QCoreApplication::translate("MainWindow", "Zed Studio", nullptr));
        chVSCodium->setText(QCoreApplication::translate("MainWindow", "VSCodium", nullptr));
        chNeovim->setText(QCoreApplication::translate("MainWindow", "Neovim", nullptr));
        chNODEJS->setText(QCoreApplication::translate("MainWindow", "NODEJS", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Programming", nullptr));
        chSteam->setText(QCoreApplication::translate("MainWindow", "Steam", nullptr));
        chLutris->setText(QCoreApplication::translate("MainWindow", "Lutris", nullptr));
        chHeroic->setText(QCoreApplication::translate("MainWindow", "Heroic Launcher", nullptr));
        chLegacyNvidia580->setText(QCoreApplication::translate("MainWindow", "NVIDIA Driver 580", nullptr));
        chLegacyNvidia470->setText(QCoreApplication::translate("MainWindow", "NVIDIA Driver 470", nullptr));
        chLegacyNvidia390->setText(QCoreApplication::translate("MainWindow", "NVIDIA Driver 390", nullptr));
        chNvidiaCurrent->setText(QCoreApplication::translate("MainWindow", "NVIDIA Current", nullptr));
        chNvidiaOpen->setText(QCoreApplication::translate("MainWindow", "NVIDIA Open", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Gaming", nullptr));
        chSpotify->setText(QCoreApplication::translate("MainWindow", "Spotify", nullptr));
        chDiscord->setText(QCoreApplication::translate("MainWindow", "Discord", nullptr));
        chTelegram->setText(QCoreApplication::translate("MainWindow", "Telegram", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QCoreApplication::translate("MainWindow", "Communication", nullptr));
        chAlacritty->setText(QCoreApplication::translate("MainWindow", "Alacritty", nullptr));
        chKonsole->setText(QCoreApplication::translate("MainWindow", "Konsole", nullptr));
        chKitty->setText(QCoreApplication::translate("MainWindow", "Kitty", nullptr));
        chGnomeTerm->setText(QCoreApplication::translate("MainWindow", "Gnome Terminal", nullptr));
        chXfce4->setText(QCoreApplication::translate("MainWindow", "XFCE4 Terminal", nullptr));
        chWezterm->setText(QCoreApplication::translate("MainWindow", "Westerm", nullptr));
        chKrita->setText(QCoreApplication::translate("MainWindow", "Krita", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_14), QCoreApplication::translate("MainWindow", "Terminals", nullptr));
        chOBS->setText(QCoreApplication::translate("MainWindow", "OBS", nullptr));
        chGIMP->setText(QCoreApplication::translate("MainWindow", "GIMP", nullptr));
        chKdenlive->setText(QCoreApplication::translate("MainWindow", "Kdenlive", nullptr));
        chVLC->setText(QCoreApplication::translate("MainWindow", "VLC Player", nullptr));
        chInkscape->setText(QCoreApplication::translate("MainWindow", "Inkscape", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QCoreApplication::translate("MainWindow", "Misc", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Applications", nullptr));
        btnDisablePAM->setText(QCoreApplication::translate("MainWindow", "Disable Lockout", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "User  Related", nullptr));
        btnRestorePAM->setText(QCoreApplication::translate("MainWindow", "Restore Lockout", nullptr));
        btnUpdateSystem->setText(QCoreApplication::translate("MainWindow", "Update System", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "System related", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tweaks", nullptr));
#if QT_CONFIG(statustip)
        frame_12->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        DistInfo_Label->setText(QString());
#if QT_CONFIG(statustip)
        frame_13->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "System Info", nullptr));
        cpuTitle->setText(QCoreApplication::translate("MainWindow", "Processor Type", nullptr));
        cpuLabel->setText(QString());
        mbTitle->setText(QCoreApplication::translate("MainWindow", "Motherboard", nullptr));
        gpuTitle->setText(QCoreApplication::translate("MainWindow", "GPU", nullptr));
        ramTitle->setText(QCoreApplication::translate("MainWindow", "RAM", nullptr));
        mbLabel->setText(QString());
        ramLabel->setText(QString());
        gpuLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
