#pragma once
#include <bits/stdc++.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>
#include <stdio.h>
#include "AllHeaderFiles.h"

extern SDL_Window *win;
extern SDL_Renderer *rend;
extern SDL_Surface *surface;

 struct rect
{
    int frmWid, frmHit;
    rect(int fW, int fH)
    {
        frmWid = fW;
        frmHit = fH;
    }
};
extern int lastTime;
void init();

void close();







