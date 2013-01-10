#ifndef SYNTHESISER_H
#define SYNTHESISER_H

#include <QMainWindow>
#include "synth.h"

namespace Ui {
    class Synthesiser;
}

class Synthesiser : public QMainWindow {
    Q_OBJECT
public:
    Synthesiser(QWidget *parent = 0);
    ~Synthesiser();
    synth s;

protected:
    void changeEvent(QEvent *e);

signals:
   void saved();

private:
    Ui::Synthesiser *ui;
    int Lposition;
    void setSlots();

private slots:
    void on_cbHold_toggled(bool checked);
    void on_dRelease_sliderMoved(int position);
    void on_dSustain_sliderMoved(int position);
    void on_dAttack_sliderMoved(int position);
    void on_dVolume_sliderMoved(int position);
    void on_dVolume_valueChanged(int value);
    void on_dNote_dialReleased();
    void on_blPrevious_clicked();
    void on_btNext_clicked();
    void on_dNote_sliderMoved(int position);
};

#endif // SYNTHESISER_H
