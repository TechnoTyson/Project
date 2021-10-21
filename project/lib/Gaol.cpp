#include "Gaol.h"

// Default constructor
Gaol::Gaol(): Tile(-1, "Default")
{
    
}

// virtial function to run actions when space is landed on
void Gaol::run(Player* player)
{
    std::cout << "You've landed on Gaol! Say hi to all the prisoners!" << std::endl;
    return;
}