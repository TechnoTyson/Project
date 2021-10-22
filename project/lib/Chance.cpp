#include "Chance.h"
#define RESET   "\033[0m"
#define BLUE    "\033[34m"

Chance::Chance(): Tile(-1, "Default")
{

}

void Chance::run(Player* player)
{

    std::cout << BLUE << "Chance" << RESET << std::endl;
    std::cout << "You've landed on Chance! we haven't implemented chance cards yet so looks you're watiting for your next turn." << std::endl;
    return;
}