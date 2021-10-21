#pragma once
#include <string>
#include "Tile.h"
class Tile;

class Player
{
    //Private variables
    int position;
    std::string name;
    int balance;
    Tile* properties[30];
    int properties_length;
    bool gaol_status;
    public:
    //Public function
    Player(); //Default Constructor
    Player(std::string); //Constructor

    //Getters
    int getPosition();
    std::string getName();
    int getBalance();
    bool getGaolStatus();

    //Setters
    void setGaolStatus(bool);
    void setBalance(int);
    void setPosition(int);

    //Add a property to player
    void addProperty(Tile*);

    //Output players properties
    void outputProperties();
};