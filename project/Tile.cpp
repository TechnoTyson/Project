#include "Tile.h"

Tile::Tile(int location, std::string name)
{
    this->name = name;
    this->location = location;
}

void Tile::setName(std::string name)
{
    this -> name = name;
    return;
}

void Tile::setLocation(int location)
{
    this -> location = location;
    return;
}

std::string Tile::getName()
{
    return name;
}

int Tile::getLocation()
{
    return location;
}
