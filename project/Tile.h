#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

class Tile
{
    public:
    int location; //Location of the tile
    std::string name; //Name of the tile

    //Public Functions
    Tile(int, std::string); //Constructor

    void setName(std::string); //Set the name of the tile
    void setLocation(int); //Set the location of the tile

    std::string getName(); //Get the name of the tile
    int getLocation(); //Get the location of the tile

    //virtual void run() const = 0; //Pure virtual function to run when player lands on tile
};