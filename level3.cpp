#include "AllHeaderFiles.h"

 int temp2=0;
float cloudx=0.0;
 //  float cloudx=0.0;//float x_pos =0.0,cloudx=0.0;
   // int gameover = 1;
    int FPS=60;
    double count=0,tim=0;
    int timee=0;
    // int flast=0;
    int t1,t2;
    void TimeRandomize(){
        srand(time(NULL));
           int c=rand()%5;
           switch(c){
            case 0:
            t1=4;
            t2=13;
            break;
            case 1:
            t1=4;
            t2=14;
            break;
            case 2:
            t1=5;
            t2=14;
            break;
            case 3:
            t1=3;
            t2=12;
            break;
            case 4:
            t1=5;
            t2=17;
            break;
           }
    }
void Level3(){

             SDL_RenderClear(rend);
            

               cloudx =cloudx+0.5;
               cloud.x=(int)cloudx;
            if (cloud.x >= WINDOW_WIDTH)
                cloudx = 0;
     
           frameTime++;

           
           count=SDL_GetTicks() / 1000.0;
          
            tim=count-count2-last;
            timee=tim;
            std::string i=std::to_string(timee);
            SDL_Surface* surface=TTF_RenderText_Solid(ff,i.c_str(),{255,255,255});
            SDL_Texture* texx=SDL_CreateTextureFromSurface(rend,surface);
            SDL_FreeSurface(surface);
    
            SDL_Rect rectt;//for font
            rectt.x=1123;
            rectt.y=225;
            rectt.w=60;
            rectt.h=60;
    
        
           
           if(FPS/frameTime==1)//will be repeated 7 times a second
           {
                        frameTime=0;//repeat
                        fRect.x+=rf.frmWid;
                        if(fRect.x>=txturWidthf-rf.frmWid)
                                        {fRect.x=0;
                                        fRect.y+=rf.frmHit;}
                        if(fRect.y>=txturHeightf-rf.frmHit)
                                        fRect.y=0;

                        playrRect.x+=r1.frmWid;
                        if(playrRect.x>=texturWidth)
                                        {playrRect.x=0;}
                         if(temp2==5){
                         
                    playerRect.y=3*frameHe;
                    playerRect.x+=frameWid;
                    if(playerRect.x>=2*frameWid)
                    {playerRect.x=2*frameWid;  
                   gameover=4; 
                   temp2=6;
                   printf("t%d",temp2);
                   }         
                         }
                        if(f==1){
                            
                             if(temp2==5)
                           f=0;
                            
                            x_pos = x_pos + (1400/ 60);
                            if(playerPosition.x<1180)
                                playerPosition.x= (int)x_pos;
                            else
                               {x_pos=1180;
                                playerPosition.x =1180;}
                      
                           
                            playerRect.x+=frameWid;
                           

                             if(playerRect.x>=textureWidth-2*frameWid)
                            { playerRect.x=textureWidth-frameWid;
                            playerPosition.x= (int)x_pos-600/60;
                             f=0;
                             }
                        }
         
                        plarRect1.x+=r2.frmWid;
                        if(plarRect1.x>=txturWidth1-r2.frmWid)
                                        plarRect1.x=0;
                        
                         vRect.x+=rv.frmWid;
                        if(vRect.x>=vtxturWidth-rv.frmWid)
                                        vRect.x=0;
                            
                        plarRect2.x+=r5.frmWid;
                        if(plarRect2.x>=txturWidth2-r5.frmWid)
                                        plarRect2.x=0;

                        plarRect3.x+=r7.frmWid;
                        if(plarRect3.x>=txturWidth3-r7.frmWid)
                                        plarRect3.x=0;
                        
                        plarRect22.x+=r6.frmWid;
                        if(plarRect22.x>=txturWidth22-r6.frmWid)
                                        plarRect22.x=0;
                            
          
          }
           
            SDL_RenderCopy(rend,bg_Tex,NULL,NULL);
            
            SDL_RenderCopy(rend,cloud_Tex,NULL,&cloud);

            SDL_RenderCopy(rend,tex,&playerRect,&playerPosition);
            SDL_RenderCopy(rend,Putul_Tex,&playrRect,&playrPosition);
             
            SDL_RenderCopy(rend,texx,NULL,&rectt);
            SDL_RenderCopy(rend,fire_Tex,&plarRect1,&plarPosition1);
            SDL_RenderCopy(rend,fire_Tex,&plarRect2,&plarPosition2);
            SDL_RenderCopy(rend,fire2_Tex,&plarRect22,&plarPosition22);
            SDL_RenderCopy(rend,fire2_Tex,&plarRect3,&plarPosition3);
           
            if(((playerPosition.x-350)*(playerPosition.x-350)+(playerPosition.y-200)*(playerPosition.y-245))<1)
            {SDL_RenderCopy(rend,v_Tex,&vRect,&vRectp);
            gameover=4;
            temp=1;
            
            }
            if(tim>3){
              bx+=0.1;
              by+=0.1;
                 if(bombRect.x<350){
           
                    bombRect.x+=(int)bx;
                    bombRect.y-=(int)by;
                 }
                 else
                {
           
                  bombRect.x+=(int)bx;
                  bombRect.y+=(int)by;
                }
            
                
                if(!(bombRect.x>=500&&bombRect.y>=500)){
           
                 SDL_RenderCopy(rend, bomb_Tex, NULL,&bombRect);
                }
                 if(tim>5&&tim<7)
                SDL_RenderCopy(rend,f_Tex,&fRect,&fPosition);
                if(tim>6.5)
                SDL_RenderCopy(rend, obs_Tex, NULL,&obsRect);
           

           }
           if(tim>7){
          
             b2x+=0.1;
              b2y+=0.1;
              if(bombRect2.x>650){
           
                bombRect2.x-=(int)b2x;
                bombRect2.y-=(int)b2y;
              }
              else
              {
           
                bombRect2.x-=(int)b2x;
                bombRect2.y+=(int)(b2y-0.05);
              }
            
              if(!(bombRect2.x<=300&&bombRect2.y>=180)){
           
               SDL_RenderCopy(rend, bomb_Tex, NULL,&bombRect2);
               }
              if(tim>9&&tim<11)
              SDL_RenderCopy(rend,f_Tex,&fRect,&fPosition2);
              if(tim>10.5)
              SDL_RenderCopy(rend, obs2_Tex, NULL,&obs2Rect);
           
           }
            
        
           
           if (timee >=t1&&timee<=t1+3||timee >=t2&&timee<=t2+4||timee>=22){

            Mix_HaltChannel(-1);
            SDL_RenderCopy(rend,r_Tex,NULL,&rRect);
                if(flag||timee>=22){
                   
                    deadman.x = 350;
                    deadman.y = playerPosition.y;
                    SDL_SetRenderDrawColor(rend, 0,0,0,0);
                    for(int i=0;i<7;i++)
                    SDL_RenderDrawLine(rend, 1200, 600 , playerPosition.x+i+100,playerPosition.y+i+50);
                    
                    SDL_SetRenderDrawColor(rend, 0,0,0,0);
                        
                    



                   
                    //SDL_RenderCopy(rend, deadmanTex, NULL, &deadman);
                    
                   //gameover=4;
                   //playerRect.x=0;
                    temp++;
                    //temp=1;
                    
               
                }
                //else
                 // { SDL_RenderCopy(rend,tex,&playerRect,&playerPosition);
               
                 // }
                 if(temp==1){
                    playerRect.x=0;
                    temp2=5;
                    //temp=0;

                 }
             
            }
            
            
            else
            {
               //SDL_RenderCopy(rend,tex,&playerRect,&playerPosition);
               SDL_RenderCopy(rend,g_Tex,NULL,&gRect);
            
               Mix_PlayChannel(-1,mAin,0);
            
            }
       
        
           if(playerPosition.x>=1100)
            {
                SDL_Delay(1500);

                playerPosition.y=100;
                gameover=2;
                Mix_HaltChannel(-1);
            }
        SDL_RenderPresent(rend);
}
void Vanish(){
   vRectp.x=playerPosition.x;
        vRectp.y=playerPosition.y+55;
}