#ifndef SYNTH_H
#define SYNTH_H

class synth
{
public:
    synth();

    int getNote(int position);
    int getVolume(int position);
    int getAttack(int position);
    int getSustain(int position);
    int getRelease(int position);
    bool getCont(int position);
    void setNote(int position, int note);
    void setVolume(int position, int volume);
    void setAttack(int position, int attack);
    void setSustain(int position, int sustain);
    void setRelease(int position, int release);
    void setCont(int position, bool cont);
    int attributes[17][7];



    //16 rows with 6 columns(note, volume, attack, sustain, release, continues?)
};

#endif // SYNTH_H
