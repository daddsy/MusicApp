#include "sampler.h"
#include "ui_sampler.h"
#include <sstream>

Sampler::Sampler(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sampler)
{
    ui->setupUi(this);
    position=0;
    playing=0;


}


Sampler::~Sampler()
{
    delete ui;
}

void Sampler::changeEvent(QEvent *e)
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

void Sampler::setPosition(int row, int beat, int attribute){
    s.setAttribute(row, beat, attribute);
}


void Sampler::on_dSample1Beat1_sliderReleased()
{
    setPosition(1,1,ui->dSample1Beat1->value());
}


void Sampler::on_dSample1Beat1_valueChanged(int value)
{
    setPosition(1,1,value);
    ui->tbSample1->setText("oh");
}

void Sampler::on_dSample1Beat2_sliderReleased()
{
    setPosition(1,2,ui->dSample1Beat2->value());
}

void Sampler::on_dSample1Beat3_sliderReleased()
{
    setPosition(1,3,ui->dSample1Beat3->value());
}

void Sampler::on_dSample1Beat4_sliderReleased()
{
    setPosition(1,4,ui->dSample1Beat4->value());
}

void Sampler::on_dSample1Beat5_sliderReleased()
{
    setPosition(1,5,ui->dSample1Beat5->value());
}

void Sampler::on_dSample1Beat6_sliderReleased()
{
    setPosition(1,6,ui->dSample1Beat6->value());
}

void Sampler::on_dSample1Beat7_sliderReleased()
{
     setPosition(1,7,ui->dSample1Beat7->value());
}

void Sampler::on_dSample1Beat8_sliderReleased()
{
     setPosition(1,8,ui->dSample1Beat8->value());
}

void Sampler::on_dSample1Beat9_sliderReleased()
{
     setPosition(1,9,ui->dSample1Beat9->value());
}

void Sampler::on_dSample1Beat10_sliderReleased()
{
     setPosition(1,10,ui->dSample1Beat10->value());
}

void Sampler::on_dSample1Beat11_sliderReleased()
{
     setPosition(1,11,ui->dSample1Beat11->value());
}

void Sampler::on_dSample1Beat12_sliderReleased()
{
     setPosition(1,12,ui->dSample1Beat12->value());
}

void Sampler::on_dSample1Beat13_sliderReleased()
{
     setPosition(1,13,ui->dSample1Beat13->value());
}

void Sampler::on_dSample1Beat14_sliderReleased()
{
     setPosition(1,14,ui->dSample1Beat14->value());
}

void Sampler::on_dSample1Beat15_sliderReleased()
{
     setPosition(1,15,ui->dSample1Beat15->value());
}

void Sampler::on_dSample1Beat16_sliderReleased()
{
     setPosition(1,16,ui->dSample1Beat16->value());
}

void Sampler::on_dSample2Beat1_sliderReleased()
{
    setPosition(2,1,ui->dSample2Beat1->value());
}

void Sampler::on_dSample2Beat2_sliderReleased()
{
    setPosition(2,2,ui->dSample2Beat2->value());
}

void Sampler::on_dSample2Beat3_sliderReleased()
{
    setPosition(2,3,ui->dSample2Beat3->value());
}

void Sampler::on_dSample2Beat4_sliderReleased()
{
    setPosition(2,4,ui->dSample2Beat4->value());
}

void Sampler::on_dSample2Beat5_sliderReleased()
{
    setPosition(2,5,ui->dSample2Beat5->value());
}

void Sampler::on_dSample2Beat6_sliderReleased()
{
    setPosition(2,6,ui->dSample2Beat6->value());
}

void Sampler::on_dSample2Beat7_sliderReleased()
{
    setPosition(2,7,ui->dSample2Beat7->value());
}

void Sampler::on_dSample2Beat8_sliderReleased()
{
    setPosition(2,8,ui->dSample2Beat8->value());
}

void Sampler::on_dSample2Beat9_sliderReleased()
{
    setPosition(2,9,ui->dSample2Beat9->value());
}

void Sampler::on_dSample2Beat10_sliderReleased()
{
    setPosition(2,10,ui->dSample2Beat10->value());
}

void Sampler::on_dSample2Beat11_sliderReleased()
{
    setPosition(2,11,ui->dSample2Beat11->value());
}

void Sampler::on_dSample2Beat12_sliderReleased()
{
    setPosition(2,12,ui->dSample2Beat12->value());
}

void Sampler::on_dSample2Beat13_sliderReleased()
{
    setPosition(2,13,ui->dSample2Beat13->value());
}

void Sampler::on_dSample2Beat14_sliderReleased()
{
    setPosition(2,14,ui->dSample2Beat14->value());
}

void Sampler::on_dSample2Beat15_sliderReleased()
{
    setPosition(2,15,ui->dSample2Beat15->value());
}

void Sampler::on_dSample2Beat16_sliderReleased()
{
    setPosition(2,16,ui->dSample2Beat16->value());
}

void Sampler::on_dSample3Beat1_sliderReleased()
{
    setPosition(3,1,ui->dSample3Beat1->value());
}

void Sampler::on_dSample3Beat2_sliderReleased()
{
    setPosition(3,2,ui->dSample3Beat2->value());
}

void Sampler::on_dSample3Beat3_sliderReleased()
{
    setPosition(3,3,ui->dSample3Beat3->value());
}

void Sampler::on_dSample3Beat4_sliderReleased()
{
    setPosition(3,4,ui->dSample3Beat4->value());
}

void Sampler::on_dSample3Beat5_sliderReleased()
{
    setPosition(3,5,ui->dSample3Beat5->value());
}

void Sampler::on_dSample3Beat6_sliderReleased()
{
    setPosition(3,6,ui->dSample3Beat6->value());
}

void Sampler::on_dSample3Beat7_sliderReleased()
{
    setPosition(3,7,ui->dSample3Beat7->value());
}

void Sampler::on_dSample3Beat8_sliderReleased()
{
    setPosition(3,8,ui->dSample3Beat8->value());
}

void Sampler::on_dSample3Beat9_sliderReleased()
{
    setPosition(3,9,ui->dSample3Beat9->value());
}

void Sampler::on_dSample3Beat10_sliderReleased()
{
    setPosition(3,10,ui->dSample3Beat10->value());
}

void Sampler::on_dSample3Beat11_sliderReleased()
{
    setPosition(3,11,ui->dSample3Beat11->value());
}

void Sampler::on_dSample3Beat12_sliderReleased()
{
    setPosition(3,12,ui->dSample3Beat12->value());
}

void Sampler::on_dSample3Beat13_sliderReleased()
{
    setPosition(3,13,ui->dSample3Beat13->value());
}

void Sampler::on_dSample3Beat14_sliderReleased()
{
    setPosition(3,14,ui->dSample3Beat14->value());
}

void Sampler::on_dSample3Beat15_sliderReleased()
{
    setPosition(3,15,ui->dSample3Beat15->value());
}

void Sampler::on_dSample3Beat16_sliderReleased()
{
    setPosition(3,16,ui->dSample3Beat16->value());
}

void Sampler::on_dSample4Beat1_sliderReleased()
{
    setPosition(4,1,ui->dSample4Beat1->value());
}

