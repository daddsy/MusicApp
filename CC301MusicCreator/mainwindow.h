#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sampler.h"
#include "synthesiser.h"
#include "synth.h"
#include "sample.h"
#include "QSignalMapper"
#include "editselect.h"


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);

    ~MainWindow();
    Sampler s;
    editSelect d;
    Synthesiser sy;
    QSignalMapper synthMap;
    QSignalMapper sampleMap;
    int openSynth;
    int openSample;
    synth synthBlocks[200];
    QAction * synthMenu[200];
    //allows me to add new edit features to the menu dynamically as the program is run
    int synthPosition;
    QAction * sampleMenu[200];
    //allows me to add new edit features to the menu dynamically as the program is run.
    sample sampleBlocks[200];
    int samplePosition;

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;

private slots:
    void on_actionEdit_Synthesiser_Block_triggered();
    void on_actionEdit_Sampler_Block_triggered();
    void onSamplerSave();
    void editSampler(int sampleNo);
    void editSynth(int synthNo);
    void onSynthSave();
    void on_actionOpen_sampler_triggered();
    void on_actionOpen_synthesiser_triggered();
};

#endif // MAINWINDOW_H
