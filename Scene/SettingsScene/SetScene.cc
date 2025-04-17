#ifndef SETSCENE_CC
#define SETSCENE_CC

#include "SetScene.h"
#include <iostream>

SetScene::~SetScene(){

}


//this function is inherited and the normal case is that it doesn't need any further coding. Still, at the moment I'm gonna call the father method from the child one in case 
//I need to make extra implementations
SetScene::SetScene(){

}

void SetScene::update(SDL_Renderer * render){

}

void SetScene::render(Uint32 * lastTick){
}

void SetScene::clear(){
    Scene::clear();
}

void SetScene::handleEvents(SDL_Event event, Scene *& curScene){
}


#endif