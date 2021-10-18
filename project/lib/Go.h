#pragma once

#include "Tile.h"
#include "Player.h"

class Go: public Tile
{

    //Private Variables
    int fund;
    //Public Functions
    public:
        
        void pass_go(Player* player);
        void run(Player* player) override;
        Go();
};
