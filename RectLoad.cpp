#include "init.h"
#include "LoadMedia.h"
//#include "event.h"





SDL_Rect deadman,start_rect,gameover_rect,cloud,gRect,rRect,fbt;
SDL_Rect  obs2Rect, obsRect,   bombRect,bombRect2,o1,o2,o3,o1n,o4,o5,o5d,o6,o7,o8,o8n,o9,o9n,oc,b1,b2,b3,b4,b5,fb,lst,life,life2,life3,nl;
SDL_Rect monboxr,f15,f16,f17,f18,f19,f20,f21,failedr,fup,fRect,fPosition,fPosition2,vRectp,vRect,replay_rect;
 SDL_Rect crossr,r75,r76,r77,r78,r79,r80,r81,r82,r83,r85,r86,r87,r88,r89,r90,r91,r92,r93,r94;

SDL_Rect e_rect,help_rect;
void LoadRect(){
// SDL_QueryTexture(tex,NULL,NULL,&textureWidth,&textureHeight);
// printf("%d %d ",textureHeight,textureWidth);

    deadman.w = 150;
    deadman.h = 150;

       start_rect.w = 280;
    start_rect.h = 100;
    start_rect.x = (WINDOW_WIDTH - start_rect.w) / 2-50;
    start_rect.y = (WINDOW_HEIGHT - start_rect.h) / 2 - 220;


    gameover_rect.w = 400;
    gameover_rect.h = 300;
    gameover_rect.x = (WINDOW_WIDTH - gameover_rect.w) / 2;
    gameover_rect.y = (WINDOW_HEIGHT - gameover_rect.h) / 2 - 150;


 
    
    cloud.x=0;
    cloud.y=-50;
    cloud.w=150;
    cloud.h=150;
    

    

    gRect.x=1080;
    gRect.y=55;
    gRect.w=280;
    gRect.h=280;

    rRect.x=1100;
    rRect.y=0;
    rRect.w=250;
    rRect.h=240;

   
    
    obs2Rect.x=300;
    obs2Rect.y=300;
    obs2Rect.w=230;
    obs2Rect.h=120;

    
   
    obsRect.x=500;
    obsRect.y=500;
    obsRect.w=180;
    obsRect.h=100;

  
  
    bombRect.x=198;
    bombRect.y=100;
    bombRect.w=90;
    bombRect.h=50;

    
    bombRect2.x=1200;
    bombRect2.y=520;
    bombRect2.w=90;
    bombRect2.h=50;

   
    o1.x=2400;
    o1.y=365;
    o1.w=100;
    o1.h=100;

    
 
    o1n.x=340;
    o1n.y=365;
    o1n.w=50;
    o1n.h=50;

    
    o2.x=2100;
    o2.y=360;
    o2.w=100;
    o2.h=100;

   
 
    o3.x=400;
    o3.y=340;
    o3.w=140;
    o3.h=150;

  
  
    o4.x=700;
    o4.y=300;
    o4.w=150;
    o4.h=250;

    
    o5.x=1000;
    o5.y=250;
    o5.w=250;
    o5.h=250;

   
    
    o5d.x=360;
    o5d.y=310;
    o5d.w=220;
    o5d.h=220;

     
  
    o6.x=1300;
    o6.y=340;
    o6.w=200;
    o6.h=200;

   
    o7.x=1650;
    o7.y=360;
    o7.w=180;
    o7.h=180;

 
    o8.x=2650;
    o8.y=270;
    o8.w=280;
    o8.h=280;
     
  
    o8n.x=-650;
    o8n.y=-270;
    o8n.w=300;
    o8n.h=300;

   
    o9.x=1900;
    o9.y=370;
    o9.w=90;
    o9.h=90;

  
    oc.x=600;
    oc.y=370;
    oc.w=90;
    oc.h=90;

    
   
    b1.x=0;
    b1.y=0;
    b1.w=WINDOW_WIDTH;
    b1.h=WINDOW_HEIGHT;

   
    b2.x=WINDOW_WIDTH;
    b2.y=-29;
    b2.w=WINDOW_WIDTH;
    b2.h=WINDOW_HEIGHT+55;

    b3.x=WINDOW_WIDTH;
    b3.y=0;
    b3.w=WINDOW_WIDTH;
    b3.h=WINDOW_HEIGHT;

  
    b4.x=WINDOW_WIDTH;
    b4.y=0;
    b4.w=WINDOW_WIDTH;
    b4.h=WINDOW_HEIGHT;
    
  
    b5.x=WINDOW_WIDTH;
    b5.y=0;
    b5.w=WINDOW_WIDTH;
    b5.h=WINDOW_HEIGHT;


    fb.x=0;
    fb.y=0;
    fb.w=WINDOW_WIDTH;
    fb.h=WINDOW_HEIGHT;

     
  
    lst.x=WINDOW_WIDTH;
    lst.y=0;
    lst.w=WINDOW_WIDTH;
    lst.h=WINDOW_HEIGHT;


    life.x=WINDOW_WIDTH-60;
    life.y=10;
    life.w=65;
    life.h=50;

    life2.x=WINDOW_WIDTH-105;
    life2.y=10;
    life2.w=65;
    life2.h=50;
    

    life3.x=WINDOW_WIDTH-150;
    life3.y=10;
    life3.w=65;
    life3.h=50;
    
  
    nl.x=WINDOW_WIDTH/2-140;
    nl.y=WINDOW_HEIGHT/2-100;
    nl.w=280;
    nl.h=250;

    monboxr.x=30;
    monboxr.y=0;
    monboxr.w=250;
    monboxr.h=200;
   
    
    f15.x=530;
    f15.y=260;
    f15.w=300;
    f15.h=300;
    
    f16.x=530;
    f16.y=260;
    f16.w=300;
    f16.h=300;
 
    f17.x=530;
    f17.y=260;
    f17.w=300;
    f17.h=300;
    
    f18.x=530;
    f18.y=260;
    f18.w=300;
    f18.h=300;

  
    f19.x=530;
    f19.y=260;
    f19.w=300;
    f19.h=300;

    
   
    f20.x=530;
    f20.y=260;
    f20.w=300;
    f20.h=300;

 
    f21.x=530;
    f21.y=260;
    f21.w=300;
    f21.h=300;
    
  
   
    failedr.x=0;
    failedr.y=0;
    failedr.w=WINDOW_WIDTH;
    failedr.h=WINDOW_HEIGHT;
     
  
    fup.x=0;
    fup.y=0;
    fup.w=WINDOW_WIDTH;
    fup.h=WINDOW_HEIGHT;


   

  //rect for the whole sprite sheet
    fPosition.x=500;
    fPosition.y=350;
    fPosition.w=300;
    fPosition.h=300;//ei rec(square) er moddher kothao texture (runman) load hobe
    
   
    fPosition2.x=250;
    fPosition2.y=150;
    fPosition2.w=300;
    fPosition2.h=300;

    vRectp.x=0;
    vRectp.y=0;
    vRectp.w=100;
    vRectp.h=100;
   
   
    replay_rect.w = 300;
    replay_rect.h = 150;
    replay_rect.x = (WINDOW_WIDTH - replay_rect.w) / 2;
    replay_rect.y = (WINDOW_HEIGHT - replay_rect.h) / 2 + 100;
    // playerPosition.x=0+50;
    // playerPosition.y=340-100;
    // playerPosition.w=2*100;
    // playerPosition.h=2*100;
 
    //  playerRect.x=playerRect.y=0;
    // playerRect.w=r4.frmWid;
    // playerRect.h=r4.frmHit;
    //     playerRect.x=playerRect.y=0;
    // playerRect.w=r4.frmWid;
    // playerRect.h=r4.frmHit;

     
    fbt.x=1150;
    fbt.y=10;
    fbt.w=100;
    fbt.h=100;

    crossr.x=1150;
    crossr.y=8;
    crossr.w=100;
    crossr.h=100;

    r76.x=0;
    r76.y=0;
    r76.w=WINDOW_WIDTH;
    r76.h=WINDOW_HEIGHT;

    

    r85.x=490;
    r85.y=200;
    r85.w=280;
    r85.h=250;

    r86.x=490;
    r86.y=350;
    r86.w=280;
    r86.h=250;

    r89.x=1130;
    r89.y=600;
    r89.w=180;
    r89.h=100;

    r93.x=-9;
    r93.y=8;
    r93.w=157;
    r93.h=100;

    r94.x=-1100;
    r94.y=0;
    r94.w=500;
    r94.h=900;

    r87.x=70;
    r87.y=250;
    r87.w=280;
    r87.h=150;

    r88.x=70;
    r88.y=450;
    r88.w=280;
    r88.h=150;

    r75.x=484;
    r75.y=410;
    r75.w=357;
    r75.h=250;

    r90.x=190;
    r90.y=80;
    r90.w=357;
    r90.h=250;

    r91.x=810;
    r91.y=80;
    r91.w=357;
    r91.h=250;

    e_rect.w = 280;
    e_rect.h = 100;
    e_rect.x = (WINDOW_WIDTH - start_rect.w) / 2-53;
    e_rect.y = (WINDOW_HEIGHT - start_rect.h) / 2;

    help_rect.w = 280;
    help_rect.h = 100;
    help_rect.x = (WINDOW_WIDTH - start_rect.w) / 2-52;
    help_rect.y = (WINDOW_HEIGHT - start_rect.h) / 2 - 110;
}