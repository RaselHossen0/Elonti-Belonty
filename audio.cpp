#include "AllHeaderFiles.h"

Mix_Chunk *ore1,*ore2,*ore3,*ore4,*orena1,*orena2,*orena3,*mAin;
void audioLoad(){

mAin=Mix_LoadWAV("res/aud.mp3");

ore1=Mix_LoadWAV("res/ore1.mp3");

ore2=Mix_LoadWAV("res/ore2.mp3");

ore3=Mix_LoadWAV("res/ore3.mp3");

ore4=Mix_LoadWAV("res/ore4.mp3");

orena1=Mix_LoadWAV("res/orena1.mp3");

orena2=Mix_LoadWAV("res/orena2.mp3");

orena3=Mix_LoadWAV("res/orena3.mp3");
}