#include "AllHeaderFiles.h"
int main(int agr, char *args[])
{

    init();
     
    loadMedia();

    LoadRect();
   
    audioLoad();

    WelcomeToELontiBelonti();

    TimeRandomize();

    OreRandomIZ();
    

while(isRunning){
    GetEvent();
    Vanish();
    if (gameover == 0) Level3();
    else if(temp2==6) TryAgain_Wait(); 
    else if(gameover==10) Level2();    
    else if(gameover==4&&temp2==22) TryAgain_Level3();
    else if(gameover==100)   Level1();
    else if(gameover==1)  StartMenu();
    else if(gameover==2)  Replay1();
}

close();
}

