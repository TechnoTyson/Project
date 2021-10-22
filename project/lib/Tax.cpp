#include "Tax.h"
#define BLUE    "\033[34m"  
#define RESET   "\033[0m"
#define GREEN   "\033[32m" 

// default constructor
Tax::Tax(int cost) : Tile(-1, "Default")
{
    // setting cost as input
    this->cost = cost;
}

void Tax::run(Player* player)
{
    // outputting text displaying fund amount being deducted
    std::cout << BLUE << "Paying Tax" << RESET << std::endl;
    std::cout << player->getName() << ". You have landed on Income Tax ;(" << std::endl;
    std::cout << GREEN << "$" << cost << RESET << " will be deducted from your account. " << std::endl;
    
    // checking if player has enough funds to pay tax
    if (cost < player->getBalance())
    {
        // deducting funds from player's balance
        player->setBalance(player->getBalance()-cost);
        // outputting text
        std::cout << "Money successfully deducted from your account." << std::endl;
        std::cout << "You now have " << GREEN << "$" <<  player->getBalance() << RESET << " in your account." << std::endl;
        return;
    }
    // eliminating player if they don't have enough funds
    else
    {
        std::cout << "Insufficient funds, you have been elimenated" << std::endl;
        return;
    }
}