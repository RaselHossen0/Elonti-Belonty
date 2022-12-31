#include "AllHeaderFiles.h"

void TryAgain_Level3()
{
     SDL_RenderClear(rend);
            
            SDL_RenderCopy(rend,againTex,NULL,NULL);
             SDL_RenderPresent(rend);

            int mousex, mousey;
            int buttons = SDL_GetMouseState(&mousex, &mousey);
           

            if (buttons & SDL_BUTTON(SDL_BUTTON_LEFT))
            {
                if (mousex >= WINDOW_WIDTH/3.5 && mousex <= WINDOW_WIDTH/1.5 && mousey >= WINDOW_HEIGHT/3.5&& mousey <= WINDOW_HEIGHT/1.5)
                {
                    gameover = 0;
                    x_pos=0.0;
                    count2=SDL_GetTicks() / 1000-last;
                   playerPosition.x=0;
                   playerPosition.y=400;
                   playerRect.x=playerRect.y=0;
                   bx=0;
                   by=0;
                   b2x=0;
                   b2y=0;
                    bombRect.x=98;
                    bombRect.y=505;
                     bombRect2.x=1120;
                     bombRect2.y=520;
                     temp=0;
                    
                   
                }
            }
}
void TryAgain_Wait(){
     SDL_Delay(2000);
           SDL_RenderClear(rend);
             Mix_HaltChannel(-1);
            temp2=22; 
}