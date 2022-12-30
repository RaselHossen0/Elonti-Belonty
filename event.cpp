#include "init.h"
#include  "RectLoad.h"
#include "LoadMedia.h"
SDL_Event ev;
bool isRunning =true;
int flag=0;
    bool b[2]={0,0};
    float x_pos =0.0;
 int gameover = 1;
int ftime;    
int flg;
 int ore=0,var=2,f=0;
void GetEvent()
{
 while (SDL_PollEvent(&ev))
        {
            switch (ev.type)
            {
            case SDL_QUIT:
                isRunning=false;
                break;
            case SDL_KEYDOWN:
                switch (ev.key.keysym.scancode)
                {
                  case SDL_SCANCODE_RIGHT:
                  {
                     // b[0]=1;
                     b[1]=1;
                      playerRect.y=0;
                      if(gameover==0)
                      {x_pos = x_pos + (250/ 60);
                      if(playerPosition.x<1180)
                         playerPosition.x= (int)x_pos;
                      else
                        {x_pos=1180;
                         playerPosition.x =1180;}}

                      playerRect.x+=frameWid;
                      if(playerRect.x>=textureWidth)
                        playerRect.x=0;
                    
                    
                   flag=1;
                   ///if(ftime>=34)
                       /// ore=10;  
                   

                
                    
                  } 
                    break;
                 case SDL_SCANCODE_LEFT:
                 {  //b[1]=1;
                   // b[0]=1;
                    playerRect.y=0;
                     x_pos =  x_pos-(250 / 60);
                    if(x_pos>0)
                     playerPosition.x = (int)x_pos;
                     else
                     {x_pos=0;
                     playerPosition.x =0;}
                       
                      playerRect.x-=frameWid;
                      if(playerRect.x<=0)
                         playerRect.x=textureWidth- frameWid;
                     
                    flag=1;    
                 }
                 break;
                 case SDL_SCANCODE_R:
                     var=5;
                      b[1]=1;
                      if(gameover==0)
                     { x_pos = x_pos + (280/ 60);
                      if(playerPosition.x<1180)
                         playerPosition.x= (int)x_pos;
                      else
                        {x_pos=1180;
                         playerPosition.x =1180;}}
                      playerRect.y=frameHe;
                      playerRect.x+=frameWid;
                      if(playerRect.x>=textureWidth)
                        playerRect.x=0;
                        
                    
                    
                   flag=1;  
                   break;
                 case SDL_SCANCODE_J:
                      var=2;
                      b[1]=1;
                      playerRect.y=2*frameHe;
                       playerRect.x=0;
                       if(!(o5.x<=330&&o5.x>=173))
                      f=1;
                      flag=1; 
                      
                      // playerRect.x+=frameWid;//
                   // if(playerRect.x>=textureWidth-2*frameWid)//
                            //playerRect.x=0;//
                      
                      break;
                    case SDL_SCANCODE_T:
                     if(o5.x<=330&&o5.x>=273)
                     f=1,o5.y=-323, SDL_RenderCopy(rend,ed_tex,NULL,&o5d), o5d.x=360;
    
                     else
                     f=0;
                     // ox=0;
                     var=5;
                      b[1]=1;
                       playerRect.y=5*frameHe;
                      playerRect.x+=frameWid;
                      if(playerRect.x>=textureWidth-frameWid*2)
                        playerRect.x=0;
                       
                      
                      
                       
                   break;
                   case SDL_SCANCODE_UP:
                     playerRect.y=5*frameHe;
                     ore=1;
                        playerRect.x=4*frameWid;

                   break;
                   case SDL_SCANCODE_DOWN:
                     playerRect.y=2*frameHe;
                     ore=0;
                    playerRect.x=5*frameWid;
                    break;
            }
            break;
            case SDL_KEYUP:
                    switch (ev.key.keysym.scancode){
                    case SDL_SCANCODE_RIGHT:
                    b[1]=0;
                    break;
                    case SDL_SCANCODE_J:
                    var=2;
                   // b[1]=0;
                    ///f=0;
                    break;
                     case SDL_SCANCODE_R:
                     var=2;
                    b[1]=0;
                    break;
                   case SDL_SCANCODE_T:
                    b[1]=0;
                    f=0;
                    break;
                   }
                break;

                
            }
        }
        flag=0;
}