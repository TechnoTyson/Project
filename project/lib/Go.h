#pragma once

#include "Tile.h"
#include "Player.h"
class Player;


class Go: public Tile{

    //Private Variables
    int fund = 200;

    public:

        Go();
        void add_funds(Player* player);  









};
