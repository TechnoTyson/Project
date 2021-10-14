#include "Go.h"


Go::Go() : Tile(-1, "Default")

{

}


void Go::add_funds(Player* player){

    player->setBalance(player->getBalance() + fund);


}
void Go::run(Player* player)
{

}