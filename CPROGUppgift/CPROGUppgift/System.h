#ifndef System_h
#define System_h
#include <SDL.h>
#include <SDL_ttf.h>

namespace gameEngine {

    class System
    {
    public:
        System();
        ~System();
        SDL_Renderer* get_renderer() const;
        TTF_Font* get_font() const;
    private:
        SDL_Window* win;
        SDL_Renderer* ren;
        TTF_Font* font;
    };

    extern System system;

}
#endif
