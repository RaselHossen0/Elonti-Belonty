#include "AllHeaderFiles.h"


int vtxturWidth,vtxturHeight;

SDL_Texture *tex0,*sTex ,*deadmanTex,*againTex,*tex3  ,*tex ,*gameover_tex,*cloud_Tex,*g_Tex,*bg_Tex ;
SDL_Texture *r_Tex,*obs2_Tex,*obs_Tex,*bomb_Tex,*Putul_Tex,*fire_Tex;
 SDL_Texture *fire2_Tex,*replay_tex,*a_tex ,*an_tex,*b_tex,*c_tex,*d_tex,*e_tex;
 SDL_Texture  *ed_tex,*f_tex,*g_tex,*h_tex,*hn_tex,*i_tex ,*oc_tex,*b1_tex ,*b2_tex ,*b3_tex ,*b4_tex ,*b5_tex ;
 SDL_Texture *fb_tex ,*lst_tex,*life_tex,*life2_tex,*life3_tex,*nl_tex,*monbox_tex,*f15_tex ,*f16_tex ,*f17_tex ,*f18_tex ,*f19_tex ,*f20_tex ,*f21_tex ;
 SDL_Texture *failed_tex , *fup_tex,*f_Tex,*v_Tex,*fbt_tex;
SDL_Texture *cross,*i76,*i75,*i94,*i77,*i78,*i79,*i80,*i86,*i81,*i82,*i83,*i85,*i87,*i88,*i89,*i90,*i91,*i92,*i93;
  SDL_Texture *helptex,*exittex;
  int textureWidth,textureHeight;
   int txturWidthf,txturHeightf;
  int frameHe,frameWid;
   SDL_Rect  playerRect,playerPosition;
   SDL_Rect  playrRect;
    SDL_Rect playrPosition;
      SDL_Rect  plarRect1;//rect for a single frame of the sprite sheet
    SDL_Rect plarPosition1;
      SDL_Rect plarRect2;//rect for a single frame of the sprite sheet
    SDL_Rect plarPosition2;

    SDL_Rect  plarRect22;//rect for a single frame of the sprite sheet
    SDL_Rect plarPosition22;
     SDL_Rect  plarRect3;//rect for a single frame of the sprite sheet
    SDL_Rect plarPosition3;
     int texturWidth,texturHeight;
         int txturWidth1,txturHeight1;
            int txturWidth2,txturHeight2;
             int txturWidth22,txturHeight22;
               int txturWidth3,txturHeight3;
      struct rect r1(texturWidth/3,texturHeight);
       struct rect r2(txturWidth1/10,txturHeight1);
          struct rect r5(txturWidth2/10,txturHeight2);

    struct rect r6(txturWidth2/10,txturHeight2);
     struct rect r7(txturWidth1/10,txturHeight1);
    
      struct rect rf(txturWidthf/4,txturHeightf/2);
         struct rect rv(vtxturWidth/4,vtxturHeight);
  // struct rect r4(textureWidth/6,textureHeight/6);
