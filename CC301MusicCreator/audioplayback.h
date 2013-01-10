#ifndef AUDIOPLAYBACK_H
#define AUDIOPLAYBACK_H

#include <QThread>
#include <QAudioOutput>
#include <QAudioFormat>
#include <QTimer>
#include <QDebug>
#include <sample.h>
#include <QString>

class audioPlayback : public QThread
{
    Q_OBJECT
public:
    audioPlayback(sample & aSample);
   virtual void run();
   void stop();
   int getPosition();

signals:
   void posChanged();

private slots:
   void audioPlaybackB();

private:
   sample s;
   int position;
   QTimer *beatCount;
   QAudioFormat format;

   QAudioOutput* audio1;
   QAudioOutput* audio2;
   QAudioOutput* audio3;
   QAudioOutput* audio4;
   QAudioOutput* audio5;
   QAudioOutput* audio6;
   QAudioOutput* audio7;
   QAudioOutput* audio8;
   QAudioOutput* audio9;
   QAudioOutput* audio10;
   QAudioOutput* audio11;
   QAudioOutput* audio12;
   QAudioOutput* audio13;
   QAudioOutput* audio14;
   QAudioOutput* audio15;
   QAudioOutput* audio16;


};

#endif // AUDIOPLAYBACK_H
