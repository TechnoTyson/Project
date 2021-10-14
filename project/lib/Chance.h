#pragma once
#include "Player.h"
#include "Tile.h"

class Chance: public Tile
{
    //Private variables

    //Public functions
    public:
    //Contrustor
    Chance();
    //Run function pure virtual
    void run(Player*);
};