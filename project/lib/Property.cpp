#include "Property.h"
#include "Player.h"
#include "functions.h"
#define YELLOW  "\033[33m" 
#define RESET   "\033[0m" 
#define GREEN   "\033[32m" 
#define RED     "\033[31m"  
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"   

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
    std::cout << BLUE << "Property Purchase" << RESET << std::endl;
    std::cout << "You've landed on " << MAGENTA << name << RESET << "." << std::endl;
    
    //Check if property is owned
    if (getOwnershipStatus() == false)
    {
        //Dispaly option of buying property
        std::cout << "This property is currently unowned, would you like to purchase this property for " << GREEN  << "$" << getPrice() << RESET <<"    (Y/N?)" <<std::endl;
        
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
                std::cout << std::endl;
                std::cout << "Money successfully deducted from your account." << std::endl;
                std::cout << "You now have " << GREEN << "$" << player->getBalance() << RESET << " in your account." << std::endl;
                std::cout << std::endl;
                std::cout << "Congratulations, you are now the owner of " << name << "!!" << std::endl;
                //Change ownership status and set the owner
                setOwnershipStatus(true);
                setOwner(player);
                //Add that property to the owners collection
                player->addProperty(this);
            }
            else
            {
                //No action as not enough funds
                std::cout << RED << "Insufficient funds, you can't buy this property." << RESET << std::endl;
            }
        }
        else if (input == "N")
        {
            std::cout << "Geez, you might have missed out on this one. " << getName() << " is still avaliable for anyone else!" << std::endl;
        }
    }
    //If property is already owned
    else if (ownership_status == true)
    {
        //Case when property is already owned by same player
        if (owner->getName() == player->getName())
        {
            std::cout << BLUE << "Property Owned" << RESET << std::endl;
            std::cout << "Looks like you already own this property, lucky there is no rent to pay" << std::endl;
        }
        else 
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
                std::cout << RED << "Insufficient funds, you have been elimenated" << RESET << std::endl;
            }
        }
    }
    return;
}