bool loadMedia()
{
	//Loading success flag
	bool success = true;
    SDL_Surface *surface = IMG_Load("res/dip.png");
    if (!surface)
    {
        printf("Redbar Surface Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return success;
    }

    tex0 = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    if (!tex0)
    {
        printf("Redline Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    surface = IMG_Load("res/startb.png");
    sTex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("res/deadman.png");
    deadmanTex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
//	tex0.loadFromFile( "res/dip.png" );

     surface = IMG_Load("res/playAgain.png");
    againTex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    
    surface = IMG_Load("res/start.png");
    if (!surface)
    {
        printf("Redbar Surface Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }

    tex3 = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    if (!tex3)
    {
        printf("Redline Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }

    surface = IMG_Load("res/all.png");
    if (!surface)
    {
        printf("Redbar Surface Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }

    tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
   //SDL_Texture *tex =SDL_CreateTexture(rend,SDL_PIXELFORMAT_ABGR1555,SDL_TEXTUREACCESS_TARGET,900,900);
    if (!tex)
    {
        printf("Redline Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
   
    SDL_QueryTexture(tex,NULL,NULL,&textureWidth,&textureHeight);
    frameHe=textureHeight/6,frameWid=textureWidth/6;



 playerPosition.x=0+50;
    playerPosition.y=340-100;
    playerPosition.w=2*100;
    playerPosition.h=2*100;
 
     playerRect.x=playerRect.y=0;
    playerRect.w=frameWid;
    playerRect.h=frameHe;

    surface = IMG_Load("res/gameover.jpeg");
    if (!surface)
    {
        printf("Green rectangle Surface Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }
    gameover_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    if (!tex)
    {
        printf("Green Rectangle Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }

    surface =IMG_Load("res/cloudh.png");
    cloud_Tex =SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);

    surface =IMG_Load("res/bgn.png");
    bg_Tex =SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);

    surface =IMG_Load("res/gh.png");
    g_Tex =SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);

     surface =IMG_Load("res/rh.png");
    r_Tex =SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);

     surface =IMG_Load("res/obs2.png");
    //SDL_Texture *obs_Tex =SDL_CreateTexture(rend,SDL_PIXELFORMAT_RGBA8888,SDL_TEXTUREACCESS_TARGET,150,150);
    obs2_Tex =SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);
    
surface =IMG_Load("res/obs.png");
    //SDL_Texture *obs_Tex =SDL_CreateTexture(rend,SDL_PIXELFORMAT_RGBA8888,SDL_TEXTUREACCESS_TARGET,150,150);
    obs_Tex =SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);

      surface =IMG_Load("res/bomb.png");
    //SDL_Texture *obs_Tex =SDL_CreateTexture(rend,SDL_PIXELFORMAT_RGBA8888,SDL_TEXTUREACCESS_TARGET,150,150);
    bomb_Tex =SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);
 surface =IMG_Load("res/putulh.png");
    Putul_Tex =SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);

 surface =IMG_Load("res/fire.png");
    fire_Tex =SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);

      surface =IMG_Load("res/fire2.png");
    fire2_Tex =SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);

      surface = IMG_Load("res/replay.png");
    
    replay_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
     surface = IMG_Load("res/1.png");
    
    a_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("res/1.png");
    
    an_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("res/2.png");
    
    b_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

     surface = IMG_Load("res/4.png");
    
    c_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

      surface = IMG_Load("res/5.png");
    
    d_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("res/6.png");
    
    e_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

     surface = IMG_Load("res/6down.png");
    
    ed_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("res/7.png");
    
    f_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

     surface = IMG_Load("res/8.png");
    
    g_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

      surface = IMG_Load("res/9.png");
    
    h_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("res/9n.png");
    
    hn_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
     surface = IMG_Load("res/10.png");
    
    i_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

      surface = IMG_Load("res/coin.png");
    
    oc_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

     surface = IMG_Load("res/b49.png");
    
    b1_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
     surface = IMG_Load("res/b50.png");
    
    b2_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("res/b51.png");
    
    b3_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("res/b52.png");
    
    b4_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("res/b5.png");
    b5_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

     surface = IMG_Load("res/fb.png");
    fb_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);
    surface = IMG_Load("res/l.png");
    
    lst_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("res/life.png");
    
    life_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("res/life.png");
    
    life2_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("res/life.png");
    
    life3_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("res/nl.png");
     nl_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("res/monbox.png");
    
    monbox_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

     surface = IMG_Load("res/15.png");
    f15_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("res/16.png");
    
    f16_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

     surface = IMG_Load("res/17.png");
    
    f17_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("res/18.png");
    
    f18_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

      surface = IMG_Load("res/19.png");
    
    f19_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("res/20.png");
    
    f20_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

       surface = IMG_Load("res/21.png");
    
    f21_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

      surface = IMG_Load("res/failed.png");
    
    failed_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("res/fp.png");
    
    fup_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

     surface =IMG_Load("res/f.png");
    f_Tex =SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);

     surface =IMG_Load("res/vanish.png");
    v_Tex =SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);

    SDL_QueryTexture(v_Tex,NULL,NULL,&vtxturWidth,&vtxturHeight);

SDL_QueryTexture(Putul_Tex,NULL,NULL,&texturWidth,&texturHeight);
 SDL_QueryTexture(fire_Tex,NULL,NULL,&txturWidth1,&txturHeight1);
 SDL_QueryTexture(fire_Tex,NULL,NULL,&txturWidth2,&txturHeight2);
  SDL_QueryTexture(fire2_Tex,NULL,NULL,&txturWidth22,&txturHeight22);
   SDL_QueryTexture(fire2_Tex,NULL,NULL,&txturWidth3,&txturHeight3);
         SDL_QueryTexture(f_Tex,NULL,NULL,&txturWidthf,&txturHeightf);
    playrPosition.x=1150;
    playrPosition.y=287;
    playrPosition.w=130;
    playrPosition.h=100;

    // int texturWidth,texturHeight;
    // SDL_QueryTexture(Putul_Tex,NULL,NULL,&texturWidth,&texturHeight);


    // struct rect r1(texturWidth/3,texturHeight);
    playrRect.x=playrRect.y=0;
    playrRect.w=r1.frmWid;
    playrRect.h=r1.frmHit;

   

 
    // SDL_Rect  plarRect1;//rect for a single frame of the sprite sheet
    // SDL_Rect plarPosition1;//rect for the whole sprite sheet
    plarPosition1.x=250;
    plarPosition1.y=230;
    plarPosition1.w=130;
    plarPosition1.h=130;//ei rec(square) er moddher kothao texture (runman) load hobe
    
    // int txturWidth1,txturHeight1;
    // SDL_QueryTexture(fire_Tex,NULL,NULL,&txturWidth1,&txturHeight1);

    
    // struct rect r2(txturWidth1/10,txturHeight1);
    plarRect1.x=plarRect1.y=0;
    plarRect1.w=r2.frmWid;
    plarRect1.h=r2.frmHit;

    // SDL_Rect plarRect2;//rect for a single frame of the sprite sheet
    // SDL_Rect plarPosition2;//rect for the whole sprite sheet
    plarPosition2.x=430;
    plarPosition2.y=230;
    plarPosition2.w=130;
    plarPosition2.h=130;

    // int txturWidth2,txturHeight2;
    // SDL_QueryTexture(fire_Tex,NULL,NULL,&txturWidth2,&txturHeight2);

    
    // struct rect r5(txturWidth2/10,txturHeight2);
    plarRect2.x=plarRect2.y=0;
    plarRect2.w=r5.frmWid;
    plarRect2.h=r5.frmHit;
    
  

    // SDL_Rect  plarRect22;//rect for a single frame of the sprite sheet
    // SDL_Rect plarPosition22;//rect for the whole sprite sheet
    plarPosition22.x=790;
    plarPosition22.y=237;
    plarPosition22.w=130;
    plarPosition22.h=130;//ei rec(square) er moddher kothao texture (runman) load hobe
    
    // int txturWidth22,txturHeight22;
    // SDL_QueryTexture(fire2_Tex,NULL,NULL,&txturWidth22,&txturHeight22);

  
    // struct rect r6(txturWidth2/10,txturHeight2);
    plarRect22.x=plarRect22.y=0;
    plarRect22.w=r6.frmWid;
    plarRect22.h=r6.frmHit;

    // SDL_Rect  plarRect3;//rect for a single frame of the sprite sheet
    // SDL_Rect plarPosition3;//rect for the whole sprite sheet
    plarPosition3.x=600;
    plarPosition3.y=237;
    plarPosition3.w=130;
    plarPosition3.h=130;//ei rec(square) er moddher kothao texture (runman) load hobe
    
    // int txturWidth3,txturHeight3;
    // SDL_QueryTexture(fire2_Tex,NULL,NULL,&txturWidth3,&txturHeight3);

    
    // struct rect r7(txturWidth1/10,txturHeight1);
    plarRect3.x=plarRect3.y=0;
    plarRect3.w=r7.frmWid;
    plarRect3.h=r7.frmHit;

    // SDL_QueryTexture(tex,NULL,NULL,&textureWidth,&textureHeight);

    //startb.loadFromFile("res/startb.png");

    // int txturWidthf,txturHeightf;
    // SDL_QueryTexture(f_Tex,NULL,NULL,&txturWidthf,&txturHeightf);

  
    // struct rect rf(txturWidthf/4,txturHeightf/2);
    fRect.x=fRect.y=0;
    fRect.w=rf.frmWid;
    fRect.h=rf.frmHit;

 
    // struct rect rv(vtxturWidth/4,vtxturHeight);
    vRect.x=vRect.y=0;
    vRect.w=rv.frmWid;
    vRect.h=rv.frmHit;

     surface = IMG_Load("res/fbt.png");
    
    fbt_tex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

  surface =IMG_Load("res/cross.png");
     cross=SDL_CreateTextureFromSurface(rend,surface);
     SDL_FreeSurface(surface);
   surface =IMG_Load("res/75.png");
     i75=SDL_CreateTextureFromSurface(rend,surface);
     SDL_FreeSurface(surface);
    surface =IMG_Load("res/76.png");
     i76=SDL_CreateTextureFromSurface(rend,surface);
     SDL_FreeSurface(surface);
    surface =IMG_Load("res/94.png");
    i94=SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);
    surface =IMG_Load("res/77.png");
     i77=SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);
    surface =IMG_Load("res/78.png");
     i78=SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);
    surface =IMG_Load("res/79.png");
     i79=SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);
    surface =IMG_Load("res/80.png");
     i80=SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);
    surface =IMG_Load("res/81.png");
     i81=SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);
     surface =IMG_Load("res/82.png");
      i82=SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);
    surface =IMG_Load("res/83.png");
     i83=SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);
    
   
    surface =IMG_Load("res/85.png");
     i85=SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);
    surface =IMG_Load("res/86.png");
     i86=SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);
    surface =IMG_Load("res/87.png");
     i87=SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);
     surface =IMG_Load("res/88.png");
      i88=SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);
    surface =IMG_Load("res/89.png");
     i89=SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);
    surface =IMG_Load("res/90.png");
     i90=SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);
    surface =IMG_Load("res/91.png");
     i91=SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);
    surface =IMG_Load("res/92.png");
     i92=SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);
    surface =IMG_Load("res/93.png");
    i93=SDL_CreateTextureFromSurface(rend,surface);
    SDL_FreeSurface(surface);
	
    surface = IMG_Load("res/help.png");
    helptex = SDL_CreateTextureFromSurface(rend, surface);
    SDL_FreeSurface(surface);

  surface = IMG_Load("res/exit.png");
    exittex = SDL_CreateTextureFromSurface(rend, surface);
     SDL_FreeSurface(surface);
	return success;
}
void WelcomeToELontiBelonti(){
  
    SDL_RenderClear(rend);
    SDL_RenderCopy(rend, tex0, NULL, NULL);
    SDL_RenderPresent(rend);
    SDL_Delay(2000/3);
}