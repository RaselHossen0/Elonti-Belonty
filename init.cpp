#include <bits/stdc++.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>
#include <stdio.h>
#include "audio.h"
#include "AllHeaderFiles.h"


#define WINDOW_WIDTH (1280)
#define WINDOW_HEIGHT (720)
#define SCROLL_SPEED (900)
#define RECT_SPEED (5.0)


SDL_Window *win;
SDL_Renderer *rend;
SDL_Surface *surface;
int lastTime=SDL_GetTicks()/1000;

void init()
{
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER) > 0)
    {
        printf("video and timer: %s\n", SDL_GetError());
    }
    /*if (!(IMG_Init(IMG_INIT_PNG|IMG_INIT_JPG)))
        printf("image: %s\n",SDL_GetError());*/
    if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,2,2048)<0)
    printf("successful");
	TTF_Init();
  
   // printf("Initialization Complete\n");


    win = SDL_CreateWindow("ELonti-Belonti", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, 0);

    if (!win)
    {
        printf("window: %s\n", SDL_GetError());
        SDL_Quit();
       // return 1;
    }

    Uint32 render_flags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;
    rend = SDL_CreateRenderer(win, -1, render_flags);

    if (!rend)
    {
        printf("renderer: %s\n", SDL_GetError());
        SDL_DestroyWindow(win);
        SDL_Quit();
        //return 1;
    }
}
class LTexture
{
	public:
	
		LTexture();

		~LTexture();

		bool loadFromFile( std::string path );

		void free();

		void setColor( Uint8 red, Uint8 green, Uint8 blue );

		void setBlendMode( SDL_BlendMode blending );

		void setAlpha( Uint8 alpha );
	
		void render( int x, int y, SDL_Rect* clip = NULL );

		int getWidth();
		int getHeight();

	private:
		
		SDL_Texture* mTexture;

		
		int mWidth;
		int mHeight;
};

 LTexture::LTexture()
{
	//Initiaize
	mTexture = NULL;
	mWidth = 0;
	mHeight = 0;
}

LTexture::~LTexture()
{
	free();
}

bool LTexture::loadFromFile( std::string path )
{
	//free();

	SDL_Texture* newTexture = NULL;

	SDL_Surface* loadedSurface = IMG_Load( path.c_str() );

	SDL_SetColorKey( loadedSurface, SDL_TRUE, SDL_MapRGB( loadedSurface->format, 0, 0xFF, 0xFF ) );
		
    newTexture = SDL_CreateTextureFromSurface( rend, loadedSurface );
		
	mWidth = loadedSurface->w;
	mHeight = loadedSurface->h;
	
	SDL_FreeSurface( loadedSurface );

	mTexture = newTexture;
	return mTexture != NULL;
}

void LTexture::free()
{
	//	SDL_DestroyTexture( mTexture );
		mTexture = NULL;
		mWidth = 0;
		mHeight = 0;
}

void LTexture::setColor( Uint8 red, Uint8 green, Uint8 blue )
{
	SDL_SetTextureColorMod( mTexture, red, green, blue );
}

void LTexture::setBlendMode( SDL_BlendMode blending )
{
	SDL_SetTextureBlendMode( mTexture, blending );
}
		
void LTexture::setAlpha( Uint8 alpha )
{
	SDL_SetTextureAlphaMod( mTexture, alpha );
}

void LTexture::render( int x, int y, SDL_Rect* clip )
{
	SDL_Rect renderQuad = { x, y, mWidth, mHeight };
	renderQuad.w = clip->w;
	renderQuad.h = clip->h;
	SDL_RenderCopy( rend, mTexture, clip, &renderQuad );
}

int LTexture::getWidth()
{
	return mWidth;
}

int LTexture::getHeight()
{
	return mHeight;
}
void close()
{
	    SDL_Delay(100);
    Mix_FreeChunk(mAin);
    Mix_FreeChunk(ore1);
    Mix_FreeChunk(ore2);
    Mix_FreeChunk(ore3);
    Mix_FreeChunk(ore4);
    //SDL_CloseAudioDevice(deviceId);
    //SDL_FreeWAV(wavBuffer);
    SDL_DestroyRenderer(rend);
    SDL_DestroyWindow(win);
    Mix_Quit();
    SDL_Quit();
    //return 0;

	IMG_Quit();
	SDL_Quit();
}
