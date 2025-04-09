#ifndef LOOSESCENE_CC
#define LOOSESCENE_CC

#include "LooseScene.h"

//this function is inherited and the normal case is that it doesn't need any further coding. Still, at the moment I'm gonna call the father method from the child one in case 
//I need to make extra implementations
void LooseScene::update(SDL_Renderer * render){
    Scene::update(render);
    //I'll probably place something here hehe
}

void LooseScene::render(){
    //All the implementation of the scene is going here. 
}

void LooseScene::clear(SDL_Renderer * render){
    Scene::clear(render);
    //""
}

#endif