#ifndef SCENE_H
#define SCENE_H

#include <SDL2/SDL.h>
#include "constants/constants.h"

class Scene{
    public:
        Scene();
        virtual ~Scene();
        virtual void update(SDL_Renderer * render);
        virtual void render(Uint32 * lastTick) = 0;
        virtual void clear();
        virtual void handleEvents(SDL_Event event, Scene *& curScene) = 0;
};

#endif

