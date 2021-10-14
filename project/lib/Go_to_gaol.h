#pragma once
#include "Player.h"
#include "Tile.h"

class Go_to_gaol: public Tile
{
    //Private variables

    //Public functions
    public:
    //Contrustor
    Go_to_gaol();
    //Run function pure virtual
    void run(Player*);
};