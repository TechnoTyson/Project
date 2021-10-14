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

std::vector<Tile*> generate_board();
int dice();
