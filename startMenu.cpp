#include "AllHeaderFiles.h"

   int flast=0;
extern  int gameover;
int ihp=0,ihp2=0;
int temtim1,temtim3;
int cros=0;
extern bool isRunning;
void StartMenu(){
    SDL_RenderClear(rend);
        if(ihp==0)
         {   temtim1=SDL_GetTicks()/1000;
         //printf("%d",temtim1);
            SDL_RenderCopy(rend,sTex,NULL,NULL);
        SDL_RenderCopy(rend, tex3, NULL, &start_rect);
        SDL_RenderCopy(rend, helptex, NULL, &help_rect);
        SDL_RenderCopy(rend, exittex, NULL, &e_rect); }
        
    
        int mousx, mousy;
            int button = SDL_GetMouseState(&mousx, &mousy);
            //printf("%d %d\n", mousx, mousy);
            if(ihp==0&&ihp2==0)
            if (button & SDL_BUTTON(SDL_BUTTON_LEFT))
            {
                if (mousx >= start_rect.x && mousx <= (start_rect.x + start_rect.w) && mousy >= start_rect.y && mousy <= (start_rect.y + start_rect.h))
                {
                    Mix_PlayChannel(-1,mouse,0);
                   gameover=100;
                   playerPosition.x=300;
                   fPosition.x=-500;
                   fPosition.y=-350;
                   flast=SDL_GetTicks()/1000;                   
                }
                else if(mousx >= e_rect.x && mousx <= (e_rect.x +e_rect.w) && mousy >= e_rect.y && mousy <= (e_rect.y + e_rect.h)){
                //SDL_Quit();           
                         Mix_PlayChannel(-1,mouse,0);

                isRunning =false;
                }
                else if(mousx >= help_rect.x && mousx <= (help_rect.x + help_rect.w) && mousy >= help_rect.y && mousy <= (help_rect.y + help_rect.h)){
                ihp++;
                                    Mix_PlayChannel(-1,mouse,0);

                }
            }

            else if(mousx >= start_rect.x && mousx <= (start_rect.x + start_rect.w) && mousy >= start_rect.y && mousy <= (start_rect.y + start_rect.h))
            SDL_SetTextureColorMod(tex3,100,100,200);
            else if(mousx >= help_rect.x && mousx <= (help_rect.x + help_rect.w) && mousy >= help_rect.y && mousy <= (help_rect.y + help_rect.h))
            SDL_SetTextureColorMod(helptex,100,100,200);
            else if(mousx >= e_rect.x && mousx <= (e_rect.x +e_rect.w) && mousy >= e_rect.y && mousy <= (e_rect.y + e_rect.h))
            SDL_SetTextureColorMod(exittex,100,100,200);
            else
            SDL_SetTextureColorMod(tex3,255,255,255),SDL_SetTextureColorMod(helptex,255,255,255),SDL_SetTextureColorMod(exittex,255,255,255);
        
         
          if(ihp==1)
        {  //r85.x=0;
            SDL_RenderCopy(rend,i76, NULL, &r76);
        
        SDL_RenderCopy(rend,i85, NULL, &r85);
        SDL_RenderCopy(rend,i86, NULL, &r86);
        int temtim=SDL_GetTicks()/1000-temtim1;

        //printf("%d",temtim);
        if(temtim>1)
        
        
          
        
        //printf("%d",ihp);
         ///if(ihp==2)
         if (button & SDL_BUTTON(SDL_BUTTON_LEFT))
            {
                                    Mix_PlayChannel(-1,mouse,0);

                 if(mousx >=r85.x && mousx <= (r85.x + r85.w) && mousy >= r85.y && mousy <= (r85.y + r85.h)){
                ihp2=1;

                
                }
                else if(mousx >=r86.x && mousx <= (r86.x + r86.w) && mousy >= r86.y && mousy <= (r86.y + r86.h)){
                ihp2=2,temtim3=SDL_GetTicks()/1000;
                                    Mix_PlayChannel(-1,mouse,0);

            }
           }
            else 
            {
           
             if(mousx >=r85.x && mousx <= (r85.x + r85.w) && mousy >= r85.y && mousy <= (r85.y + r85.h))
            SDL_SetTextureColorMod(i85,255,100,200);
            else
            SDL_SetTextureColorMod(i85,255,255,255);
            if(mousx >=r86.x && mousx <= (r86.x + r86.w) && mousy >= r86.y && mousy <= (r86.y + r86.h))
            SDL_SetTextureColorMod(i86,255,100,200);
            else
            SDL_SetTextureColorMod(i86,255,255,255);
        }
        }
        if(ihp2==2){
            SDL_RenderClear(rend);
            SDL_RenderCopy(rend,i77, NULL,NULL);
            SDL_RenderCopy(rend,i93, NULL, &r93);
             SDL_RenderCopy(rend,i75, NULL,&r75);
             SDL_RenderCopy(rend,i90, NULL, &r90);
            SDL_RenderCopy(rend,i91, NULL, &r91);
            //printf("%d",temtim3);
            int temtim4=SDL_GetTicks()/1000-temtim3;
            if(temtim4>1)
                 if (button & SDL_BUTTON(SDL_BUTTON_LEFT))
            {
                                    Mix_PlayChannel(-1,mouse,0);

                 if(mousx >=r90.x && mousx <= (r90.x + r90.w) && mousy >= r90.y && mousy <= (r90.y + r90.h)){
                ihp2=78;

                
                }
                else if(mousx >=r91.x && mousx <= (r91.x + r91.w) && mousy >= r91.y && mousy <= (r91.y + r91.h)){
                ihp2=79;
                                    Mix_PlayChannel(-1,mouse,0);

            }
               else if(mousx >=r75.x && mousx <= (r75.x + r75.w) && mousy >= r75.y && mousy <= (r75.y + r75.h)){
                ihp2=80;
            }

               else if(mousx >=r93.x && mousx <= (r93.x + r93.w) && mousy >= r93.y && mousy <= (r93.y + r93.h)){
                ihp2=4,ihp=93;
                                    Mix_PlayChannel(-1,mouse,0);

            }
           }
            else 
            {
           
             if(mousx >=r90.x && mousx <= (r90.x + r90.w) && mousy >= r90.y && mousy <= (r90.y + r90.h))
            SDL_SetTextureColorMod(i90,255,100,100);
            else
            SDL_SetTextureColorMod(i90,255,255,255);
            if(mousx >=r91.x && mousx <= (r91.x + r91.w) && mousy >= r91.y && mousy <= (r91.y + r91.h))
            SDL_SetTextureColorMod(i91,255,100,100);
            else
            SDL_SetTextureColorMod(i91,255,255,255);
            if(mousx >=r75.x && mousx <= (r75.x + r75.w) && mousy >= r75.y && mousy <= (r75.y + r75.h))
            SDL_SetTextureColorMod(i75,255,100,100);
            else
            SDL_SetTextureColorMod(i75,255,255,255);
            if(mousx >=r93.x && mousx <= (r93.x + r93.w) && mousy >= r93.y && mousy <= (r93.y + r93.h))
            SDL_SetTextureColorMod(i93,255,100,100);
            else
            SDL_SetTextureColorMod(i93,255,255,255);
        }
        

        }
       
        if(ihp2==1){
            SDL_RenderClear(rend);
            SDL_RenderCopy(rend,i82, NULL,NULL);
            SDL_RenderCopy(rend,i89, NULL, &r89);
            SDL_RenderCopy(rend,i93, NULL, &r93);
         if (button & SDL_BUTTON(SDL_BUTTON_LEFT))
            {
                                    Mix_PlayChannel(-1,mouse,0);

                 if(mousx >=r89.x && mousx <= (r89.x + r89.w) && mousy >= r89.y && mousy <= (r89.y + r89.h)){
                ihp2=3;

                
                }
                else if(mousx >=r93.x && mousx <= (r93.x + r93.w) && mousy >= r93.y && mousy <= (r93.y + r93.h)){
                ihp2=4;
                                    Mix_PlayChannel(-1,mouse,0);

            }
           }
            else 
            {
           
             if(mousx >=r89.x && mousx <= (r89.x + r89.w) && mousy >= r89.y && mousy <= (r89.y + r89.h))
            SDL_SetTextureColorMod(i89,255,100,200);
            else
            SDL_SetTextureColorMod(i89,255,255,255);
             if(mousx >=r93.x && mousx <= (r93.x + r93.w) && mousy >= r93.y && mousy <= (r93.y + r93.h))
            SDL_SetTextureColorMod(i93,255,100,200);
            else
            SDL_SetTextureColorMod(i93,255,255,255);
        }


        }
        if(ihp2==3){
            SDL_RenderClear(rend);
            
            
            SDL_RenderCopy(rend,i83, NULL,NULL);
            SDL_RenderCopy(rend,i93, NULL, &r93);
            if (button & SDL_BUTTON(SDL_BUTTON_LEFT))
            {
                 if(mousx >=r93.x && mousx <= (r93.x + r93.w) && mousy >= r93.y && mousy <= (r93.y + r93.h)){
                ihp2=4,ihp=44;
                                    Mix_PlayChannel(-1,mouse,0);

                
                }
            
           }
            else 
            {
           
             if(mousx >=r93.x && mousx <= (r93.x + r93.w) && mousy >= r93.y && mousy <= (r93.y + r93.h))
            SDL_SetTextureColorMod(i93,255,100,200);
            else
            SDL_SetTextureColorMod(i93,255,255,255);
           
        }
        }
         if(ihp2==4){
            SDL_RenderClear(rend);
            if(ihp==93)
            {SDL_RenderCopy(rend,i77, NULL,NULL);
            SDL_RenderCopy(rend,i93, NULL, &r93);
             SDL_RenderCopy(rend,i75, NULL,&r75);
             SDL_RenderCopy(rend,i90, NULL, &r90);
             SDL_RenderCopy(rend,i91, NULL, &r91);}
            else if(ihp==44)
            SDL_RenderCopy(rend,i83, NULL,NULL);
            else
            SDL_RenderCopy(rend,i82, NULL,NULL);
            SDL_RenderCopy(rend,i94, NULL, &r94);
            r94.x+=15;
            if(r94.x>0)
            {r94.x=0;
            SDL_RenderCopy(rend,i87, NULL, &r87);
            SDL_RenderCopy(rend,i88, NULL, &r88);
            if (button & SDL_BUTTON(SDL_BUTTON_LEFT))
            {
                 if(mousx >=r87.x && mousx <= (r87.x + r87.w) && mousy >= r87.y && mousy <= (r87.y + r87.h)){
                ihp2=0,ihp=0;
                                    Mix_PlayChannel(-1,mouse,0);

                
                }
                else if(mousx >=r88.x && mousx <= (r88.x + r88.w) && mousy >= r88.y && mousy <= (r88.y + r88.h)){
                                        Mix_PlayChannel(-1,mouse,0);

                isRunning =false;
            }
           }
            else 
            {
           
             if(mousx >=r87.x && mousx <= (r87.x + r87.w) && mousy >= r87.y && mousy <= (r87.y + r87.h))
            SDL_SetTextureColorMod(i87,255,100,200);
            else
            SDL_SetTextureColorMod(i87,255,255,255);
             if(mousx >=r88.x && mousx <= (r88.x + r88.w) && mousy >= r88.y && mousy <= (r88.y + r88.h))
            SDL_SetTextureColorMod(i88,255,100,200);
            else
            SDL_SetTextureColorMod(i88,255,255,255);
        }


            
            }
            
        }
        if(ihp2==78) {
            SDL_RenderClear(rend);
            SDL_RenderCopy(rend,i78, NULL,NULL);
            SDL_RenderCopy(rend,cross, NULL,&crossr);
            cros =78;
             }
         else if(ihp2==79) {
            SDL_RenderClear(rend);
            SDL_RenderCopy(rend,i79, NULL,NULL);
            SDL_RenderCopy(rend,cross, NULL,&crossr);
            cros=79;
             }
         else if(ihp2==80) {
            
            SDL_RenderClear(rend);
            SDL_RenderCopy(rend,i80, NULL,NULL);
            SDL_RenderCopy(rend,i89, NULL,&r89);
            
                  if (button & SDL_BUTTON(SDL_BUTTON_LEFT))
            {
                 if(mousx >=r89.x && mousx <= (r89.x + r89.w) && mousy >= r89.y && mousy <= (r89.y + r89.h)){
                ihp2=81;

                                    Mix_PlayChannel(-1,mouse,0);

                }
             
           }
            else 
            {
           
             if(mousx >=r89.x && mousx <= (r89.x + r87.w) && mousy >= r89.y && mousy <= (r89.y + r89.h))
            SDL_SetTextureColorMod(i89,255,100,200);
            else
            SDL_SetTextureColorMod(i89,255,255,255);
            
        }
             }
              if(ihp2==81) {
                cros =80;
            SDL_RenderClear(rend);
            SDL_RenderCopy(rend,i81, NULL,NULL);
            SDL_RenderCopy(rend,cross, NULL,&crossr);
             }
        if(cros==78||cros==79||cros==80)
                  if (button & SDL_BUTTON(SDL_BUTTON_LEFT))
            {
                 if(mousx >=crossr.x && mousx <= (crossr.x + crossr.w) && mousy >= crossr.y && mousy <= (crossr.y + crossr.h)){
                ihp2=2;
                                    Mix_PlayChannel(-1,mouse,0);


                
                }
            
           }
            else 
            {
           
             if(mousx >=crossr.x && mousx <= (crossr.x + crossr.w) && mousy >= crossr.y && mousy <= (crossr.y + crossr.h))
            SDL_SetTextureColorMod(cross,255,100,200);
            else
            SDL_SetTextureColorMod(cross,255,255,255);
            
        }
        
        SDL_RenderPresent(rend);
}