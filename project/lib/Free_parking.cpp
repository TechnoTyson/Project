#include "Free_parking.h"

// Default constructor
Free_parking::Free_parking(): Tile(-1, "Default")
{
    
}

// Virtual function outputting reaction when tile is laned on
void Free_parking::run(Player* player)
{
    std::cout << "You've landed on free parking! looks like you're just waiting for your next turn." << std::endl;
    return;
}