void Sampler::on_dSample4Beat2_sliderReleased()
{
    setPosition(4,2,ui->dSample4Beat2->value());
}

void Sampler::on_dSample4Beat3_sliderReleased()
{
    setPosition(4,3,ui->dSample4Beat3->value());
}

void Sampler::on_dSample4Beat4_sliderReleased()
{
    setPosition(4,4,ui->dSample4Beat4->value());
}

void Sampler::on_dSample4Beat5_sliderReleased()
{
    setPosition(4,5,ui->dSample4Beat5->value());
}

void Sampler::on_dSample4Beat6_sliderReleased()
{
    setPosition(4,6,ui->dSample4Beat6->value());
}

void Sampler::on_dSample4Beat7_sliderReleased()
{
    setPosition(4,7,ui->dSample4Beat7->value());
}

void Sampler::on_dSample4Beat8_sliderReleased()
{
    setPosition(4,8,ui->dSample4Beat8->value());
}

void Sampler::on_dSample4Beat9_sliderReleased()
{
    setPosition(4,9,ui->dSample4Beat9->value());
}

void Sampler::on_dSample4Beat10_sliderReleased()
{
    setPosition(4,10,ui->dSample4Beat10->value());
}

void Sampler::on_dSample4Beat11_sliderReleased()
{
    setPosition(4,11,ui->dSample4Beat11->value());
}

void Sampler::on_dSample4Beat12_sliderReleased()
{
    setPosition(4,12,ui->dSample4Beat12->value());
}

void Sampler::on_dSample4Beat13_sliderReleased()
{
    setPosition(4,13,ui->dSample4Beat13->value());
}

void Sampler::on_dSample4Beat14_sliderReleased()
{
    setPosition(4,14,ui->dSample4Beat14->value());
}

void Sampler::on_dSample4Beat15_sliderReleased()
{
    setPosition(4,15,ui->dSample4Beat15->value());
}

void Sampler::on_dSample4Beat16_sliderReleased()
{
    setPosition(4,16,ui->dSample4Beat16->value());
}

void Sampler::on_dSample5Beat1_sliderReleased()
{
    setPosition(5,1,ui->dSample5Beat1->value());
}

void Sampler::on_dSample5Beat2_sliderReleased()
{
    setPosition(5,2,ui->dSample5Beat2->value());
}

void Sampler::on_dSample5Beat3_sliderReleased()
{
    setPosition(5,3,ui->dSample5Beat3->value());
}

void Sampler::on_dSample5Beat4_sliderReleased()
{
    setPosition(5,4,ui->dSample5Beat4->value());
}

void Sampler::on_dSample5Beat5_sliderReleased()
{
    setPosition(5,5,ui->dSample5Beat5->value());
}

void Sampler::on_dSample5Beat6_sliderReleased()
{
    setPosition(5,6,ui->dSample5Beat6->value());
}

void Sampler::on_dSample5Beat7_sliderReleased()
{
    setPosition(5,7,ui->dSample5Beat7->value());
}

void Sampler::on_dSample5Beat8_sliderReleased()
{
    setPosition(5,8,ui->dSample5Beat8->value());
}

void Sampler::on_dSample5Beat9_sliderReleased()
{
    setPosition(5,9,ui->dSample5Beat9->value());
}

void Sampler::on_dSample5Beat10_sliderReleased()
{
    setPosition(5,10,ui->dSample5Beat10->value());
}

void Sampler::on_dSample5Beat11_sliderReleased()
{
    setPosition(5,11,ui->dSample5Beat11->value());
}

void Sampler::on_dSample5Beat12_sliderReleased()
{
    setPosition(5,12,ui->dSample5Beat12->value());
}

void Sampler::on_dSample5Beat13_sliderReleased()
{
    setPosition(5,13,ui->dSample5Beat13->value());
}

void Sampler::on_dSample5Beat14_sliderReleased()
{
    setPosition(5,14,ui->dSample5Beat14->value());
}

void Sampler::on_dSample5Beat15_sliderReleased()
{
    setPosition(5,15,ui->dSample5Beat15->value());
}

void Sampler::on_dSample5Beat16_sliderReleased()
{
    setPosition(5,16,ui->dSample5Beat16->value());
}

void Sampler::on_dSample6Beat1_sliderReleased()
{
    setPosition(6,1,ui->dSample6Beat1->value());
}

void Sampler::on_dSample6Beat2_sliderReleased()
{
    setPosition(6,2,ui->dSample6Beat2->value());
}

void Sampler::on_dSample6Beat3_sliderReleased()
{
    setPosition(6,3,ui->dSample6Beat3->value());
}

void Sampler::on_dSample6Beat4_sliderReleased()
{
    setPosition(6,4,ui->dSample6Beat4->value());
}

void Sampler::on_dSample6Beat5_sliderReleased()
{
    setPosition(6,5,ui->dSample6Beat5->value());
}

void Sampler::on_dSample6Beat6_sliderReleased()
{
    setPosition(6,6,ui->dSample6Beat6->value());
}

void Sampler::on_dSample6Beat7_sliderReleased()
{
    setPosition(6,7,ui->dSample6Beat7->value());
}

void Sampler::on_dSample6Beat8_sliderReleased()
{
    setPosition(6,8,ui->dSample6Beat8->value());
}

void Sampler::on_dSample6Beat9_sliderReleased()
{
    setPosition(6,9,ui->dSample6Beat9->value());
}


void Sampler::on_dSample6Beat10_sliderReleased()
{
     setPosition(6,10,ui->dSample6Beat10->value());
}

void Sampler::on_dSample6Beat11_sliderReleased()
{
    setPosition(6,11,ui->dSample6Beat11->value());
}

void Sampler::on_dSample6Beat12_sliderReleased()
{
    setPosition(6,12,ui->dSample6Beat12->value());
}

void Sampler::on_dSample6Beat13_sliderReleased()
{
    setPosition(6,13,ui->dSample6Beat13->value());
}

void Sampler::on_dSample6Beat14_sliderReleased()
{
    setPosition(6,14,ui->dSample6Beat14->value());
}

void Sampler::on_dSample6Beat15_sliderReleased()
{
    setPosition(6,15,ui->dSample6Beat15->value());
}

void Sampler::on_dSample6Beat16_sliderReleased()
{
    setPosition(6,16,ui->dSample6Beat16->value());
}

void Sampler::on_dSample7Beat1_sliderReleased()
{
    setPosition(7,1,ui->dSample7Beat1->value());
}

void Sampler::on_dSample7Beat2_sliderReleased()
{
    setPosition(7,2,ui->dSample7Beat2->value());
}

void Sampler::on_dSample7Beat3_sliderReleased()
{
    setPosition(7,3,ui->dSample7Beat3->value());
}

void Sampler::on_dSample7Beat4_sliderReleased()
{
    setPosition(7,4,ui->dSample7Beat4->value());
}

void Sampler::on_dSample7Beat5_sliderReleased()
{
    setPosition(7,5,ui->dSample7Beat5->value());
}

void Sampler::on_dSample7Beat6_sliderReleased()
{
    setPosition(7,6,ui->dSample7Beat6->value());
}

void Sampler::on_dSample7Beat7_sliderReleased()
{
    setPosition(7,7,ui->dSample7Beat7->value());
}

