#include "Gaol.h"

Gaol::Gaol(): Tile(-1, "Default")
{
    
}

void Gaol::run(Player* player)
{
    std::cout << "You've landed on Gaol! Say hi to all the prisoners!" << std::endl;
    return;
}