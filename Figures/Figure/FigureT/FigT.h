#ifndef FIGURET_H
#define FIGURET_H

#include "Figures/FigureF/Figure.h"

#include <SDL2/SDL.h>

class FigT: public Figure{

    public:

        //CONSTRUCTOR

        FigT();

        
        //MISCELANEOUS
        
        int updateBlocks() override;

        bool loadInitialBlocks(bool constructor) override;

};

#endif