#include "Go_to_gaol.h"

Go_to_gaol::Go_to_gaol(): Tile(-1, "Default")
{

}

void Go_to_gaol::run(Player* player)
{
    std::cout << "Ouch, the police finally caught up with you. Looks like your back to gaol" << std::endl;
    player->setPosition(11);
    return;
}