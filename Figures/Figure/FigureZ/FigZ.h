#ifndef FIGUREZ_H
#define FIGUREZ_H

#include <SDL2/SDL.h>
#include "Figures/FigureF/Figure.h"

class FigZ: public Figure{
    public:
        FigZ(); //load the blocks of the figure in the constuctor
        //inherit an update method that recieves an event and does things with the figure
        int updateBlocks() override;
        void loadInitialBlocks(bool constructor) override;

};

#endif