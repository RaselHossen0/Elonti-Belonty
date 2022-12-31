#pragma once
#include "AllHeaderFiles.h"


extern SDL_Texture *tex;
extern SDL_Rect deadman,start_rect,fbt,gameover_rect,cloud,gRect,rRect;
extern SDL_Rect  obs2Rect, obsRect,   bombRect,bombRect2,o1,o2,o3,o1n,o4,o5,o5d,o6,o7,o8,o8n,o9,o9n,oc,b1,b2,b3,b4,b5,fb,lst,life,life2,life3,nl;
extern SDL_Rect monboxr,f15,f16,f17,f18,f19,f20,f21,failedr,fup,fRect,fPosition,fPosition2,vRectp,vRect,replay_rect;
extern  SDL_Rect crossr,r75,r76,r77,r78,r79,r80,r81,r82,r83,r85,r86,r87,r88,r89,r90,r91,r92,r93,r94;
extern SDL_Rect e_rect,help_rect;
//extern  SDL_Rect moneyr;
void LoadRect();
void loadTextSurfacewithRect(std::string path,TTF_Font *font,SDL_Color color, SDL_Rect area);