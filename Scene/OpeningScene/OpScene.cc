#ifndef OPSCENE_CC
#define OPSCENE_CC

#include "OpScene.h"

//this function is inherited and the normal case is that it doesn't need any further coding. Still, at the moment I'm gonna call the father method from the child one in case 
//I need to make extra implementations
void OpScene::update(SDL_Renderer * render){
    Scene::update(render);
    //I'll probably place something here hehe
}

void OpScene::render(SDL_Renderer * render){
    //All the implementation of the scene is going here. 
    SDL_SetRenderDrawColor(render, 255, 255, 255, 255);
}

void OpScene::clear(SDL_Renderer * render){
    Scene::clear(render);
    //""
}

#endif