void Sampler::on_dSample7Beat8_sliderReleased()
{
    setPosition(7,8,ui->dSample7Beat8->value());
}

void Sampler::on_dSample7Beat9_sliderReleased()
{
    setPosition(7,9,ui->dSample7Beat9->value());
}

void Sampler::on_dSample7Beat10_sliderReleased()
{
    setPosition(7,10,ui->dSample7Beat10->value());
}

void Sampler::on_dSample7Beat11_sliderReleased()
{
    setPosition(7,11,ui->dSample7Beat11->value());
}

void Sampler::on_dSample7Beat12_sliderReleased()
{
    setPosition(7,12,ui->dSample7Beat12->value());
}

void Sampler::on_dSample7Beat13_sliderReleased()
{
    setPosition(7,13,ui->dSample7Beat13->value());
}

void Sampler::on_dSample7Beat14_sliderReleased()
{
    setPosition(7,14,ui->dSample7Beat14->value());
}

void Sampler::on_dSample7Beat15_sliderReleased()
{
    setPosition(7,15,ui->dSample7Beat15->value());
}

void Sampler::on_dSample7Beat16_sliderReleased()
{
    setPosition(7,16,ui->dSample7Beat16->value());
}

void Sampler::on_dSample8Beat1_sliderReleased()
{
    setPosition(8,1,ui->dSample8Beat1->value());
}

void Sampler::on_dSample8Beat2_sliderReleased()
{
    setPosition(8,2,ui->dSample8Beat2->value());
}

void Sampler::on_dSample8Beat3_sliderReleased()
{
    setPosition(8,3,ui->dSample8Beat3->value());
}

void Sampler::on_dSample8Beat4_sliderReleased()
{
    setPosition(8,4,ui->dSample8Beat4->value());
}

void Sampler::on_dSample8Beat5_sliderReleased()
{
    setPosition(8,5,ui->dSample8Beat5->value());
}

void Sampler::on_dSample8Beat6_sliderReleased()
{
    setPosition(8,6,ui->dSample8Beat6->value());
}

void Sampler::on_dSample8Beat7_sliderReleased()
{
    setPosition(8,7,ui->dSample8Beat7->value());
}

void Sampler::on_dSample8Beat8_sliderReleased()
{
    setPosition(8,8,ui->dSample8Beat8->value());
}

void Sampler::on_dSample8Beat9_sliderReleased()
{
    setPosition(8,9,ui->dSample8Beat9->value());
}

void Sampler::on_dSample8Beat10_sliderReleased()
{
    setPosition(8,10,ui->dSample8Beat10->value());
}

void Sampler::on_dSample8Beat11_sliderReleased()
{
    setPosition(8,11,ui->dSample8Beat11->value());
}

void Sampler::on_dSample8Beat12_sliderReleased()
{
    setPosition(8,12,ui->dSample8Beat12->value());
}

void Sampler::on_dSample8Beat13_sliderReleased()
{
    setPosition(8,13,ui->dSample8Beat13->value());
}

void Sampler::on_dSample8Beat14_sliderReleased()
{
    setPosition(8,14,ui->dSample8Beat14->value());
}

void Sampler::on_dSample8Beat15_sliderReleased()
{
    setPosition(8,15,ui->dSample8Beat15->value());
}

void Sampler::on_dSample8Beat16_sliderReleased()
{
    setPosition(8,16,ui->dSample8Beat16->value());
}

void Sampler::on_dSample9Beat1_sliderReleased()
{
    setPosition(9,1,ui->dSample9Beat1->value());
}

void Sampler::on_dSample9Beat2_sliderReleased()
{
    setPosition(9,2,ui->dSample9Beat2->value());
}

void Sampler::on_dSample9Beat3_sliderReleased()
{
    setPosition(9,3,ui->dSample9Beat3->value());
}

void Sampler::on_dSample9Beat4_sliderReleased()
{
    setPosition(9,4,ui->dSample9Beat4->value());
}

void Sampler::on_dSample9Beat5_sliderReleased()
{
    setPosition(9,5,ui->dSample9Beat5->value());
}

void Sampler::on_dSample9Beat6_sliderReleased()
{
    setPosition(9,6,ui->dSample9Beat6->value());
}

void Sampler::on_dSample9Beat7_sliderReleased()
{
    setPosition(9,7,ui->dSample9Beat7->value());
}

void Sampler::on_dSample9Beat8_sliderReleased()
{
    setPosition(9,8,ui->dSample9Beat8->value());
}

void Sampler::on_dSample9Beat9_sliderReleased()
{
    setPosition(9,9,ui->dSample9Beat9->value());
}

void Sampler::on_dSample9Beat10_sliderReleased()
{
    setPosition(9,10,ui->dSample9Beat10->value());
}

void Sampler::on_dSample9Beat11_sliderReleased()
{
    setPosition(9,11,ui->dSample9Beat11->value());
}

void Sampler::on_dSample9Beat12_sliderReleased()
{
    setPosition(9,12,ui->dSample9Beat12->value());
}

void Sampler::on_dSample9Beat13_sliderReleased()
{
    setPosition(9,13,ui->dSample9Beat13->value());
}

void Sampler::on_dSample9Beat14_sliderReleased()
{
    setPosition(9,14,ui->dSample9Beat14->value());
}

void Sampler::on_dSample9Beat15_sliderReleased()
{
    setPosition(9,15,ui->dSample9Beat15->value());
}

void Sampler::on_dSample9Beat16_sliderReleased()
{
    setPosition(9,16,ui->dSample9Beat16->value());
}

void Sampler::on_dSample10Beat1_sliderReleased()
{
    setPosition(10,1,ui->dSample10Beat1->value());
}

void Sampler::on_dSample10Beat2_sliderReleased()
{
    setPosition(10,2,ui->dSample10Beat2->value());
}

void Sampler::on_dSample10Beat3_sliderReleased()
{
    setPosition(10,3,ui->dSample10Beat3->value());
}

void Sampler::on_dSample10Beat4_sliderReleased()
{
    setPosition(10,4,ui->dSample10Beat4->value());
}

void Sampler::on_dSample10Beat5_sliderReleased()
{
    setPosition(10,5,ui->dSample10Beat5->value());
}

void Sampler::on_dSample10Beat6_sliderReleased()
{
    setPosition(10,6,ui->dSample10Beat6->value());
}

void Sampler::on_dSample10Beat7_sliderReleased()
{
    setPosition(10,7,ui->dSample10Beat7->value());
}

void Sampler::on_dSample10Beat8_sliderReleased()
{
    setPosition(10,8,ui->dSample10Beat8->value());
}

void Sampler::on_dSample10Beat9_sliderReleased()
{
    setPosition(10,9,ui->dSample10Beat9->value());
}

void Sampler::on_dSample10Beat10_sliderReleased()
{
    setPosition(10,10,ui->dSample10Beat10->value());
}

void Sampler::on_dSample10Beat11_sliderReleased()
{
    setPosition(10,11,ui->dSample10Beat11->value());
}

void Sampler::on_dSample10Beat12_sliderReleased()
{
    setPosition(10,12,ui->dSample10Beat12->value());
}

void Sampler::on_dSample10Beat13_sliderReleased()
{
    setPosition(10,13,ui->dSample10Beat13->value());
}

