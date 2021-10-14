#pragma once
#include <string>
// #include "Property.h"
// class Property;

class Player
{
    //Private variables
    int position;
    std::string name;
    int balance;
    // std::vector<Property> properties;
    bool gaol_status;
    public:
    //Public function
    Player(); //Default Constructor
    Player(std::string); //Constructor

    //Getters
    // std::vector<Property> getProperties();
    int getPosition();
    std::string getName();
    int getBalance();
    bool getGaolStatus();

    //Setters
    void setGaolStatus(bool);
    void setBalance(int);
    void setPosition(int);

    //Add a property to player
    // void addProperty(Property);
};