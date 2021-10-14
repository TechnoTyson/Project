#pragma once

#include "Tile.h"
#include "Player.h"

class Go: public Tile
{

    //Private Variables
    int fund = 200;
    //Public Functions
    public:
        void run(Player* player);
        Go();
        void add_funds(Player* player);
};
