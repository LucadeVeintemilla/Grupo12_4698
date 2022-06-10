#include <iostream>
#include <thread>
#include <SDL.h>        
#include <SDL_image.h>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#pragma once
#include "Menu.h"
#include "Login.h"

using namespace std;
void marquesina(string texto, size_t limit)
{
	bool ciclo = true;
	while (ciclo)
	{
		string tmp = texto;
		texto.erase(0, 1);
		texto += tmp[0];
		this_thread::sleep_for(chrono::milliseconds(250));
		SetConsoleTitleA(texto.substr(0, limit).c_str());
	}
}
int main(int argc, char ** argv)
{
    bool quit = false;
    SDL_Event event;
 
  
    SDL_Window * window = SDL_CreateWindow("SDL2 Displaying Image",SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
    SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);
    	
	SDL_Surface * image = SDL_LoadBMP( "hello_world.bmp" );
    SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer, image);
 
    while (!quit)
    {
        SDL_WaitEvent(&event);
 
        switch (event.type)
        {
            case SDL_QUIT:
                quit = true;
                break;
        }
 
        //SDL_Rect dstrect = { 5, 5, 320, 240 };
        //SDL_RenderCopy(renderer, texture, NULL, &dstrect);
        SDL_RenderCopy(renderer, texture, NULL, NULL);
        SDL_RenderPresent(renderer);
    }
 
    SDL_DestroyTexture(texture);
    SDL_FreeSurface(image);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
 	//IMG_Quit();
    SDL_Quit();
    system ("color f2");
    string test = "-CELLSTOCK ESTRUCTURA DE DATOS- ";
	thread t2(marquesina, test, test.size());
 	login();
    _getch();
    return 0;
}