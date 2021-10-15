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
Player* Property::getOwnership()
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
        std::cout << "This property is currently unowned, would you like to purchase this property?" << std::endl;
    }
    
    //Check if the player wants to buy the Property

}

