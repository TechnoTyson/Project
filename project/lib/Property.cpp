#include "Property.h"

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

//Run function
// void Property::run()
// {
//     std::cout << "You've landed on " << name << "." << std::endl;
// }

