#ifndef Session_h
#define Session_h
#include <vector>
#include "Component.h"
namespace gameEngine {

    class GameLoop
    {
    public:
        GameLoop();
        void add(Component*);
        void run();
        ~GameLoop();
    private:
        std::vector<Component*> components;
    };

}
#endif
