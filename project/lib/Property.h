#pragma once
#include "Tile.h"
#include "Player.h"
class Player;

class Property : public Tile
{
    //Private variables
    int price;
    std::string colour;
    int rent;
    bool ownership_status;
    Player* owner;
    public:
    //Public Functions
    Property(int, std::string, int);

    //Setters
    void setPrice(int);
    void setRent(int);
    void setOwnershipStatus(bool);
    void setOwner(Player*);
    //Getters
    int getPrice();
    int getRent();
    bool getOwnershipStatus();
    Player* getOwner();
    //Run funtion
    void run(Player*) override;
};