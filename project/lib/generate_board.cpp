#include "Tile.h"
#include "Player.h"
#include "Property.h"

std::vector<Tile> generate_board()
{
    std::vector<Tile> board;
    for (int i = 0; i < 40; i++)
    {
        board.push_back(Tile(i, "test_tile"));
    }
    return board;
}