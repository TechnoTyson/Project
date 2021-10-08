#pragma once
#include "Tile.h"

class Property : public Tile
{
    //Private variables
    int price;
    std::string colour;
    int rent;
    bool ownership_status;

    public:
    //Public Functions
    Property(int, std::string, int);

    //Setters
    void setPrice(int);
    void setRent(int);
    void setOwnershipStatus(bool);
    //Getters
    int getPrice();
    int getRent();
    bool getOwnershipStatus();

    //Run funtion
};