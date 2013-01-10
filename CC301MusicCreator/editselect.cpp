#include "editselect.h"
#include "ui_editselect.h"

editSelect::editSelect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editSelect)
{
    ui->setupUi(this);
}

editSelect::~editSelect()
{
    delete ui;
}

void editSelect::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

editSelect::editSelect(int type){
    if (type==0){
        ui->lbSelector->setText("Please choose which synthesiser block you wish to edit:");
        blockType=0;
    }
    else{
        ui->lbSelector->setText("Please choose which sampler block you wish to edit:");
        blockType=1;
    }
}

void editSelect::on_buttonBox_accepted()
{
    emit selected(ui->comboBox->currentIndex());
}
