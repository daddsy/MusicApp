#include "audioplayback.h"

audioPlayback::audioPlayback(sample & aSample){
    for (int x=0; x<17; x++){
        for (int y=0; y<17; y++){
            s.attributes[x][y]  = aSample.attributes[x][y];
        }
    }
    s.sampleLocation1.setFileName(aSample.sampleLocation1.fileName());
    s.sampleLocation1.open(QIODevice::ReadOnly);
    s.sampleLocation2.setFileName(aSample.sampleLocation2.fileName());
    s.sampleLocation2.open(QIODevice::ReadOnly);
    s.sampleLocation3.setFileName(aSample.sampleLocation3.fileName());
    s.sampleLocation3.open(QIODevice::ReadOnly);
    s.sampleLocation4.setFileName(aSample.sampleLocation4.fileName());
    s.sampleLocation4.open(QIODevice::ReadOnly);
    s.sampleLocation5.setFileName(aSample.sampleLocation5.fileName());
    s.sampleLocation5.open(QIODevice::ReadOnly);
    s.sampleLocation6.setFileName(aSample.sampleLocation6.fileName());
    s.sampleLocation6.open(QIODevice::ReadOnly);
    s.sampleLocation7.setFileName(aSample.sampleLocation7.fileName());
    s.sampleLocation7.open(QIODevice::ReadOnly);
    s.sampleLocation8.setFileName(aSample.sampleLocation8.fileName());
    s.sampleLocation8.open(QIODevice::ReadOnly);
    s.sampleLocation9.setFileName(aSample.sampleLocation9.fileName());
    s.sampleLocation9.open(QIODevice::ReadOnly);
    s.sampleLocation10.setFileName(aSample.sampleLocation10.fileName());
    s.sampleLocation10.open(QIODevice::ReadOnly);
    s.sampleLocation11.setFileName(aSample.sampleLocation11.fileName());
    s.sampleLocation11.open(QIODevice::ReadOnly);
    s.sampleLocation12.setFileName(aSample.sampleLocation12.fileName());
    s.sampleLocation12.open(QIODevice::ReadOnly);
    s.sampleLocation13.setFileName(aSample.sampleLocation13.fileName());
    s.sampleLocation13.open(QIODevice::ReadOnly);
    s.sampleLocation14.setFileName(aSample.sampleLocation14.fileName());
    s.sampleLocation14.open(QIODevice::ReadOnly);
    s.sampleLocation15.setFileName(aSample.sampleLocation15.fileName());
    s.sampleLocation15.open(QIODevice::ReadOnly);
    s.sampleLocation16.setFileName(aSample.sampleLocation16.fileName());
    s.sampleLocation16.open(QIODevice::ReadOnly);


    // Set up the format, eg.
    format.setFrequency(44100);
    format.setChannels(2);
    format.setSampleSize(16);
    format.setCodec("audio/pcm");
    format.setByteOrder(QAudioFormat::BigEndian);
    format.setSampleType(QAudioFormat::Float);



   //create 16 audio devices:
    QAudioDeviceInfo info(QAudioDeviceInfo::defaultOutputDevice());
     if (!info.isFormatSupported(format)) {
         qWarning()<<"raw audio format not supported by backend, cannot play audio.";
         return;
     }
}

void audioPlayback::run()
{
    double bpm=120;
    double mspb=(60/bpm)*500;
    QString outputX = QString::number(mspb);
    qWarning()<<mspb;
    position=1;
    audio1 = new QAudioOutput(format, this);
    audio2 = new QAudioOutput(format, this);
    audio3 = new QAudioOutput(format, this);
    audio4 = new QAudioOutput(format, this);
    audio5 = new QAudioOutput(format, this);
    audio6 = new QAudioOutput(format, this);
    audio7 = new QAudioOutput(format, this);
    audio8 = new QAudioOutput(format, this);
    audio9 = new QAudioOutput(format, this);
    audio10 = new QAudioOutput(format, this);
    audio11 = new QAudioOutput(format, this);
    audio12 = new QAudioOutput(format, this);
    audio13 = new QAudioOutput(format, this);
    audio14 = new QAudioOutput(format, this);
    audio15 = new QAudioOutput(format, this);
    audio16 = new QAudioOutput(format, this);
    beatCount = new QTimer(this);
    connect(beatCount, SIGNAL(timeout()),SLOT(audioPlaybackB()));
    beatCount->start(mspb);
    // this->setPriority(QThread::TimeCriticalPriority);
}

void audioPlayback::stop(){
    if (!(beatCount==NULL)){
    beatCount->stop();
}

}



