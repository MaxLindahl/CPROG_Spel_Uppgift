#include "System.h"
#include <SDL.h>
#include <stdexcept>
using namespace std;

namespace gameEngine {

    System::System()
    {
        SDL_Init(SDL_INIT_EVERYTHING);
        win = SDL_CreateWindow("GameEngine", 100, 100, 800, 600, 0);
        ren = SDL_CreateRenderer(win, -1, 0);
        TTF_Init();
        font = TTF_OpenFont("/System/Library/Fonts/Supplemental/arial black.ttf", 36);
    }

    SDL_Renderer* System::get_renderer() const {
        return ren;
    }

    TTF_Font* System::get_font() const {
        return font;
    }

    System::~System()
    {
        TTF_CloseFont(font);
        TTF_Quit();
        SDL_DestroyWindow(win);
        SDL_DestroyRenderer(ren);
        SDL_Quit();
    }

    System system;

}

