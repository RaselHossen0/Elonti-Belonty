#include "AllHeaderFiles.h"

extern int gameover;
double b2x=0,b2y=0;
double bx=0,by=0,count2=0,last=0;
int temp=0;
void Replay1(){

            SDL_RenderClear(rend);
            SDL_RenderCopy(rend, gameover_tex, NULL, &gameover_rect);
            SDL_RenderCopy(rend, replay_tex, NULL, &replay_rect);

            

          

            SDL_RenderPresent(rend);

            int mousex, mousey;
            int buttons = SDL_GetMouseState(&mousex, &mousey);
            //printf("%d %d\n", mousex, mousey);

            if (buttons & SDL_BUTTON(SDL_BUTTON_LEFT))
            {
                if (mousex >= replay_rect.x && mousex <= (replay_rect.x + replay_rect.w) && mousey >= replay_rect.y && mousey <= (replay_rect.y + replay_rect.h))
                {

                  count2=SDL_GetTicks() / 1000-last;
                    gameover = 0;
                    x_pos=0.0;
                   
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