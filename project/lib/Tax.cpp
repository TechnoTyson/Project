#include "Tax.h"

Tax::Tax(int cost) : Tile(-1, "Default")
{
    this->cost = cost;
}

void Tax::run(Player* player)
{
    std::cout << player->getName() << ". You have landed on Income Tax ;(" << std::endl;
    std::cout << "$" << cost << " will be deducted from your account. " << std::endl;
    if (cost < player->getBalance())
    {
        player->setBalance(player->getBalance()-cost);
        std::cout << "Money successfully deducted from your account." << std::endl;
        std::cout << "You now have $" << player->getBalance() << " in your account." << std::endl;
        return;
    }
    else
    {
        std::cout << "Insufficient funds, you have been elimenated" << std::endl;
        return;
    }
}