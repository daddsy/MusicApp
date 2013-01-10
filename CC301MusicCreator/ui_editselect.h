/********************************************************************************
** Form generated from reading UI file 'editselect.ui'
**
** Created: Mon 8. Mar 17:39:44 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSELECT_H
#define UI_EDITSELECT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_editSelect
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *comboBox;
    QLabel *lbSelector;

    void setupUi(QDialog *editSelect)
    {
        if (editSelect->objectName().isEmpty())
            editSelect->setObjectName(QString::fromUtf8("editSelect"));
        editSelect->resize(400, 128);
        buttonBox = new QDialogButtonBox(editSelect);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(50, 80, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        comboBox = new QComboBox(editSelect);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 40, 381, 31));
        lbSelector = new QLabel(editSelect);
        lbSelector->setObjectName(QString::fromUtf8("lbSelector"));
        lbSelector->setGeometry(QRect(10, 10, 171, 16));

        retranslateUi(editSelect);
        QObject::connect(buttonBox, SIGNAL(accepted()), editSelect, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), editSelect, SLOT(reject()));

        QMetaObject::connectSlotsByName(editSelect);
    } // setupUi

    void retranslateUi(QDialog *editSelect)
    {
        editSelect->setWindowTitle(QApplication::translate("editSelect", "Dialog", 0, QApplication::UnicodeUTF8));
        lbSelector->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class editSelect: public Ui_editSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSELECT_H
