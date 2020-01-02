#ifndef Button_h
#define Button_h
#include "Component.h"
#include <string>
#include <SDL.h>

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
