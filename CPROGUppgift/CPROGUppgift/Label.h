#ifndef Label_h
#define Label_h
#include "Component.h"
#include <string>
#include <SDL.h>

namespace gameEngine{
    
class Label: public Component{
public:
    static Label* getInstance(int x, int y, int w, int h, std::string txt);
    void draw() const;
    std::string getText() const;
    void setText(std::string txt);
    ~Label();
protected:
    Label(int x, int y, int w, int h, std::string txt);
private:
    std::string text;
    SDL_Texture* texture;
};
}

#endif
