/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon 8. Mar 17:39:44 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExport_as_wav;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionZoom;
    QAction *actionSampler_Window;
    QAction *actionSynthesiser_Window;
    QAction *actionMixer_Window;
    QAction *actionZoom_2;
    QAction *actionProduction_Properties;
    QAction *actionOpen_sampler;
    QAction *actionSample_settings;
    QAction *actionOpen_synthesiser;
    QAction *actionChange_synthesiser_settings;
    QAction *actionAudio_Settings;
    QAction *actionMidi_Settings;
    QAction *actionAbout;
    QAction *actionSampler;
    QAction *actionSynthesiser;
    QAction *actionAudio;
    QAction *actionEdit_Sampler_Block;
    QAction *actionEdit_Synthesiser_Block;
    QWidget *centralWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QListView *listView;
    QListView *listView_2;
    QLabel *label_3;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_5;
    QMenuBar *menuBar;
    QMenu *menuMusic_Creator_V0_1b;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuSynthesiser;
    QMenu *menuHelp;
    QMenu *menuHelp_2;
    QMenu *menuNew_Track;
    QMenu *menuSampler;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1045, 787);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionExport_as_wav = new QAction(MainWindow);
        actionExport_as_wav->setObjectName(QString::fromUtf8("actionExport_as_wav"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionZoom = new QAction(MainWindow);
        actionZoom->setObjectName(QString::fromUtf8("actionZoom"));
        actionSampler_Window = new QAction(MainWindow);
        actionSampler_Window->setObjectName(QString::fromUtf8("actionSampler_Window"));
        actionSynthesiser_Window = new QAction(MainWindow);
        actionSynthesiser_Window->setObjectName(QString::fromUtf8("actionSynthesiser_Window"));
        actionMixer_Window = new QAction(MainWindow);
        actionMixer_Window->setObjectName(QString::fromUtf8("actionMixer_Window"));
        actionZoom_2 = new QAction(MainWindow);
        actionZoom_2->setObjectName(QString::fromUtf8("actionZoom_2"));
        actionProduction_Properties = new QAction(MainWindow);
        actionProduction_Properties->setObjectName(QString::fromUtf8("actionProduction_Properties"));
        actionOpen_sampler = new QAction(MainWindow);
        actionOpen_sampler->setObjectName(QString::fromUtf8("actionOpen_sampler"));
        actionSample_settings = new QAction(MainWindow);
        actionSample_settings->setObjectName(QString::fromUtf8("actionSample_settings"));
        actionOpen_synthesiser = new QAction(MainWindow);
        actionOpen_synthesiser->setObjectName(QString::fromUtf8("actionOpen_synthesiser"));
        actionChange_synthesiser_settings = new QAction(MainWindow);
        actionChange_synthesiser_settings->setObjectName(QString::fromUtf8("actionChange_synthesiser_settings"));
        actionAudio_Settings = new QAction(MainWindow);
        actionAudio_Settings->setObjectName(QString::fromUtf8("actionAudio_Settings"));
        actionMidi_Settings = new QAction(MainWindow);
        actionMidi_Settings->setObjectName(QString::fromUtf8("actionMidi_Settings"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionSampler = new QAction(MainWindow);
        actionSampler->setObjectName(QString::fromUtf8("actionSampler"));
        actionSynthesiser = new QAction(MainWindow);
        actionSynthesiser->setObjectName(QString::fromUtf8("actionSynthesiser"));
        actionAudio = new QAction(MainWindow);
        actionAudio->setObjectName(QString::fromUtf8("actionAudio"));
        actionEdit_Sampler_Block = new QAction(MainWindow);
        actionEdit_Sampler_Block->setObjectName(QString::fromUtf8("actionEdit_Sampler_Block"));
        actionEdit_Synthesiser_Block = new QAction(MainWindow);
        actionEdit_Synthesiser_Block->setObjectName(QString::fromUtf8("actionEdit_Synthesiser_Block"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(30, 40, 981, 521));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 979, 519));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 10, 41, 23));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(220, 10, 81, 23));
        lcdNumber_2 = new QLCDNumber(centralWidget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(350, 10, 111, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 10, 41, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 10, 41, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 10, 31, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 10, 31, 16));
        listView = new QListView(centralWidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(30, 580, 481, 141));
        listView_2 = new QListView(centralWidget);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));
        listView_2->setGeometry(QRect(530, 580, 481, 141));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(470, 10, 81, 16));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(550, 10, 42, 22));
        spinBox_2 = new QSpinBox(centralWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(590, 10, 42, 22));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(640, 10, 41, 16));
        doubleSpinBox = new QDoubleSpinBox(centralWidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(680, 10, 62, 22));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(750, 10, 21, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1045, 21));
        menuMusic_Creator_V0_1b = new QMenu(menuBar);
        menuMusic_Creator_V0_1b->setObjectName(QString::fromUtf8("menuMusic_Creator_V0_1b"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuSynthesiser = new QMenu(menuBar);
        menuSynthesiser->setObjectName(QString::fromUtf8("menuSynthesiser"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuHelp_2 = new QMenu(menuBar);
        menuHelp_2->setObjectName(QString::fromUtf8("menuHelp_2"));
        menuNew_Track = new QMenu(menuBar);
        menuNew_Track->setObjectName(QString::fromUtf8("menuNew_Track"));
        menuSampler = new QMenu(menuBar);
        menuSampler->setObjectName(QString::fromUtf8("menuSampler"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuMusic_Creator_V0_1b->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuNew_Track->menuAction());
        menuBar->addAction(menuSampler->menuAction());
        menuBar->addAction(menuSynthesiser->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuHelp_2->menuAction());
        menuMusic_Creator_V0_1b->addAction(actionNew);
        menuMusic_Creator_V0_1b->addSeparator();
        menuMusic_Creator_V0_1b->addAction(actionOpen);
        menuMusic_Creator_V0_1b->addAction(actionSave);
        menuMusic_Creator_V0_1b->addSeparator();
        menuMusic_Creator_V0_1b->addAction(actionExport_as_wav);
        menuMusic_Creator_V0_1b->addSeparator();
        menuMusic_Creator_V0_1b->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuView->addAction(actionSampler_Window);
        menuView->addAction(actionSynthesiser_Window);
        menuView->addAction(actionMixer_Window);
        menuView->addSeparator();
        menuView->addAction(actionZoom_2);
        menuView->addSeparator();
        menuView->addAction(actionProduction_Properties);
        menuSynthesiser->addAction(actionOpen_synthesiser);
        menuSynthesiser->addAction(actionChange_synthesiser_settings);
        menuSynthesiser->addSeparator();
        menuSynthesiser->addAction(actionEdit_Synthesiser_Block);
        menuHelp->addAction(actionAudio_Settings);
        menuHelp->addAction(actionMidi_Settings);
        menuHelp_2->addAction(actionAbout);
        menuNew_Track->addAction(actionSampler);
        menuNew_Track->addAction(actionSynthesiser);
        menuNew_Track->addAction(actionAudio);
        menuSampler->addAction(actionOpen_sampler);
        menuSampler->addSeparator();
        menuSampler->addAction(actionEdit_Sampler_Block);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("MainWindow", "New", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        actionExport_as_wav->setText(QApplication::translate("MainWindow", "Export as .wav", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", 0, QApplication::UnicodeUTF8));
        actionZoom->setText(QApplication::translate("MainWindow", "Zoom", 0, QApplication::UnicodeUTF8));
        actionSampler_Window->setText(QApplication::translate("MainWindow", "Sampler Window", 0, QApplication::UnicodeUTF8));
        actionSynthesiser_Window->setText(QApplication::translate("MainWindow", "Synthesiser Window", 0, QApplication::UnicodeUTF8));
        actionMixer_Window->setText(QApplication::translate("MainWindow", "Mixer Window", 0, QApplication::UnicodeUTF8));
        actionZoom_2->setText(QApplication::translate("MainWindow", "Zoom", 0, QApplication::UnicodeUTF8));
        actionProduction_Properties->setText(QApplication::translate("MainWindow", "Production Properties", 0, QApplication::UnicodeUTF8));
        actionOpen_sampler->setText(QApplication::translate("MainWindow", "New sampler block", 0, QApplication::UnicodeUTF8));
        actionSample_settings->setText(QApplication::translate("MainWindow", "Sample settings", 0, QApplication::UnicodeUTF8));
        actionOpen_synthesiser->setText(QApplication::translate("MainWindow", "New synthesiser block", 0, QApplication::UnicodeUTF8));
        actionChange_synthesiser_settings->setText(QApplication::translate("MainWindow", "Change synthesiser settings", 0, QApplication::UnicodeUTF8));
        actionAudio_Settings->setText(QApplication::translate("MainWindow", "Audio Settings", 0, QApplication::UnicodeUTF8));
        actionMidi_Settings->setText(QApplication::translate("MainWindow", "Midi Settings", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionSampler->setText(QApplication::translate("MainWindow", "Sampler", 0, QApplication::UnicodeUTF8));
        actionSynthesiser->setText(QApplication::translate("MainWindow", "Synthesiser", 0, QApplication::UnicodeUTF8));
        actionAudio->setText(QApplication::translate("MainWindow", "Audio", 0, QApplication::UnicodeUTF8));
        actionEdit_Sampler_Block->setText(QApplication::translate("MainWindow", "Edit Sampler Block", 0, QApplication::UnicodeUTF8));
        actionEdit_Synthesiser_Block->setText(QApplication::translate("MainWindow", "Edit Synthesiser Block", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Play", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Stop", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "Pause", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Bar:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Time:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Time Signature:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Tempo:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "BPM", 0, QApplication::UnicodeUTF8));
        menuMusic_Creator_V0_1b->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
        menuSynthesiser->setTitle(QApplication::translate("MainWindow", "Synthesiser", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Preferences", 0, QApplication::UnicodeUTF8));
        menuHelp_2->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuNew_Track->setTitle(QApplication::translate("MainWindow", "New Track...", 0, QApplication::UnicodeUTF8));
        menuSampler->setTitle(QApplication::translate("MainWindow", "Sampler", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
