#include "Gaol.h"
#include "Chance.h"
#define RESET   "\033[0m"
#define BLUE    "\033[34m"

// Default constructor
Gaol::Gaol(): Tile(-1, "Default")
{
    
}

// virtial function to run actions when space is landed on
void Gaol::run(Player* player)
{
    std::cout << BLUE << "Passing Gaol" << RESET << std::endl;
    std::cout << "You've landed on Gaol! Say hi to all the prisoners!" << std::endl;
    return;
}