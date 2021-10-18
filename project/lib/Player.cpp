#include "Player.h"

Player::Player()
{
}

Player::Player(std::string name)
{
    this->name = name;
    position = 0;
    balance = 1500;
    gaol_status = false;
    properties_length = 0;
    
}

//Getters

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
    position = position % 40;
    this->position = position;
}

//Add a property to player
void Player::addProperty(Tile* newProperty)
{
    //Add the property to players array
    properties[properties_length] = newProperty;
    
    //Add length to the array
    properties_length +=1;
    return;
}

//Print out properties
void Player::outputProperties()
{
    std::cout << "You own the following properties:" << std::endl;
    //run loop for length of properties list
    for (int i = 0; i < properties_length; i++)
    {
        //Output each element
        std::cout << properties[i]->getName() << std::endl;
        //Wait half a second
        std::this_thread::sleep_for(std::chrono::microseconds(500));
    }
}