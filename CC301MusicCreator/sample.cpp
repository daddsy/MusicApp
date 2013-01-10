#include "sample.h"

sample::sample()
{
    sampleLocation1.setFileName("C:/Users/Jon/Documents/CC301 Assignment/CC301MusicCreator/Samples/Bass.wav");
    sampleLocation2.setFileName("C:/Users/Jon/Documents/CC301 Assignment/CC301MusicCreator/Samples/Snare.wav");
    sampleLocation3.setFileName("C:/Users/Jon/Documents/CC301 Assignment/CC301MusicCreator/Samples/Clap.wav");
    sampleLocation4.setFileName("C:/Users/Jon/Documents/CC301 Assignment/CC301MusicCreator/Samples/Rim.wav");
    sampleLocation5.setFileName("C:/Users/Jon/Documents/CC301 Assignment/CC301MusicCreator/Samples/Tom 1.wav");
    sampleLocation6.setFileName("C:/Users/Jon/Documents/CC301 Assignment/CC301MusicCreator/Samples/Tom 2.wav");
    sampleLocation7.setFileName("C:/Users/Jon/Documents/CC301 Assignment/CC301MusicCreator/Samples/Tom 3.wav");
    sampleLocation8.setFileName("C:/Users/Jon/Documents/CC301 Assignment/CC301MusicCreator/Samples/Tom 4.wav");
    sampleLocation9.setFileName("C:/Users/Jon/Documents/CC301 Assignment/CC301MusicCreator/Samples/Tom 5.wav");
    sampleLocation10.setFileName("C:/Users/Jon/Documents/CC301 Assignment/CC301MusicCreator/Samples/HHfoot.wav");
    sampleLocation11.setFileName("C:/Users/Jon/Documents/CC301 Assignment/CC301MusicCreator/Samples/HHclosed.wav");
    sampleLocation12.setFileName("C:/Users/Jon/Documents/CC301 Assignment/CC301MusicCreator/Samples/HHopen.wav");
    sampleLocation13.setFileName("C:/Users/Jon/Documents/CC301 Assignment/CC301MusicCreator/Samples/HHopenclose.wav");
    sampleLocation14.setFileName("C:/Users/Jon/Documents/CC301 Assignment/CC301MusicCreator/Samples/ride.wav");
    sampleLocation15.setFileName("C:/Users/Jon/Documents/CC301 Assignment/CC301MusicCreator/Samples/crash.wav");
    sampleLocation16.setFileName("C:/Users/Jon/Documents/CC301 Assignment/CC301MusicCreator/Samples/china.wav");

    for (int x=0; x<17; x++){
        for (int y=0; y<17; y++){
            attributes[x][y]=0;
        }
    }
}

void sample::setAttribute(int row, int beat, int att){
    attributes[row][beat]=att;
}

int sample::getAttribute(int row, int beat){
    return attributes[row][beat];
}

void sample::setFile(int sampleNo, const char* location){

    if (sampleNo==1) sampleLocation1.setFileName(location);
    else if (sampleNo==2) sampleLocation2.setFileName(location);
    else if (sampleNo==3) sampleLocation3.setFileName(location);
    else if (sampleNo==4) sampleLocation4.setFileName(location);
    else if (sampleNo==5) sampleLocation5.setFileName(location);
    else if (sampleNo==6) sampleLocation6.setFileName(location);
    else if (sampleNo==7) sampleLocation7.setFileName(location);
    else if (sampleNo==8) sampleLocation8.setFileName(location);
    else if (sampleNo==9) sampleLocation9.setFileName(location);
    else if (sampleNo==10) sampleLocation10.setFileName(location);
    else if (sampleNo==11) sampleLocation11.setFileName(location);
    else if (sampleNo==12) sampleLocation12.setFileName(location);
    else if (sampleNo==13) sampleLocation13.setFileName(location);
    else if (sampleNo==14) sampleLocation14.setFileName(location);
    else if (sampleNo==15) sampleLocation15.setFileName(location);
    else if (sampleNo==16) sampleLocation16.setFileName(location);

}
