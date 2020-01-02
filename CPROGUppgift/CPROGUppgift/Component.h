#ifndef Component_h
#define Component_h
#include <SDL.h>

namespace gameEngine{

class Component{
public:
    virtual ~Component();
    virtual void mouseUp(const SDL_Event& e) {};
    virtual void mouseDown(const SDL_Event& e) {};
    virtual void keyDown(const SDL_Event& e) {};
    virtual void keyUp(const SDL_Event& e) {};
    virtual void draw() const = 0;
    const SDL_Rect& getRect() const {return rect;}
protected:
    Component(int x, int y, int w, int h);

private:
    SDL_Rect rect;
    Component(const Component&) = delete;
    const Component& operator=(const Component&) = delete;

};
}

#endif
