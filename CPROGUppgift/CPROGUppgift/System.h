#ifndef System_h
#define System_h

#ifdef __APPLE__
    #include <SDL2/SDL.h>
    #include <SDL2/SDL_ttf.h>
#elif defined _WIN32 || defined _WIN64
    #include <SDL.h>
    #include <SDL_ttf.h>
#endif

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
