#pragma once
#include <vector>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "Tile.h"
#include "Player.h"
#include "Property.h"
#include "Chance.h"
#include "Free_parking.h"
#include "Gaol.h"
#include "Go_to_gaol.h"
#include "Go.h"

//function to generate board
std::vector<Tile*> generate_board();

//function to run dice
int dice();

//function to convert inputs to uppercase
std::string uppercase (std::string);
