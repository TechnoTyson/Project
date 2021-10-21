#include "Go.h"


Go::Go() : Tile(-1, "Default")

{
    // Setting fund distribution for go to be $200
    fund = 200;

}

//add funds to players balance when go is passed
void Go::pass_go(Player* player)
{

    //Adding funds to player's balance
    player->setBalance(player->getBalance() + fund);

    std::cout << "You've passed go, you will recieve $200" << std::endl;
}

//add funds to players balance when go is landed on
void Go::run(Player* player)
{

    

    // Adding $200 into the player's account
    player->setBalance(player->getBalance() + fund);

    // Outputting text displaying to user when they landed on go
    std::cout<< "You've landed on go, you will now recieve $200!" << std::endl;

}