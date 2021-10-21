#include "Property.h"
#include "Player.h"
#include "functions.h"

Property::Property(int price, std::string colour, int rent) : Tile(-1, "Default")
{
    this->price = price;
    this->colour = colour;
    this->rent = rent;
    ownership_status = false;
}

//Setters
void Property::setPrice(int price)
{
    this->price = price;
    return;
}
void Property::setRent(int rent)
{
    this->rent = rent;
    return;
}
void Property::setOwnershipStatus(bool ownership_status)
{
    this->ownership_status = ownership_status;
    return;
}
void Property::setOwner(Player* owner)
{
    this->owner = owner;    
}

//Getters
int Property::getPrice()
{
    return price;
}
int Property::getRent()
{
    return rent;
}
bool Property::getOwnershipStatus()
{
    return ownership_status;
}
Player* Property::getOwner()
{
    return owner;
}

void Property::run(Player* player)
{
    //Announce what the player has landed on
    std::cout << "You've landed on " << name << "." << std::endl;
    
    //Check if property is owned
    if (getOwnershipStatus() == false)
    {
        //Dispaly option of buying property
        std::cout << "This property is currently unowned, would you like to purchase this property for $" << getPrice() << "    (Y/N?)" << std::endl;
        //Setup variable for input
        std::string input;
        //Check that input is valid
        do
        {
            //Get input
            std::cin >> input;
            //Convert to uppercase
            input = uppercase(input);
        }
        while (input != "Y" && input != "N");
        if (input == "Y")
        {
            //Check player can afford property
            if (price < player->getBalance())
            {
                //Take money out of account and output stuff
                player->setBalance(player->getBalance()-price);
                std::cout << "Money successfully deducted from your account." << std::endl;
                std::cout << "You now have $" << player->getBalance() << " in your account." << std::endl;
                std::cout << "Congratulations, you are now the owner of " << name << "!!" << std::endl;
                //Change ownership status and set the owner
                setOwnershipStatus(true);
                setOwner(player);
            }
            else
            {
                //No action as not enough funds
                std::cout << "Insufficient funds, you can't buy this property." << std::endl;
            }
        }
        else if (input == "N")
        {
            std::cout << "Geez, you might have missed out on this one. " << getName() << " is still avaliable for anyone else!" << std::endl;
        }
    }
    //If property is already owned
    else if (getOwnershipStatus() == true)
    {
        std::cout << "Looks like " << owner->getName() << " already owns this property." << std::endl;
        std::cout << "You owe them $" << getRent() << " :(" << std::endl;
        //Pay the rent
        if (rent < player->getBalance())
        {
            player->setBalance(player->getBalance()-rent);
            std::cout << "Money successfully deducted from your account." << std::endl;
            std::cout << "You now have $" << player->getBalance() << " in your account." << std::endl;
        }
        else
        {
            std::cout << "Insufficient funds, you have been elimenated" << std::endl;
        }
        return;
    }

}

