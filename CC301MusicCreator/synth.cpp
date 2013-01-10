#include "synth.h"

synth::synth()
{

    for (int x=0; x<17;x++){
        for (int y=0; y<5; y++){
            attributes[x][y]=1;
            attributes[x][6]=0;
            //sets the array to have new values of 1
        }

        //sets the continues attribute to read none.
    }
}

int synth::getNote(int position){
    return attributes[position][1];
}

int synth::getVolume(int position){
    return attributes[position][2];
}

int synth::getAttack(int position){
    return attributes[position][3];
}

int synth::getSustain(int position){
    return attributes[position][4];
}

int synth::getRelease(int position){
    return attributes[position][5];
}

bool synth::getCont(int position){
    if (attributes[position][6]==0){
        return false;
    } else return true;
}

void synth::setNote(int position, int note){
    attributes[position][1]=note;
}

void synth::setVolume(int position, int volume){
    attributes[position][2]=volume;
}

void synth::setAttack(int position, int attack){
    attributes[position][3]=attack;
}

void synth::setSustain(int position, int sustain){
    attributes[position][4]=sustain;
}

void synth::setRelease(int position, int release){
    attributes[position][5]=release;
}

void synth::setCont(int position, bool cont){
    if (cont==true){
        attributes[position][6]=1;
    } else attributes[position][6]=0;
}