void Sampler::on_dSample10Beat14_sliderReleased()
{
    setPosition(10,14,ui->dSample10Beat14->value());
}

void Sampler::on_dSample10Beat15_sliderReleased()
{
    setPosition(10,15,ui->dSample10Beat15->value());
}

void Sampler::on_dSample10Beat16_sliderReleased()
{
    setPosition(10,16,ui->dSample10Beat16->value());
}

void Sampler::on_dSample11Beat1_sliderReleased()
{
    setPosition(11,1,ui->dSample11Beat1->value());
}

void Sampler::on_dSample11Beat2_sliderReleased()
{
    setPosition(11,2,ui->dSample11Beat2->value());
}

void Sampler::on_dSample11Beat3_sliderReleased()
{
    setPosition(11,3,ui->dSample11Beat3->value());
}

void Sampler::on_dSample11Beat4_sliderReleased()
{
    setPosition(11,4,ui->dSample11Beat4->value());
}

void Sampler::on_dSample11Beat5_sliderReleased()
{
    setPosition(11,5,ui->dSample11Beat5->value());
}

void Sampler::on_dSample11Beat6_sliderReleased()
{
    setPosition(11,6,ui->dSample11Beat6->value());
}

void Sampler::on_dSample11Beat7_sliderReleased()
{
    setPosition(11,7,ui->dSample11Beat7->value());
}

void Sampler::on_dSample11Beat8_sliderReleased()
{
    setPosition(11,8,ui->dSample11Beat8->value());
}

void Sampler::on_dSample11Beat9_sliderReleased()
{
    setPosition(11,9,ui->dSample11Beat9->value());
}

void Sampler::on_dSample11Beat10_sliderReleased()
{
    setPosition(11,10,ui->dSample11Beat10->value());
}

void Sampler::on_dSample11Beat11_sliderReleased()
{
    setPosition(11,11,ui->dSample11Beat11->value());
}

void Sampler::on_dSample11Beat12_sliderReleased()
{
    setPosition(11,12,ui->dSample11Beat12->value());
}

void Sampler::on_dSample11Beat13_sliderReleased()
{
    setPosition(11,13,ui->dSample11Beat13->value());
}

void Sampler::on_dSample11Beat14_sliderReleased()
{
    setPosition(11,14,ui->dSample11Beat14->value());
}

void Sampler::on_dSample11Beat15_sliderReleased()
{
    setPosition(11,15,ui->dSample11Beat15->value());
}

void Sampler::on_dSample11Beat16_sliderReleased()
{
   setPosition(11,16,ui->dSample11Beat16->value());
}

void Sampler::on_dSample12Beat1_sliderReleased()
{
    setPosition(12,1,ui->dSample12Beat1->value());
}

void Sampler::on_dSample12Beat2_sliderReleased()
{
    setPosition(12,2,ui->dSample12Beat2->value());
}

void Sampler::on_dSample12Beat3_sliderReleased()
{
    setPosition(12,3,ui->dSample12Beat3->value());
}

void Sampler::on_dSample12Beat4_sliderReleased()
{
    setPosition(12,4,ui->dSample12Beat4->value());
}

void Sampler::on_dSample12Beat5_sliderReleased()
{
    setPosition(12,5,ui->dSample12Beat5->value());
}

void Sampler::on_dSample12Beat6_sliderReleased()
{
    setPosition(12,6,ui->dSample12Beat6->value());
}

void Sampler::on_dSample12Beat7_sliderReleased()
{
    setPosition(12,7,ui->dSample12Beat7->value());
}

void Sampler::on_dSample12Beat8_sliderReleased()
{
    setPosition(12,8,ui->dSample12Beat8->value());
}

void Sampler::on_dSample12Beat9_sliderReleased()
{
    setPosition(12,9,ui->dSample12Beat9->value());
}

void Sampler::on_dSample12Beat10_sliderReleased()
{
    setPosition(12,10,ui->dSample12Beat10->value());
}

void Sampler::on_dSample12Beat11_sliderReleased()
{
    setPosition(12,11,ui->dSample12Beat11->value());
}

void Sampler::on_dSample12Beat12_sliderReleased()
{
    setPosition(12,12,ui->dSample12Beat12->value());
}

void Sampler::on_dSample12Beat13_sliderReleased()
{
    setPosition(12,13,ui->dSample12Beat13->value());
}

void Sampler::on_dSample12Beat15_sliderPressed()
{
    setPosition(12,15,ui->dSample12Beat15->value());
}

void Sampler::on_dSample12Beat14_sliderReleased()
{
    setPosition(12,14,ui->dSample12Beat14->value());
}

void Sampler::on_dSample12Beat15_sliderReleased()
{
    setPosition(12,15,ui->dSample12Beat15->value());
}

void Sampler::on_dSample12Beat16_sliderReleased()
{
    setPosition(12,16,ui->dSample12Beat16->value());
}

void Sampler::on_dSample13Beat1_sliderReleased()
{
    setPosition(13,1,ui->dSample13Beat1->value());
}

void Sampler::on_dSample13Beat2_sliderReleased()
{
    setPosition(13,2,ui->dSample13Beat2->value());
}

void Sampler::on_dSample13Beat3_sliderReleased()
{
    setPosition(13,3,ui->dSample13Beat3->value());
}

void Sampler::on_dSample13Beat4_sliderReleased()
{
    setPosition(13,4,ui->dSample13Beat4->value());
}

void Sampler::on_dSample13Beat5_sliderReleased()
{
    setPosition(13,5,ui->dSample13Beat5->value());
}

void Sampler::on_dSample13Beat6_sliderReleased()
{
    setPosition(13,6,ui->dSample13Beat6->value());
}

void Sampler::on_dSample13Beat7_sliderReleased()
{
    setPosition(13,7,ui->dSample13Beat7->value());
}

void Sampler::on_dSample13Beat8_sliderReleased()
{
    setPosition(13,8,ui->dSample13Beat8->value());
}

void Sampler::on_dSample13Beat9_sliderReleased()
{
    setPosition(13,9,ui->dSample13Beat9->value());
}

void Sampler::on_dSample13Beat10_sliderReleased()
{
    setPosition(13,10,ui->dSample13Beat10->value());
}

void Sampler::on_dSample13Beat11_sliderReleased()
{
    setPosition(13,11,ui->dSample13Beat11->value());
}

void Sampler::on_dSample13Beat12_sliderReleased()
{
    setPosition(13,12,ui->dSample13Beat12->value());
}

void Sampler::on_dSample13Beat13_sliderReleased()
{
    setPosition(13,13,ui->dSample13Beat13->value());
}

void Sampler::on_dSample13Beat14_sliderReleased()
{
    setPosition(13,14,ui->dSample13Beat14->value());
}

void Sampler::on_dSample13Beat15_sliderReleased()
{
    setPosition(13,15,ui->dSample13Beat15->value());
}

void Sampler::on_dSample13Beat16_sliderReleased()
{
    setPosition(13,16,ui->dSample13Beat16->value());
}

void Sampler::on_dSample14Beat1_sliderReleased()
{
    setPosition(14,1,ui->dSample14Beat1->value());
}