void audioPlayback::audioPlaybackB(){
    //delete audio1;
    //delete audio2;
    //delete audio3;
    //delete audio4;
    //delete audio5;
    //delete audio6;
    //delete audio7;
   // delete audio8;
    //delete audio9;
    //delete audio10;
    //delete audio11;
    //delete audio12;
    //delete audio13;
    //delete audio14;
    //delete audio15;
this->setPriority(QThread::TimeCriticalPriority);
    qWarning()<<position;
    emit posChanged();

    if (s.attributes[1][position]>0){

       s.sampleLocation1.seek(0);
       //audio1 = new QAudioOutput(format, this);
       connect(audio1,SIGNAL(stateChanged(QAudio::State)),SLOT(finishedPlaying(QAudio::State)));
       audio1->start(&s.sampleLocation1);
    }
    if (s.attributes[2][position]>0){
        s.sampleLocation2.seek(0);
       //audio2 = new QAudioOutput(format, this);
       connect(audio2,SIGNAL(stateChanged(QAudio::State)),SLOT(finishedPlaying(QAudio::State)));
       audio2->start(&s.sampleLocation2);
    }
    if (s.attributes[3][position]>0){
       s.sampleLocation3.seek(0);
      // audio3 = new QAudioOutput(format, this);
       connect(audio3,SIGNAL(stateChanged(QAudio::State)),SLOT(finishedPlaying(QAudio::State)));
       audio3->start(&s.sampleLocation3);
    }
    if (s.attributes[4][position]>0){
        s.sampleLocation4.seek(0);
      // audio4 = new QAudioOutput(format, this);
       connect(audio4,SIGNAL(stateChanged(QAudio::State)),SLOT(finishedPlaying(QAudio::State)));
       audio4->start(&s.sampleLocation4);
    }
    if (s.attributes[5][position]>0){
      s.sampleLocation5.seek(0);
      // audio5 = new QAudioOutput(format, this);
       connect(audio5,SIGNAL(stateChanged(QAudio::State)),SLOT(finishedPlaying(QAudio::State)));
       audio5->start(&s.sampleLocation5);
    }
    if (s.attributes[6][position]>0){
        s.sampleLocation6.seek(0);
       //audio6 = new QAudioOutput(format, this);
       connect(audio6,SIGNAL(stateChanged(QAudio::State)),SLOT(finishedPlaying(QAudio::State)));
       audio6->start(&s.sampleLocation6);
    }
    if (s.attributes[7][position]>0){
      s.sampleLocation7.seek(0);
       //audio7 = new QAudioOutput(format, this);
       connect(audio7,SIGNAL(stateChanged(QAudio::State)),SLOT(finishedPlaying(QAudio::State)));
       audio7->start(&s.sampleLocation7);
    }
    if (s.attributes[8][position]>0){
        s.sampleLocation8.seek(0);
      // audio8 = new QAudioOutput(format, this);
       connect(audio8,SIGNAL(stateChanged(QAudio::State)),SLOT(finishedPlaying(QAudio::State)));
       audio8->start(&s.sampleLocation8);
    }
    if (s.attributes[9][position]>0){
        s.sampleLocation9.seek(0);
      // audio9 = new QAudioOutput(format, this);
       connect(audio9,SIGNAL(stateChanged(QAudio::State)),SLOT(finishedPlaying(QAudio::State)));
       audio9->start(&s.sampleLocation9);
    }
    if (s.attributes[10][position]>0){
        s.sampleLocation10.seek(0);
     //  audio10 = new QAudioOutput(format, this);
       connect(audio10,SIGNAL(stateChanged(QAudio::State)),SLOT(finishedPlaying(QAudio::State)));
       audio10->start(&s.sampleLocation10);
    }
    if (s.attributes[11][position]>0){
       s.sampleLocation11.seek(0);
      // audio11 = new QAudioOutput(format, this);
       connect(audio11,SIGNAL(stateChanged(QAudio::State)),SLOT(finishedPlaying(QAudio::State)));
       audio11->start(&s.sampleLocation11);
    }
    if (s.attributes[12][position]>0){
       s.sampleLocation12.seek(0);
     //  audio12 = new QAudioOutput(format, this);
       connect(audio12,SIGNAL(stateChanged(QAudio::State)),SLOT(finishedPlaying(QAudio::State)));
       audio12->start(&s.sampleLocation12);
    }
    if (s.attributes[13][position]>0){
      s.sampleLocation13.seek(0);
      // audio13 = new QAudioOutput(format, this);
       connect(audio13,SIGNAL(stateChanged(QAudio::State)),SLOT(finishedPlaying(QAudio::State)));
       audio13->start(&s.sampleLocation13);
    }
    if (s.attributes[14][position]>0){
        s.sampleLocation14.seek(0);
       audio14 = new QAudioOutput(format, this);
       connect(audio14,SIGNAL(stateChanged(QAudio::State)),SLOT(finishedPlaying(QAudio::State)));
       audio14->start(&s.sampleLocation14);
    }
    if (s.attributes[15][position]>0){
        s.sampleLocation15.seek(0);
     //  audio15 = new QAudioOutput(format, this);
       connect(audio15,SIGNAL(stateChanged(QAudio::State)),SLOT(finishedPlaying(QAudio::State)));
       audio15->start(&s.sampleLocation15);
    }
    if (s.attributes[16][position]>0){
       s.sampleLocation16.seek(0);
     //  audio16 = new QAudioOutput(format, this);
       connect(audio16,SIGNAL(stateChanged(QAudio::State)),SLOT(finishedPlaying(QAudio::State)));
       audio16->start(&s.sampleLocation16);
    }
    if (position<16){
        position++;
    } else position=1;
    qWarning()<<this->priority();
}

int audioPlayback::getPosition(){
    return position;
}
