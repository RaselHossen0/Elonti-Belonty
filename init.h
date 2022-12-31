#pragma once
#include <bits/stdc++.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>
#include <stdio.h>
#include "AllHeaderFiles.h"


#define WINDOW_WIDTH (1280)
#define WINDOW_HEIGHT (720)
#define SCROLL_SPEED (900)
#define RECT_SPEED (5.0)


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

// class LTexture
// {
// 	public:
	
// 		LTexture();

// 		~LTexture();

// 		bool loadFromFile( std::string path );

// 		void free();

// 		void setColor( Uint8 red, Uint8 green, Uint8 blue );

// 		void setBlendMode( SDL_BlendMode blending );

// 		void setAlpha( Uint8 alpha );
	
// 		void render( int x, int y, SDL_Rect* clip = NULL );

// 		int getWidth();
// 		int getHeight();

// 	private:
		
// 		SDL_Texture* mTexture;

		
// 		int mWidth;
// 		int mHeight;
// };


void close();


//Walking animation





