#include "Tile.h"
#include "Player.h"
#include "Property.h"
#include "Go.h"
#include "Chance.h"
#include "Go_to_gaol.h"
#include "Tax.h"

std::vector<Tile> generate_board()
{
    //Create vector of tiles
    std::vector<Tile> board;
    //Put 40 tiles in vector
    //Change values for tile one
    Property tile1 = Property(100, "BROWN", 5);
    board.push_back(tile1);

    return board;
}