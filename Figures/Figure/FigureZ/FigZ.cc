#include "FigZ.h"

FigZ::FigZ(){
    //we need to make the figure relative to the leading block so that when it changes, the whole figure also changes
    this->setColor(LIGHT_GREEN);
    this->setType("Z");

    loadInitialBlocks(true);
}

int FigZ::updateBlocks(){
    //We assume that the figure position is changeable beacuse we cheched it outside
    this->deleteAllBlocks();

    loadInitialBlocks(false);   
    
    return 0;
}

void FigZ::loadInitialBlocks(bool constructor){
    Block block;
    block.setBlockColor(LIGHT_GREEN);
    block.setOutlineColor(GREEN);

    if(constructor){
        block.setPlaced(true);
    
        //Leading block. The position is not always 0,0 (if we cast it on the upper left corner)
        block.setBlockX(1);
        block.setBlockY(0);
        getBlocks().push_back(block);
    }

    int LeadingBlockX = getBlocks()[getLeadingBlockPos()].getBlockX();
    int LeadingBlockY = getBlocks()[getLeadingBlockPos()].getBlockY();

    //Block 1
    block.setBlockX(LeadingBlockX);
    block.setBlockY(LeadingBlockY + 1);
    getBlocks().push_back(block);

    //Block 2
    block.setBlockX(LeadingBlockX + 1);
    block.setBlockY(LeadingBlockY);
    getBlocks().push_back(block);

    //Block 3
    block.setBlockX(LeadingBlockX - 1);
    block.setBlockY(LeadingBlockY + 1);
    getBlocks().push_back(block);
}