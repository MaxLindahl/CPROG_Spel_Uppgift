#include "Label.h"
#include <SDL_ttf.h>
#include "System.h"
#include <string>

using namespace std;
namespace gameEngine{

Label* Label::getInstance(int x, int y, int w, int h, std::string txt){
    return new Label(x,y,w,h,txt);
}

    
Label::Label(int x, int y, int w, int h, std::string txt): Component(x, y, w, h), text(txt)
{
    SDL_Surface* surface = TTF_RenderText_Solid(system.get_font(), text.c_str(), {255,0,255});
    texture = SDL_CreateTextureFromSurface(system.get_renderer(), surface);
    SDL_FreeSurface(surface);
}

void Label::draw() const{
    SDL_RenderCopy(system.get_renderer(), texture, NULL, &getRect());
}

Label::~Label()
{
    SDL_DestroyTexture(texture);
}
string Label::getText() const{
    return text;
}
void Label::setText(string newText){
    text = newText;
    SDL_DestroyTexture(texture);
    SDL_Surface* surface = TTF_RenderText_Solid(system.get_font(), text.c_str(),{255,0,255});
    texture = SDL_CreateTextureFromSurface(system.get_renderer(), surface);
    SDL_FreeSurface(surface);
}
}

