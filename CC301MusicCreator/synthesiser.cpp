#include "synthesiser.h"
#include "ui_synthesiser.h"
#include <sstream>
#include "mainwindow.h"



Synthesiser::Synthesiser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Synthesiser)
{
    ui->setupUi(this);
    Lposition=1;
    ui->lbBeat->display(Lposition);
    ui->blPrevious->setDisabled(true);
    setSlots();
}

Synthesiser::~Synthesiser()
{
    delete ui;
}

void Synthesiser::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Synthesiser::on_dNote_sliderMoved(int position)
{
    //this sets the dials position in memory.
   s.setNote(Lposition,position);

    //this changes the integer value from the dial into a note in the standard keyboard range
   int octave = (position / 11)+1;
   std::string s;
   std::stringstream outputStr;
   outputStr << octave;
   s=outputStr.str();
   char outputChar = s[0];
    ui->lbOctave->setText(s.c_str());
   int note = position % 11;
   if (note == 1) {
       ui->lbNote->setText("C");
   } else if (note == 2){
       ui->lbNote->setText("C#");
   } else if (note == 3){
       ui->lbNote->setText("D");
   } else if (note == 4){
       ui->lbNote->setText("D#");
   } else if (note == 5){
       ui->lbNote->setText("E");
   } else if (note == 6){
       ui->lbNote->setText("F");
   } else if (note == 7){
       ui->lbNote->setText("F#");
   } else if (note == 8){
       ui->lbNote->setText("G");
   } else if (note == 9){
       ui->lbNote->setText("G#");
   } else if (note == 10){
       ui->lbNote->setText("A");
   } else if (note == 11){
       ui->lbNote->setText("A#");
   } else if (note == 0){
       ui->lbNote->setText("B");
   }
}

void Synthesiser::on_btNext_clicked()
{
    //change the position marker in memory
    Lposition=Lposition+1;
    ui->lbBeat->display(Lposition);
    ui->cbHold->setEnabled(true);

    if (Lposition==16){
        ui->btNext->setDisabled(true);
    } else ui->btNext->setEnabled(true);

    if (Lposition==1){
        ui->blPrevious->setDisabled(true);
    } else ui->blPrevious->setEnabled(true);
    setSlots();
}

void Synthesiser::on_blPrevious_clicked()
{
    //change the position marker in memory
    Lposition=Lposition-1;
    ui->lbBeat->display(Lposition);

    if (Lposition==16){
        ui->btNext->setDisabled(true);
    } else ui->btNext->setEnabled(true);

    if (Lposition==1){
        ui->cbHold->setEnabled(false);
        ui->blPrevious->setDisabled(true);
    } else ui->blPrevious->setEnabled(true);
    setSlots();
}

//void Synthesiser::setSlots(){
    //ui->dNote->setValue();
//}

void Synthesiser::on_dNote_dialReleased()
{

}

void Synthesiser::on_dVolume_sliderMoved(int position)
{
    //this sets the dials position in memory.
   s.setVolume(Lposition,position);
}

void Synthesiser::on_dAttack_sliderMoved(int position)
{
    s.setAttack(Lposition,position);
}

void Synthesiser::on_dSustain_sliderMoved(int position)
{
    s.setSustain(Lposition,position);
}

void Synthesiser::on_dRelease_sliderMoved(int position)
{
    s.setRelease(Lposition,position);
}

void Synthesiser::on_dVolume_valueChanged(int value)
{

}

void Synthesiser::setSlots(){
ui->dVolume->setSliderPosition(s.getVolume(Lposition));
ui->dAttack->setSliderPosition(s.getAttack(Lposition));
ui->dNote->setSliderPosition((s.getNote(Lposition)));
ui->dRelease->setSliderPosition(s.getRelease(Lposition));
ui->dSustain->setSliderPosition(s.getSustain(Lposition));
on_dNote_sliderMoved(s.getNote(Lposition));
if (s.getCont(Lposition)==true) {
    ui->cbHold->setChecked(true);
}
else ui->cbHold->setChecked(false);
}

void Synthesiser::on_cbHold_toggled(bool checked)
{
    if (checked==true){
    int Tposition = Lposition;
    Tposition = Tposition-1;
    s.setCont(Lposition,checked);
    s.setAttack(Lposition, s.getAttack(Tposition));
    s.setNote(Lposition,s.getNote(Tposition));
    s.setRelease(Lposition, s.getRelease(Tposition));
    s.setSustain(Lposition,s.getSustain(Tposition));
    s.setVolume(Lposition, s.getRelease(Tposition));
    ui->dAttack->setEnabled(false);
    ui->dNote->setEnabled(false);
    ui->dRelease->setEnabled(false);
    ui->dSustain->setEnabled(false);
    ui->dVolume->setEnabled(false);
}
    else{
        ui->dAttack->setEnabled(true);
        ui->dNote->setEnabled(true);
        ui->dRelease->setEnabled(true);
        ui->dSustain->setEnabled(true);
        ui->dVolume->setEnabled(true);
    }
    setSlots();

}
