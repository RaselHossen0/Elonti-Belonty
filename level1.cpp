#include "AllHeaderFiles.h"

extern  int gameover;
 int frameTime3=0;
 int ftham=0;
   extern int flag;
   FILE *fp;

  int f1,f2,f3,f4,f5,f6,f7;
 
   TTF_Font* ff=TTF_OpenFont( "res/fonts/Oswald-Bold.ttf", 28 );
   SDL_Texture *ftex;
void Level1(){
     // fopen("res/a.txt",'r');

SDL_RenderClear(rend);
     SDL_RenderCopy(rend,fb_tex,NULL,&fb);
         SDL_RenderCopy(rend,tex,&playerRect,&playerPosition);
        frameTime3++;
        if(60/frameTime3==1){
            frameTime3=0;
            if(ore==1)
           { playerRect.x+=frameWid;
           if(playerRect.x>=textureWidth)
           playerRect.x=4*frameWid;}
           if(playerRect.y==3*frameHe&&playerRect.x==4*frameWid)
           ftham=1,gameover=101;
                
         
         }
     
         


            ftime=SDL_GetTicks()/1000-flast;
        //printf("%d ",flast);
         
             int ftim=ftime;
             if(ftime ==0)ftim =3;
              if(ftime==1)ftim =2;
               if(ftime ==2)ftim =1;
                if(ftime ==3)ftim =0;
//printf("%d ",ftim);
  TTF_Font* ff1=TTF_OpenFont( "res/fonts/Oswald-Bold.ttf", 28 );
             if(!ff1)
           fprintf(fp,"a.txt","%s ",SDL_GetError());
            std::string fi=std::to_string(ftim);
            //printf("%s ",fi);
            SDL_Surface* fsurface=TTF_RenderText_Solid(ff1,fi.c_str(),{255,0,0});
             if(!fsurface)
             printf("%s #",SDL_GetError());
            ftex=SDL_CreateTextureFromSurface(rend,fsurface);
           
             SDL_FreeSurface(fsurface);
              if(!ftex)
             printf("%s *",SDL_GetError());
            SDL_Rect fr;//for font
            fr.x=500;
            fr.y=120;
            fr.w=260;
            fr.h=260;
            // loadTextSurfacewithRect(fi.c_str(),ff,{255,255,255},fr);
            if(ftime>=4)
            SDL_DestroyTexture(ftex);
            
            SDL_RenderCopy(rend,ftex,NULL,&fr);
            
            if(ftime>=f1&&ftime<=f1+2)
            {   SDL_RenderCopy(rend,f18_tex,NULL,&f15);
            if(ftime<f1+2)
                Mix_PlayChannel(-1,ore1,0);
            if(ore==0&&ftime==f1+2){playerRect.y=3*frameHe;
             SDL_SetRenderDrawColor(rend, 0,0,0,0);
                    for(int i=0;i<7;i++)
                    SDL_RenderDrawLine(rend, 1075, 160 , playerPosition.x+i+100,playerPosition.y+i+50);
                    
                    SDL_SetRenderDrawColor(rend, 0,0,0,0);}
            }
            else if(ftime>=f3&&ftime<=f3+2)
            { SDL_RenderCopy(rend,f20_tex,NULL,&f20);
            if(ftime<f3+2)
                Mix_PlayChannel(-1,ore2,0);
            if(ore==0&&ftime==f3+2){playerRect.y=3*frameHe;
             SDL_SetRenderDrawColor(rend, 0,0,0,0);
                    for(int i=0;i<7;i++)
                    SDL_RenderDrawLine(rend, 1075, 160 , playerPosition.x+i+100,playerPosition.y+i+50);
                    
                    SDL_SetRenderDrawColor(rend, 0,0,0,0);}
             }
            else if(ftime>=f4&&ftime<=f4+2)
            { SDL_RenderCopy(rend,f19_tex,NULL,&f19);
            if(ftime<f4+2)
                Mix_PlayChannel(-1,ore3,0);
            if(ore==0&&ftime==f4+2){playerRect.y=3*frameHe;
             SDL_SetRenderDrawColor(rend, 0,0,0,0);
                    for(int i=0;i<7;i++)
                    SDL_RenderDrawLine(rend,1075, 160 , playerPosition.x+i+100,playerPosition.y+i+50);
                    
                    SDL_SetRenderDrawColor(rend, 0,0,0,0);}
            }
            else if(ftime>=f5&&ftime<=f5+2)
           {SDL_RenderCopy(rend,f21_tex,NULL,&f21);
           if(ftime<f5+2)
             Mix_PlayChannel(-1,ore4,0);
            if(ore==0&&ftime==f5+2){playerRect.y=3*frameHe;
           SDL_SetRenderDrawColor(rend, 0,0,0,0);
                    for(int i=0;i<7;i++)
                    SDL_RenderDrawLine(rend, 1075, 160  , playerPosition.x+i+100,playerPosition.y+i+50);
                    
                    SDL_SetRenderDrawColor(rend, 0,0,0,0);}
           }
            else if(ftime>=f6&&ftime<=f6+2)
            {   SDL_RenderCopy(rend,f16_tex,NULL,&f16);
            if(ftime<f6+2)
                Mix_PlayChannel(-1,orena1,0);
            if(ore==1&&ftime==f6+2){playerRect.y=3*frameHe;
            SDL_SetRenderDrawColor(rend, 0,0,0,0);
                    for(int i=0;i<7;i++)
                    SDL_RenderDrawLine(rend, 1075, 160 , playerPosition.x+i+100,playerPosition.y+i+50);
                    
                    SDL_SetRenderDrawColor(rend, 0,0,0,0);}
            
            }
            else if(ftime>=f7&&ftime<=f7+2)
           {SDL_RenderCopy(rend,f17_tex,NULL,&f17);
           if(ftime<f7+2)
            Mix_PlayChannel(-1,orena2,0);
            if(ore==1&&ftime==f7+2){playerRect.y=3*frameHe;
            SDL_SetRenderDrawColor(rend, 0,0,0,0);
                    for(int i=0;i<7;i++)
                    SDL_RenderDrawLine(rend, 1075, 160  , playerPosition.x+i+100,playerPosition.y+i+50);
                    
                    SDL_SetRenderDrawColor(rend, 0,0,0,0);}
             }
            else if(ftime>=f2&&ftime<=f2+2)
            {SDL_RenderCopy(rend,f15_tex,NULL,&f15);
            if(ftime<f2+2)
                Mix_PlayChannel(-1,orena3,0);
            if(ore==1&&ftime==f2+2){playerRect.y=3*frameHe;
             SDL_SetRenderDrawColor(rend, 0,0,0,0);
                    for(int i=0;i<7;i++)
                    SDL_RenderDrawLine(rend, 1075, 160  , playerPosition.x+i+100,playerPosition.y+i+50);
                    
                    SDL_SetRenderDrawColor(rend, 0,0,0,0);}
            }
    
           
            // SDL_RenderCopy(rend,texx,NULL,&ftr);

   


        if(ftham==1)
         SDL_Delay(2000),SDL_RenderClear(rend),SDL_RenderCopy(rend,failed_tex,NULL,&failedr),Mix_HaltChannel(-1);
          else if(ftime>=34)
         {SDL_RenderClear(rend),SDL_RenderCopy(rend,fup_tex,NULL,&fup),SDL_RenderCopy(rend,fbt_tex,NULL,&fbt),Mix_HaltChannel(-1);
        
                 int mousx, mousy;
            int button = SDL_GetMouseState(&mousx, &mousy);
           
            if (button & SDL_BUTTON(SDL_BUTTON_LEFT))
            {
                if (mousx >= fbt.x && mousx <= (fbt.x + fbt.w) && mousy >= fbt.y && mousy <= (fbt.y + fbt.h))
                {
                    
                  ore=10;                 
                }
              
            }
            else if(mousx >= fbt.x && mousx <= (fbt.x + fbt.w) && mousy >= fbt.y && mousy <= (fbt.y + fbt.h))
            SDL_SetTextureColorMod(fbt_tex,100,100,200);
            else
            SDL_SetTextureColorMod(fbt_tex,255,255,255);
        
        if(ore==10){
        playerPosition.x=300;
        fPosition.x=-500;
        fPosition.y=-350;
      
         playerPosition.y=340;
         playerPosition.w=100;
         playerPosition.h=100;
         gameover=10; }
         //printf("%d",ore);
         }

         SDL_RenderPresent(rend);

    }
void OreRandomIZ(){
       srand(time(NULL));
           int cf=rand()%3;
           switch(cf){
            case 0:
             f1=26,f2=6,f3=22,f4=10,f5=14,f6=30,f7=18;
            
            break;
            case 1:
            f2=30,f4=26,f6=6,f7=10,f5=14,f1=18,f3=22;
            break;
            case 2:
            f1=30,f4=26,f3=6,f7=10,f5=14,f6=18,f2=22;
            break;
           

           }
}