void Sampler::on_dSample14Beat2_sliderReleased()
{
    setPosition(14,2,ui->dSample14Beat2->value());
}

void Sampler::on_dSample14Beat3_sliderReleased()
{
    setPosition(14,3,ui->dSample14Beat3->value());
}

void Sampler::on_dSample14Beat4_sliderReleased()
{
    setPosition(14,4,ui->dSample14Beat4->value());
}

void Sampler::on_dSample14Beat5_sliderReleased()
{
    setPosition(14,5,ui->dSample14Beat5->value());
}

void Sampler::on_dSample14Beat6_sliderReleased()
{
    setPosition(14,6,ui->dSample14Beat6->value());
}

void Sampler::on_dSample14Beat7_sliderReleased()
{
    setPosition(14,7,ui->dSample14Beat7->value());
}

void Sampler::on_dSample14Beat8_sliderReleased()
{
    setPosition(14,8,ui->dSample14Beat8->value());
}

void Sampler::on_dSample14Beat9_sliderReleased()
{
    setPosition(14,9,ui->dSample14Beat9->value());
}

void Sampler::on_dSample14Beat10_sliderReleased()
{
    setPosition(14,10,ui->dSample14Beat10->value());
}

void Sampler::on_dSample14Beat11_sliderReleased()
{
    setPosition(14,11,ui->dSample14Beat11->value());
}

void Sampler::on_dSample14Beat12_sliderReleased()
{
    setPosition(14,12,ui->dSample14Beat12->value());
}

void Sampler::on_dSample14Beat13_sliderReleased()
{
    setPosition(14,13,ui->dSample14Beat13->value());
}

void Sampler::on_dSample14Beat14_sliderReleased()
{
    setPosition(14,14,ui->dSample14Beat14->value());
}

void Sampler::on_dSample14Beat15_sliderReleased()
{
    setPosition(14,15,ui->dSample14Beat15->value());
}

void Sampler::on_dSample14Beat16_sliderReleased()
{
    setPosition(14,16,ui->dSample14Beat16->value());
}

void Sampler::on_dSample15Beat1_sliderReleased()
{
    setPosition(15,1,ui->dSample15Beat1->value());
}

void Sampler::on_dSample15Beat2_sliderReleased()
{
    setPosition(15,2,ui->dSample15Beat2->value());
}

void Sampler::on_dSample15Beat3_sliderReleased()
{
    setPosition(15,3,ui->dSample15Beat3->value());
}

void Sampler::on_dSample15Beat4_sliderReleased()
{
    setPosition(15,4,ui->dSample15Beat4->value());
}

void Sampler::on_dSample15Beat5_sliderReleased()
{
    setPosition(15,5,ui->dSample15Beat5->value());
}

void Sampler::on_dSample15Beat6_sliderReleased()
{
    setPosition(15,6,ui->dSample15Beat6->value());
}

void Sampler::on_dSample15Beat7_sliderReleased()
{
    setPosition(15,7,ui->dSample15Beat7->value());
}

void Sampler::on_dSample15Beat8_sliderReleased()
{
    setPosition(15,8,ui->dSample15Beat8->value());
}

void Sampler::on_dSample15Beat9_sliderReleased()
{
    setPosition(15,9,ui->dSample15Beat9->value());
}

void Sampler::on_dSample15Beat10_sliderReleased()
{
    setPosition(15,10,ui->dSample15Beat10->value());
}

void Sampler::on_dSample15Beat11_sliderReleased()
{
    setPosition(15,11,ui->dSample15Beat11->value());
}

void Sampler::on_dSample15Beat12_sliderReleased()
{
    setPosition(15,12,ui->dSample15Beat12->value());
}

void Sampler::on_dSample15Beat13_sliderReleased()
{
    setPosition(15,13,ui->dSample15Beat13->value());
}

void Sampler::on_dSample15Beat14_sliderReleased()
{
    setPosition(15,14,ui->dSample15Beat14->value());
}

void Sampler::on_dSample15Beat15_sliderReleased()
{
    setPosition(15,15,ui->dSample15Beat15->value());
}

void Sampler::on_dSample15Beat16_sliderReleased()
{
    setPosition(15,16,ui->dSample15Beat16->value());
}

void Sampler::on_dSample16Beat1_sliderReleased()
{
    setPosition(16,1,ui->dSample16Beat1->value());
}

void Sampler::on_dSample16Beat2_sliderReleased()
{
    setPosition(16,2,ui->dSample16Beat2->value());
}

void Sampler::on_dSample16Beat3_sliderReleased()
{
    setPosition(16,3,ui->dSample16Beat3->value());
}

void Sampler::on_dSample16Beat4_sliderReleased()
{
    setPosition(16,4,ui->dSample16Beat4->value());
}

void Sampler::on_dSample16Beat5_sliderReleased()
{
    setPosition(16,5,ui->dSample16Beat5->value());
}

void Sampler::on_dSample16Beat6_sliderReleased()
{
    setPosition(16,6,ui->dSample16Beat6->value());
}

void Sampler::on_dSample16Beat7_sliderReleased()
{
    setPosition(16,7,ui->dSample16Beat7->value());
}

void Sampler::on_dSample16Beat8_sliderReleased()
{
    setPosition(16,8,ui->dSample16Beat8->value());
}

void Sampler::on_dSample16Beat9_sliderReleased()
{
    setPosition(16,9,ui->dSample16Beat9->value());
}

void Sampler::on_dSample16Beat10_sliderReleased()
{
    setPosition(16,10,ui->dSample16Beat10->value());
}

void Sampler::on_dSample16Beat11_sliderReleased()
{
    setPosition(16,11,ui->dSample16Beat11->value());
}

void Sampler::on_dSample16Beat12_sliderReleased()
{
    setPosition(16,12,ui->dSample16Beat12->value());
}

void Sampler::on_dSample16Beat13_sliderReleased()
{
    setPosition(16,13,ui->dSample16Beat13->value());
}

void Sampler::on_dSample16Beat14_sliderReleased()
{
    setPosition(16,14,ui->dSample16Beat14->value());
}

void Sampler::on_dSample16Beat15_sliderReleased()
{
    setPosition(16,15,ui->dSample16Beat15->value());
}

void Sampler::on_dSample16Beat16_sliderReleased()
{
    setPosition(16,16,ui->dSample16Beat16->value());
}



void Sampler::on_btPlay_clicked()
{
    if (playing==0){
    audio = new audioPlayback(s);

   // audio->exec();
    audio->run();

    playing=1;
    ui->btPlay->setText("Stop");
    connect(audio,SIGNAL(posChanged()),this, SLOT(onPosChange()));
    //audio->setPriority();
    } else
    {
        audio->stop();
        audio->exit();
        //delete audio;
        ui->btPlay->setText("Play");
        playing=0;
        ui->dSample1Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample1Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample1Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample1Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample1Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample1Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample1Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample1Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample1Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample1Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample1Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample1Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample1Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample1Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample1Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample1Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
    }






}

