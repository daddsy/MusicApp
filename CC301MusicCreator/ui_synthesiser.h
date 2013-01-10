/********************************************************************************
** Form generated from reading UI file 'synthesiser.ui'
**
** Created: Wed 17. Feb 19:31:51 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYNTHESISER_H
#define UI_SYNTHESISER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDial>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Synthesiser
{
public:
    QWidget *centralwidget;
    QLCDNumber *lbBeat;
    QCheckBox *cbHold;
    QDial *dNote;
    QLabel *lbNote;
    QDial *dVolume;
    QDial *dAttack;
    QDial *dRelease;
    QDial *dSustain;
    QPushButton *blPrevious;
    QPushButton *btNext;
    QLabel *lbOctave;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Synthesiser)
    {
        if (Synthesiser->objectName().isEmpty())
            Synthesiser->setObjectName(QString::fromUtf8("Synthesiser"));
        Synthesiser->resize(281, 402);
        centralwidget = new QWidget(Synthesiser);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lbBeat = new QLCDNumber(centralwidget);
        lbBeat->setObjectName(QString::fromUtf8("lbBeat"));
        lbBeat->setGeometry(QRect(20, 10, 241, 51));
        cbHold = new QCheckBox(centralwidget);
        cbHold->setObjectName(QString::fromUtf8("cbHold"));
        cbHold->setEnabled(false);
        cbHold->setGeometry(QRect(80, 100, 121, 17));
        dNote = new QDial(centralwidget);
        dNote->setObjectName(QString::fromUtf8("dNote"));
        dNote->setGeometry(QRect(40, 170, 201, 161));
        dNote->setMinimum(1);
        dNote->setMaximum(68);
        lbNote = new QLabel(centralwidget);
        lbNote->setObjectName(QString::fromUtf8("lbNote"));
        lbNote->setGeometry(QRect(130, 160, 21, 16));
        dVolume = new QDial(centralwidget);
        dVolume->setObjectName(QString::fromUtf8("dVolume"));
        dVolume->setGeometry(QRect(30, 150, 50, 64));
        dAttack = new QDial(centralwidget);
        dAttack->setObjectName(QString::fromUtf8("dAttack"));
        dAttack->setGeometry(QRect(200, 150, 50, 64));
        dRelease = new QDial(centralwidget);
        dRelease->setObjectName(QString::fromUtf8("dRelease"));
        dRelease->setGeometry(QRect(200, 290, 50, 64));
        dSustain = new QDial(centralwidget);
        dSustain->setObjectName(QString::fromUtf8("dSustain"));
        dSustain->setGeometry(QRect(30, 290, 50, 64));
        blPrevious = new QPushButton(centralwidget);
        blPrevious->setObjectName(QString::fromUtf8("blPrevious"));
        blPrevious->setGeometry(QRect(20, 70, 75, 23));
        btNext = new QPushButton(centralwidget);
        btNext->setObjectName(QString::fromUtf8("btNext"));
        btNext->setGeometry(QRect(190, 70, 75, 23));
        lbOctave = new QLabel(centralwidget);
        lbOctave->setObjectName(QString::fromUtf8("lbOctave"));
        lbOctave->setGeometry(QRect(150, 160, 46, 13));
        Synthesiser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Synthesiser);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 281, 21));
        Synthesiser->setMenuBar(menubar);
        statusbar = new QStatusBar(Synthesiser);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Synthesiser->setStatusBar(statusbar);

        retranslateUi(Synthesiser);

        QMetaObject::connectSlotsByName(Synthesiser);
    } // setupUi

    void retranslateUi(QMainWindow *Synthesiser)
    {
        Synthesiser->setWindowTitle(QApplication::translate("Synthesiser", "MainWindow", 0, QApplication::UnicodeUTF8));
        cbHold->setText(QApplication::translate("Synthesiser", "Hold previous beat", 0, QApplication::UnicodeUTF8));
        lbNote->setText(QApplication::translate("Synthesiser", "C", 0, QApplication::UnicodeUTF8));
        blPrevious->setText(QApplication::translate("Synthesiser", "Backwards", 0, QApplication::UnicodeUTF8));
        btNext->setText(QApplication::translate("Synthesiser", "Forward", 0, QApplication::UnicodeUTF8));
        lbOctave->setText(QApplication::translate("Synthesiser", "1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Synthesiser: public Ui_Synthesiser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYNTHESISER_H
