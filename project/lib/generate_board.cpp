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
    //Change values for tile one the Go tile
    Go *tile1 = new Go();
    tile1->setLocation(1);
    tile1->setName("Go");
    //Add tile to vector
    board.push_back(*tile1);
    //Free memory 
    delete tile1;

    //Tile 2
    Property *tile2 = new Property(60, "Brown", 2);
    tile2->setLocation(2);
    tile2->setName("Pale Ale");
    board.push_back(*tile2);
    delete tile2;
    
    //Tile3
    Chance *tile3 = new Chance();
    tile3->setLocation(3);
    tile3->setName("Chance 1");
    board.push_back(*tile3);
    delete tile3;

    //Tile 4
    Property *tile4 = new Property(60, "Brown", 4);
    tile4->setLocation(2);
    tile4->setName("Larger");
    board.push_back(*tile4);
    delete tile4;

    //Tile 5
    Tax *tile5 = new Tax(200);
    tile5->setLocation(5);
    tile5->setName("Capital Gains Tax");
    board.push_back(*tile5);
    delete tile5;

    //Tile 6


    return board;
}