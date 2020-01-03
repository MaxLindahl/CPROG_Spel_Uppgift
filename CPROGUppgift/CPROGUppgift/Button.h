#ifndef Button_h
#define Button_h
#include "Component.h"
#include <string>

#ifdef __APPLE__
    #include <SDL2/SDL.h>
#elif defined _WIN32 || defined _WIN64
    #include <SDL.h>
#endif


namespace gameEngine{


class Button : public Component
{
public:
    static Button* getInstance(int x, int y, int w, int h, std::string txt);
    
    ~Button();
protected:
    Button(int x, int y, int w, int h, std::string txt);
private:
    std::string text;
    SDL_Texture* texture;

};
}
#endif