void Sampler::onPosChange(){
    int position = audio->getPosition();
    ui->pbPosition->setValue(position);
    //reset the colours:




    if (position==1){
        ui->dSample1Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat16->setStyleSheet("background-color: rgb(255, 255, 255)");

        if (s.attributes[1][position]>0) ui->dSample1Beat1->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample1Beat1->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[2][position]>0) ui->dSample2Beat1->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample2Beat1->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[3][position]>0) ui->dSample3Beat1->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample3Beat1->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[4][position]>0) ui->dSample4Beat1->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample4Beat1->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[5][position]>0) ui->dSample5Beat1->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample5Beat1->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[6][position]>0) ui->dSample6Beat1->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample6Beat1->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[7][position]>0) ui->dSample7Beat1->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample7Beat1->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[8][position]>0) ui->dSample8Beat1->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample8Beat1->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[9][position]>0) ui->dSample9Beat1->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample9Beat1->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[10][position]>0) ui->dSample10Beat1->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample10Beat1->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[11][position]>0) ui->dSample11Beat1->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample11Beat1->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[12][position]>0) ui->dSample12Beat1->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample12Beat1->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[13][position]>0) ui->dSample13Beat1->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample13Beat1->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[14][position]>0) ui->dSample14Beat1->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample14Beat1->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[15][position]>0) ui->dSample15Beat1->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample15Beat1->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[16][position]>0) ui->dSample16Beat1->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample16Beat1->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
    } else if (position==2){

        ui->dSample1Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat1->setStyleSheet("background-color: rgb(255, 255, 255)");
        if (s.attributes[1][position]>0) ui->dSample1Beat2->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample1Beat2->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[2][position]>0) ui->dSample2Beat2->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample2Beat2->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[3][position]>0) ui->dSample3Beat2->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample3Beat2->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[4][position]>0) ui->dSample4Beat2->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample4Beat2->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[5][position]>0) ui->dSample5Beat2->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample5Beat2->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[6][position]>0) ui->dSample6Beat2->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample6Beat2->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[7][position]>0) ui->dSample7Beat2->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample7Beat2->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[8][position]>0) ui->dSample8Beat2->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample8Beat2->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[9][position]>0) ui->dSample9Beat2->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample9Beat2->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[10][position]>0) ui->dSample10Beat2->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample10Beat2->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[11][position]>0) ui->dSample11Beat2->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample11Beat2->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[12][position]>0) ui->dSample12Beat2->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample12Beat2->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[13][position]>0) ui->dSample13Beat2->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample13Beat2->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[14][position]>0) ui->dSample14Beat2->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample14Beat2->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[15][position]>0) ui->dSample15Beat2->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample15Beat2->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[16][position]>0) ui->dSample16Beat2->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample16Beat2->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
    } else if (position==3){
        ui->dSample1Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat2->setStyleSheet("background-color: rgb(255, 255, 255)");

        if (s.attributes[1][position]>0) ui->dSample1Beat3->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample1Beat3->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[2][position]>0) ui->dSample2Beat3->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample2Beat3->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[3][position]>0) ui->dSample3Beat3->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample3Beat3->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[4][position]>0) ui->dSample4Beat3->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample4Beat3->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[5][position]>0) ui->dSample5Beat3->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample5Beat3->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[6][position]>0) ui->dSample6Beat3->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample6Beat3->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[7][position]>0) ui->dSample7Beat3->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample7Beat3->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[8][position]>0) ui->dSample8Beat3->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample8Beat3->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[9][position]>0) ui->dSample9Beat3->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample9Beat3->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[10][position]>0) ui->dSample10Beat3->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample10Beat3->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[11][position]>0) ui->dSample11Beat3->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample11Beat3->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[12][position]>0) ui->dSample12Beat3->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample12Beat3->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[13][position]>0) ui->dSample13Beat3->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample13Beat3->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[14][position]>0) ui->dSample14Beat3->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample14Beat3->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[15][position]>0) ui->dSample15Beat3->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample15Beat3->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[16][position]>0) ui->dSample16Beat3->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample16Beat3->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
    } else if (position==4){
        ui->dSample1Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat3->setStyleSheet("background-color: rgb(255, 255, 255)");

        if (s.attributes[1][position]>0) ui->dSample1Beat4->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample1Beat4->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[2][position]>0) ui->dSample2Beat4->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample2Beat4->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[3][position]>0) ui->dSample3Beat4->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample3Beat4->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[4][position]>0) ui->dSample4Beat4->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample4Beat4->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[5][position]>0) ui->dSample5Beat4->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample5Beat4->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[6][position]>0) ui->dSample6Beat4->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample6Beat4->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[7][position]>0) ui->dSample7Beat4->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample7Beat4->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[8][position]>0) ui->dSample8Beat4->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample8Beat4->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[9][position]>0) ui->dSample9Beat4->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample9Beat4->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[10][position]>0) ui->dSample10Beat4->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample10Beat4->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[11][position]>0) ui->dSample11Beat4->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample11Beat4->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[12][position]>0) ui->dSample12Beat4->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample12Beat4->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[13][position]>0) ui->dSample13Beat4->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample13Beat4->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[14][position]>0) ui->dSample14Beat4->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample14Beat4->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[15][position]>0) ui->dSample15Beat4->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample15Beat4->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[16][position]>0) ui->dSample16Beat4->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample16Beat4->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
    } else if (position==5){
        ui->dSample1Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat4->setStyleSheet("background-color: rgb(255, 255, 255)");

        if (s.attributes[1][position]>0) ui->dSample1Beat5->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample1Beat5->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[2][position]>0) ui->dSample2Beat5->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample2Beat5->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[3][position]>0) ui->dSample3Beat5->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample3Beat5->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[4][position]>0) ui->dSample4Beat5->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample4Beat5->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[5][position]>0) ui->dSample5Beat5->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample5Beat5->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[6][position]>0) ui->dSample6Beat5->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample6Beat5->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[7][position]>0) ui->dSample7Beat5->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample7Beat5->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[8][position]>0) ui->dSample8Beat5->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample8Beat5->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[9][position]>0) ui->dSample9Beat5->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample9Beat5->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[10][position]>0) ui->dSample10Beat5->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample10Beat5->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[11][position]>0) ui->dSample11Beat5->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample11Beat5->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[12][position]>0) ui->dSample12Beat5->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample12Beat5->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[13][position]>0) ui->dSample13Beat5->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample13Beat5->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[14][position]>0) ui->dSample14Beat5->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample14Beat5->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[15][position]>0) ui->dSample15Beat5->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample15Beat5->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[16][position]>0) ui->dSample16Beat5->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample16Beat5->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
    } else if (position==6){
        ui->dSample1Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat5->setStyleSheet("background-color: rgb(255, 255, 255)");

        if (s.attributes[1][position]>0) ui->dSample1Beat6->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample1Beat6->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[2][position]>0) ui->dSample2Beat6->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample2Beat6->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[3][position]>0) ui->dSample3Beat6->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample3Beat6->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[4][position]>0) ui->dSample4Beat6->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample4Beat6->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[5][position]>0) ui->dSample5Beat6->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample5Beat6->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[6][position]>0) ui->dSample6Beat6->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample6Beat6->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[7][position]>0) ui->dSample7Beat6->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample7Beat6->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[8][position]>0) ui->dSample8Beat6->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample8Beat6->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[9][position]>0) ui->dSample9Beat6->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample9Beat6->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[10][position]>0) ui->dSample10Beat6->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample10Beat6->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[11][position]>0) ui->dSample11Beat6->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample11Beat6->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[12][position]>0) ui->dSample12Beat6->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample12Beat6->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[13][position]>0) ui->dSample13Beat6->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample13Beat6->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[14][position]>0) ui->dSample14Beat6->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample14Beat6->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[15][position]>0) ui->dSample15Beat6->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample15Beat6->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[16][position]>0) ui->dSample16Beat6->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample16Beat6->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
    } else if (position==7){
        ui->dSample1Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat6->setStyleSheet("background-color: rgb(255, 255, 255)");

        if (s.attributes[1][position]>0) ui->dSample1Beat7->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample1Beat7->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[2][position]>0) ui->dSample2Beat7->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample2Beat7->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[3][position]>0) ui->dSample3Beat7->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample3Beat7->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[4][position]>0) ui->dSample4Beat7->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample4Beat7->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[5][position]>0) ui->dSample5Beat7->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample5Beat7->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[6][position]>0) ui->dSample6Beat7->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample6Beat7->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[7][position]>0) ui->dSample7Beat7->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample7Beat7->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[8][position]>0) ui->dSample8Beat7->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample8Beat7->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[9][position]>0) ui->dSample9Beat7->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample9Beat7->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[10][position]>0) ui->dSample10Beat7->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample10Beat7->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[11][position]>0) ui->dSample11Beat7->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample11Beat7->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[12][position]>0) ui->dSample12Beat7->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample12Beat7->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[13][position]>0) ui->dSample13Beat7->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample13Beat7->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[14][position]>0) ui->dSample14Beat7->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample14Beat7->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[15][position]>0) ui->dSample15Beat7->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample15Beat7->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[16][position]>0) ui->dSample16Beat7->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample16Beat7->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
    } else if (position==8){
        ui->dSample1Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat7->setStyleSheet("background-color: rgb(255, 255, 255)");

        if (s.attributes[1][position]>0) ui->dSample1Beat8->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample1Beat8->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[2][position]>0) ui->dSample2Beat8->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample2Beat8->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[3][position]>0) ui->dSample3Beat8->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample3Beat8->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[4][position]>0) ui->dSample4Beat8->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample4Beat8->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[5][position]>0) ui->dSample5Beat8->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample5Beat8->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[6][position]>0) ui->dSample6Beat8->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample6Beat8->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[7][position]>0) ui->dSample7Beat8->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample7Beat8->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[8][position]>0) ui->dSample8Beat8->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample8Beat8->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[9][position]>0) ui->dSample9Beat8->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample9Beat8->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[10][position]>0) ui->dSample10Beat8->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample10Beat8->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[11][position]>0) ui->dSample11Beat8->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample11Beat8->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[12][position]>0) ui->dSample12Beat8->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample12Beat8->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[13][position]>0) ui->dSample13Beat8->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample13Beat8->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[14][position]>0) ui->dSample14Beat8->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample14Beat8->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[15][position]>0) ui->dSample15Beat8->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample15Beat8->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[16][position]>0) ui->dSample16Beat8->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample16Beat8->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
    } else if (position==9){
        ui->dSample1Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat8->setStyleSheet("background-color: rgb(255, 255, 255)");

        if (s.attributes[1][position]>0) ui->dSample1Beat9->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample1Beat9->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[2][position]>0) ui->dSample2Beat9->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample2Beat9->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[3][position]>0) ui->dSample3Beat9->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample3Beat9->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[4][position]>0) ui->dSample4Beat9->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample4Beat9->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[5][position]>0) ui->dSample5Beat9->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample5Beat9->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[6][position]>0) ui->dSample6Beat9->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample6Beat9->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[7][position]>0) ui->dSample7Beat9->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample7Beat9->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[8][position]>0) ui->dSample8Beat9->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample8Beat9->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[9][position]>0) ui->dSample9Beat9->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample9Beat9->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[10][position]>0) ui->dSample10Beat9->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample10Beat9->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[11][position]>0) ui->dSample11Beat9->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample11Beat9->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[12][position]>0) ui->dSample12Beat9->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample12Beat9->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[13][position]>0) ui->dSample13Beat9->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample13Beat9->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[14][position]>0) ui->dSample14Beat9->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample14Beat9->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[15][position]>0) ui->dSample15Beat9->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample15Beat9->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[16][position]>0) ui->dSample16Beat9->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample16Beat9->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
    } else if (position==10){
        ui->dSample1Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat9->setStyleSheet("background-color: rgb(255, 255, 255)");

        if (s.attributes[1][position]>0) ui->dSample1Beat10->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample1Beat10->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[2][position]>0) ui->dSample2Beat10->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample2Beat10->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[3][position]>0) ui->dSample3Beat10->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample3Beat10->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[4][position]>0) ui->dSample4Beat10->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample4Beat10->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[5][position]>0) ui->dSample5Beat10->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample5Beat10->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[6][position]>0) ui->dSample6Beat10->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample6Beat10->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[7][position]>0) ui->dSample7Beat10->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample7Beat10->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[8][position]>0) ui->dSample8Beat10->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample8Beat10->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[9][position]>0) ui->dSample9Beat10->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample9Beat10->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[10][position]>0) ui->dSample10Beat10->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample10Beat10->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[11][position]>0) ui->dSample11Beat10->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample11Beat10->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[12][position]>0) ui->dSample12Beat10->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample12Beat10->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[13][position]>0) ui->dSample13Beat10->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample13Beat10->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[14][position]>0) ui->dSample14Beat10->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample14Beat10->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[15][position]>0) ui->dSample15Beat10->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample15Beat10->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[16][position]>0) ui->dSample16Beat10->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample16Beat10->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
    } else if (position==11){
        ui->dSample1Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat10->setStyleSheet("background-color: rgb(255, 255, 255)");

        if (s.attributes[1][position]>0) ui->dSample1Beat11->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample1Beat11->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[2][position]>0) ui->dSample2Beat11->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample2Beat11->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[3][position]>0) ui->dSample3Beat11->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample3Beat11->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[4][position]>0) ui->dSample4Beat11->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample4Beat11->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[5][position]>0) ui->dSample5Beat11->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample5Beat11->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[6][position]>0) ui->dSample6Beat11->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample6Beat11->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[7][position]>0) ui->dSample7Beat11->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample7Beat11->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[8][position]>0) ui->dSample8Beat11->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample8Beat11->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[9][position]>0) ui->dSample9Beat11->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample9Beat11->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[10][position]>0) ui->dSample10Beat11->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample10Beat11->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[11][position]>0) ui->dSample11Beat11->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample11Beat11->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[12][position]>0) ui->dSample12Beat11->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample12Beat11->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[13][position]>0) ui->dSample13Beat11->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample13Beat11->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[14][position]>0) ui->dSample14Beat11->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample14Beat11->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[15][position]>0) ui->dSample15Beat11->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample15Beat11->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[16][position]>0) ui->dSample16Beat11->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample16Beat11->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
    } else if (position==12){
        ui->dSample1Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat11->setStyleSheet("background-color: rgb(255, 255, 255)");

        if (s.attributes[1][position]>0) ui->dSample1Beat12->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample1Beat12->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[2][position]>0) ui->dSample2Beat12->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample2Beat12->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[3][position]>0) ui->dSample3Beat12->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample3Beat12->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[4][position]>0) ui->dSample4Beat12->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample4Beat12->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[5][position]>0) ui->dSample5Beat12->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample5Beat12->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[6][position]>0) ui->dSample6Beat12->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample6Beat12->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[7][position]>0) ui->dSample7Beat12->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample7Beat12->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[8][position]>0) ui->dSample8Beat12->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample8Beat12->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[9][position]>0) ui->dSample9Beat12->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample9Beat12->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[10][position]>0) ui->dSample10Beat12->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample10Beat12->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[11][position]>0) ui->dSample11Beat12->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample11Beat12->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[12][position]>0) ui->dSample12Beat12->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample12Beat12->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[13][position]>0) ui->dSample13Beat12->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample13Beat12->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[14][position]>0) ui->dSample14Beat12->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample14Beat12->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[15][position]>0) ui->dSample15Beat12->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample15Beat12->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[16][position]>0) ui->dSample16Beat12->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample16Beat12->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
    } else if (position==13){
        ui->dSample1Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat12->setStyleSheet("background-color: rgb(255, 255, 255)");

        if (s.attributes[1][position]>0) ui->dSample1Beat13->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample1Beat13->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[2][position]>0) ui->dSample2Beat13->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample2Beat13->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[3][position]>0) ui->dSample3Beat13->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample3Beat13->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[4][position]>0) ui->dSample4Beat13->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample4Beat13->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[5][position]>0) ui->dSample5Beat13->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample5Beat13->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[6][position]>0) ui->dSample6Beat13->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample6Beat13->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[7][position]>0) ui->dSample7Beat13->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample7Beat13->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[8][position]>0) ui->dSample8Beat13->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample8Beat13->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[9][position]>0) ui->dSample9Beat13->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample9Beat13->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[10][position]>0) ui->dSample10Beat13->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample10Beat13->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[11][position]>0) ui->dSample11Beat13->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample11Beat13->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[12][position]>0) ui->dSample12Beat13->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample12Beat13->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[13][position]>0) ui->dSample13Beat13->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample13Beat13->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[14][position]>0) ui->dSample14Beat13->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample14Beat13->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[15][position]>0) ui->dSample15Beat13->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample15Beat13->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[16][position]>0) ui->dSample16Beat13->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample16Beat13->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
    } else if (position==14){
        ui->dSample1Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat13->setStyleSheet("background-color: rgb(255, 255, 255)");

        if (s.attributes[1][position]>0) ui->dSample1Beat14->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample1Beat14->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[2][position]>0) ui->dSample2Beat14->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample2Beat14->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[3][position]>0) ui->dSample3Beat14->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample3Beat14->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[4][position]>0) ui->dSample4Beat14->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample4Beat14->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[5][position]>0) ui->dSample5Beat14->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample5Beat14->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[6][position]>0) ui->dSample6Beat14->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample6Beat14->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[7][position]>0) ui->dSample7Beat14->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample7Beat14->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[8][position]>0) ui->dSample8Beat14->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample8Beat14->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[9][position]>0) ui->dSample9Beat14->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample9Beat14->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[10][position]>0) ui->dSample10Beat14->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample10Beat14->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[11][position]>0) ui->dSample11Beat14->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample11Beat14->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[12][position]>0) ui->dSample12Beat14->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample12Beat14->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[13][position]>0) ui->dSample13Beat14->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample13Beat14->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[14][position]>0) ui->dSample14Beat14->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample14Beat14->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[15][position]>0) ui->dSample15Beat14->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample15Beat14->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[16][position]>0) ui->dSample16Beat14->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample16Beat14->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
    } else if (position==15){
        ui->dSample1Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat14->setStyleSheet("background-color: rgb(255, 255, 255)");

        if (s.attributes[1][position]>0) ui->dSample1Beat15->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample1Beat15->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[2][position]>0) ui->dSample2Beat15->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample2Beat15->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[3][position]>0) ui->dSample3Beat15->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample3Beat15->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[4][position]>0) ui->dSample4Beat15->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample4Beat15->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[5][position]>0) ui->dSample5Beat15->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample5Beat15->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[6][position]>0) ui->dSample6Beat15->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample6Beat15->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[7][position]>0) ui->dSample7Beat15->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample7Beat15->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[8][position]>0) ui->dSample8Beat15->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample8Beat15->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[9][position]>0) ui->dSample9Beat15->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample9Beat15->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[10][position]>0) ui->dSample10Beat15->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample10Beat15->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[11][position]>0) ui->dSample11Beat15->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample11Beat15->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[12][position]>0) ui->dSample12Beat15->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample12Beat15->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[13][position]>0) ui->dSample13Beat15->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample13Beat15->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[14][position]>0) ui->dSample14Beat15->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample14Beat15->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[15][position]>0) ui->dSample15Beat15->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample15Beat15->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[16][position]>0) ui->dSample16Beat15->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample16Beat15->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
    } else if (position==16){
        ui->dSample1Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample2Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample3Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample4Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample5Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample6Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample7Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample8Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample9Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample10Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample11Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample12Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample13Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample14Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample15Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");
        ui->dSample16Beat15->setStyleSheet("background-color: rgb(255, 255, 255)");

        if (s.attributes[1][position]>0) ui->dSample1Beat16->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample1Beat16->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[2][position]>0) ui->dSample2Beat16->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample2Beat16->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[3][position]>0) ui->dSample3Beat16->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample3Beat16->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[4][position]>0) ui->dSample4Beat16->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample4Beat16->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[5][position]>0) ui->dSample5Beat16->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample5Beat16->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[6][position]>0) ui->dSample6Beat16->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample6Beat16->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[7][position]>0) ui->dSample7Beat16->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample7Beat16->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[8][position]>0) ui->dSample8Beat16->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample8Beat16->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[9][position]>0) ui->dSample9Beat16->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample9Beat16->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[10][position]>0) ui->dSample10Beat16->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample10Beat16->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[11][position]>0) ui->dSample11Beat16->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample11Beat16->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[12][position]>0) ui->dSample12Beat16->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample12Beat16->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[13][position]>0) ui->dSample13Beat16->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample13Beat16->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[14][position]>0) ui->dSample14Beat16->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample14Beat16->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[15][position]>0) ui->dSample15Beat16->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample15Beat16->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
        if (s.attributes[16][position]>0) ui->dSample16Beat16->setStyleSheet("background-color: rgb(255, 0, 0); color: rgb(255, 255, 255)"); else ui->dSample16Beat16->setStyleSheet("background-color: rgb(0, 255, 0); color: rgb(255, 255, 255)");
    }
}




