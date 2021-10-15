#pragma once
#include "Player.h"
#include "Tile.h"

class Gaol: public Tile
{
    //Private variables

    //Public functions
    public:
    //Constructor
    Gaol();
    //Run function pure virtual
    void run(Player*) override;
};