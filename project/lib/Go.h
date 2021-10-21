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
<<<<<<< HEAD
};
=======
};
>>>>>>> 3d3ade2850de65b7018dffd3086ced276660d833
