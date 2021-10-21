#include "Go_to_gaol.h"

// default constructor
Go_to_gaol::Go_to_gaol(): Tile(-1, "Default")
{

}

// virtual function to run action when space is landed on
void Go_to_gaol::run(Player* player)
{
    std::cout << "Ouch, the police finally caught up with you. Looks like your back to gaol" << std::endl;
    //Change position
    player->setPosition(10);
    //Set gaol status to true
    player->setGaolStatus(true);
    return;
}