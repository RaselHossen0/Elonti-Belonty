#include "AllHeaderFiles.h"
  int ox=0,lifecount=0,o1f=0,frameTime=0;
   //   bool b[2]={0,0};
    //int camx=0,camy=0;
    int bcnt=0,failed=0,money=0;
 //   int var=2;
    int bf=0,bf2=0;
    extern TTF_Font *ff;
    extern double last;
void Level2(){

      frameTime++;
            //playerPosition.x=100;
             SDL_RenderClear(rend);
             
             SDL_RenderCopy(rend,b1_tex,NULL,&b1);
             SDL_RenderCopy(rend,b2_tex,NULL,&b2);
             SDL_RenderCopy(rend,b3_tex,NULL,&b3);
             SDL_RenderCopy(rend,b4_tex,NULL,&b4);
              SDL_RenderCopy(rend,b5_tex,NULL,&b5);
            
            
             SDL_RenderCopy(rend,life_tex,NULL,&life);
             SDL_RenderCopy(rend,life2_tex,NULL,&life2);
             SDL_RenderCopy(rend,life3_tex,NULL,&life3);
              SDL_RenderCopy(rend,g_tex,NULL,&o7);
              SDL_RenderCopy(rend,a_tex,NULL,&o1);
              SDL_RenderCopy(rend,b_tex,NULL,&o2);
               SDL_RenderCopy(rend,c_tex,NULL,&o3);
                SDL_RenderCopy(rend,d_tex,NULL,&o4);
                 SDL_RenderCopy(rend,e_tex,NULL,&o5);
                  SDL_RenderCopy(rend,f_tex,NULL,&o6);
                  
                 SDL_RenderCopy(rend,h_tex,NULL,&o8);
                  SDL_RenderCopy(rend,i_tex,NULL,&o9);
                  SDL_RenderCopy(rend,oc_tex,NULL,&oc);
                  SDL_RenderCopy(rend,f_Tex,&fRect,&fPosition);
                  SDL_RenderCopy(rend,hn_tex,NULL,&o8n);
                  
           
             
            
                 // if(b[0]){
                //camx+=5;
                //b1.x+=5;
                //if(b1.x>=1500)
                //b1.x=0;
           // }
           // else
           //frameTime++;
           //if(frameTime==60)
         // printf("%d",b[1]);
                if(40/frameTime==1){
                    frameTime=0;
                    if(o1f==1){
                        playerRect.y=4*frameHe;
                        playerRect.x+=frameWid;
                   //playerPosition.x+=10;
                    if(playerRect.x>=textureWidth)
                            {playerRect.x=textureWidth-frameWid;
                        SDL_RenderCopy(rend,an_tex,NULL,&o1n);
                         if(o1n.y>=150&&o1n.x>=500)
                         o1n.x+=50,o1n.y+=50;
                         else
                          o1n.x+=50,o1n.y-=50;
                         if(o1n.y>=370)
                         o1n.y=351,o1f=0,o1n.x=450;}

                         }
                        //static int fp=200;
                    if(o1n.x==450&&o1n.y==351){ 
                        fPosition.x=650;
                       fPosition.y=200;
                        
                         fRect.x+=rf.frmWid;
                        if(fRect.x>=txturWidthf)
                                        {fRect.x=0;
                                        fRect.y+=rf.frmHit;}
                        if(fRect.y>=txturHeightf)
                                        {fRect.y=0,fPosition.y=-400;
                                        o8.y=-400;
                                         }
                            


                    }
                    if(o8.y==-400)
                    o8n.x=600,o8n.y=270,o8.y=-401,o1n.y=-351;
                    
               
          
                    
                         
                   if(f==1&&b[1]==1)
           
           //printf("A%d",frameTime);
                        //frameTime=0;
                
                   // frameTime=0;
                    
                    
                     //playerPosition.y=342;
                   { playerRect.x+=frameWid;
                   //playerPosition.x+=10;
                    if(playerRect.x>=textureWidth)
                            {playerRect.x=textureWidth-frameWid;
                            //playerPosition.y=340;
                            b[1]=0;
                            f=0;
                            }
                            }
               
                }

             if(b[1]){
           
                b1.x-=var;
                o2.x-=var;
                o3.x-=var;
                o4.x-=var;
                o5.x-=var;
                o6.x-=var;
                o7.x-=var;
                o8.x-=var;
                o8n.x-=var;
                o9.x-=var;
                o1.x-=var;
                oc.x-=var;
                if(b1.x<=0)
                b2.x-=var;
                if(b2.x<=0)
                b3.x-=var;

                if(b3.x<=2&&b3.x>=-20&&bf==0)
                {
                 
                 b2.x=WINDOW_WIDTH;
                 b2.y=-27;
                 b3.x=0;
                 bf=1;
                 oc.x=890;
                 oc.y=370;

                 
                // if(b2.x<=5)
                //b3.x-=5;
               
                 
                }
                else if(b3.x<2)
                {b3.x-=var;
                if(b3.x<-20)
                bf=0;}
                
                if(b2.x<=0&&b2.x>=-20&&b1.x<0&&bf2==0)
                {  
                     bcnt++;
                    if(bcnt<3)
                    b3.x=WINDOW_WIDTH-8,oc.x=WINDOW_WIDTH+300,oc.y=370;;
                    bf2=1;
                    
                    //b2.x-=5;
                }
                if(b2.x<-20)
                bf2=0;
                if(bcnt>=3)
                b4.x-=var;
                if(b4.x<=0)
                b5.x-=var;
                if(b4.x<=-500){
                   // SDL_DestroyTexture(a_tex);
                   // SDL_DestroyTexture(h_tex);
                    playerPosition.x=-100;
                   
                        lst.x=0;
                 
                   
                }
             
            }
              
            if(o8.x==WINDOW_WIDTH-50&&b4.x>800){
                
                o3.x=400+1200;
                o3.y=340;
                o4.x=700+1200;
                o4.y=300;
                
                o5.x=1000+1200;
                o5.y=250;
                o6.x=1300+1200;
                o6.y=340;

               
               

            }
            if(o8.x==0&&b4.x>800)
            {
               o7.x=1593;
                o7.y=360;
                o1.x=2400;
                o1.y=365;
                o2.x=2100;
                o2.y=360;
                 o9.x=1900;
                o9.y=370;
            }
            if(o8.x<-150&&b4.x>800){
                o8.x=2430;
                o8.y=250;
            }
             ///if(o1.x<=340)
             ///{o1.y-=2;
             ///if(o1.y<=245)
             ///o1.y=250;
             ///o1.x=341;}

             

            
            if(o3.x<=330&&o3.x>=214||o4.x<=330&&o4.x>=208||o5.x<=330&&o5.x>=173||o6.x<=330&&o6.x>=214||o7.x<=290&&o7.x>=210||o8.x<=290&&o8.x>=160||o9.x<=340&&o9.x>=208){
                if(f==0){
                    SDL_SetTextureColorMod(tex,255,0,0);
                   // SDL_SetTextureColorMod(life_tex,0,0,0);
                    if((o3.x==330||o4.x==330||o5.x==330||o6.x==330||o7.x==330||o8.x==330||o9.x==330)&&ox==0)
                    ox=1,lifecount++;
                    if(lifecount==1)
                    SDL_SetTextureColorMod(life_tex,0,0,0);
                    if(lifecount==2)
                    SDL_SetTextureColorMod(life2_tex,0,0,0);
                    if(lifecount==3)
                    SDL_SetTextureColorMod(life3_tex,0,0,0), failed=1;
                    
                }
                 else
                SDL_SetTextureColorMod(tex,255,255,255),ox=0;
                
            }
            else
                SDL_SetTextureColorMod(tex,255,255,255),ox=0;


             if(o2.x<=330&&o2.x>=208){
               // printf("%d",f);
                //if(f==0){
                    
                    o2.y-=10;
                    if(o2.y==200)
                    money=money+70;
                    // printf("%d",ox);
                    
                    ///if(o2.x==330&&ox==0)
                    ///money=money+70,ox=1;
                    ///else
                    ///ox=0;
                //}
                
                
            }
               if(oc.x<=330&&oc.x>=214){
                //if(f==0){
                    oc.y-=10;
                 
                    
                    if(oc.x==330&&ox==0)
                    money=money+10,ox=1;
                    else 
                    ox=0;
               // }
                
                
            }
            if(o5.y==-323)
            {SDL_RenderCopy(rend,ed_tex,NULL,&o5d);
            if(b[1])
            o5d.x-=var;
            if(o5.x==-200)
            o5.y=250;
            

            }
            
                
            std::string i=std::to_string(money);
            SDL_Surface* surface=TTF_RenderText_Solid(ff,i.c_str(),{255,165,0});
            SDL_Texture* moneytex=SDL_CreateTextureFromSurface(rend,surface);
            SDL_FreeSurface(surface);
    
            SDL_Rect moneyr;//for font
            moneyr.x=158;
            moneyr.y=89;
            moneyr.w=60;
            moneyr.h=60;
            SDL_RenderCopy(rend,monbox_tex,NULL,&monboxr);
             SDL_RenderCopy(rend,moneytex,NULL,&moneyr);
         
               

            //printf("p%d\n",o1.x);
            
            int mousx, mousy;
           // int tham=1;
            int button = SDL_GetMouseState(&mousx, &mousy);
            //printf("%d %d\n", mousx, mousy);
            if(o1.x<-2750)
            o1.y=380,o1.x=380;
            if (button & SDL_BUTTON(SDL_BUTTON_LEFT))
            {
                if (mousx >= nl.x && mousx <= (nl.x +nl.w) && mousy >=nl.y && mousy <= (nl.y +nl.h))
                {
                    if(lst.x==0)
                    {gameover =0;
                    fPosition.x=500;
                    fPosition.y=350;
                    playerPosition.x=0;
                    playerPosition.y=400;
                    playerRect.x=playerRect.y=0;
                    f=0;
                    flag=0;
                    frameTime=0;
                    }

                    last=SDL_GetTicks()/1000;                   
                }
               // if(o1.y==250)
                
                    if (mousx >= o1.x && mousx <= (o1.x +o1.w) && mousy >=o1.y && mousy <= (o1.y +o1.h))
                        //o1.x=330;
                         o1f=1,o1.y=-400,playerRect.x=0, o1n.x=340,o1n.y=365;
    
                   // }
                    //if(o1.y==251){  
                         
                        

                         


                         
               
            }
             SDL_RenderCopy(rend,tex,&playerRect,&playerPosition);
                 if(failed==1){
                SDL_RenderClear(rend);
                SDL_RenderCopy(rend,failed_tex,NULL,&failedr);
               }  
               if(lst.x==0)
                SDL_RenderClear(rend), SDL_RenderCopy(rend,lst_tex,NULL,&lst), SDL_RenderCopy(rend,nl_tex,NULL,&nl);
                SDL_RenderPresent(rend);
           
}