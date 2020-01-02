#include "Button.h"
using namespace std;
namespace gameEngine{

Button::Button(int x, int y, int w, int h, string txt ): Component(x, y, w, h), text(txt){
    
}

Button::~Button(){
    
}
}
 
