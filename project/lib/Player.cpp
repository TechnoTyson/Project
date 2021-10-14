#include "Player.h"
// #include "Tile.h"
// #include "Property.h"

Player::Player()
{
}

Player::Player(std::string name)
{
    this->name = name;
    position = 0;
    balance = 0;
    gaol_status = false;
    
}

// //Getters
// std::vector<Property> Player::getProperties()
// {
//     return properties;
// }

int Player::getPosition()
{
    return position;
}

std::string Player::getName()
{
    return name;
}

int Player::getBalance()
{
    return balance;
}

bool Player::getGaolStatus()
{
    return gaol_status;
}

//Setters
void Player::setGaolStatus(bool gaol_status)
{
    this->gaol_status = gaol_status;
}

void Player::setBalance(int balance)
{
    this->balance = balance;
}
void Player::setPosition(int position)
{
    this->position = position;
}

//Add a property to player
// void Player::addProperty(Property newProperty)
// {
//     properties.push_back(newProperty);
//     return;
// }