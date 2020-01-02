#include "GameLoop.h"
#include <SDL.h>
#include "System.h"
namespace gameEngine {

    GameLoop::GameLoop()
    {
    }

    void GameLoop::add(Component* c) {
        components.push_back(c);
    }

    void GameLoop::run() {
        SDL_SetRenderDrawColor(system.get_renderer(), 255, 255, 255, 255);
        bool quit = false;

        while (!quit) {
            SDL_Event event;
            while (SDL_PollEvent(&event)) {
                switch (event.type) {
                case SDL_QUIT: quit = true; break;
                case SDL_MOUSEBUTTONDOWN:
                    for (Component* c : components)
                        c->mouseDown(event);
                    break;
                case SDL_MOUSEBUTTONUP:
                    for (Component* c : components)
                        c->mouseUp(event);
                    break;
                case SDL_KEYDOWN:
                    for (Component* c : components)
                        c->keyDown(event);
                    break;
                case SDL_KEYUP:
                    for (Component* c : components)
                        c->keyUp(event);
                    break;
                }
            }
            SDL_RenderClear(system.get_renderer());
            for (Component* c : components)
                c->draw();
            SDL_RenderPresent(system.get_renderer());

        }

    }

    GameLoop::~GameLoop()
    {
        for (Component* c : components)
            delete c;
    }
}
