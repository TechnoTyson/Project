#include "Player.h"
#include "Tile.h"

class Tax: public Tile
{
    //Private variables
    int cost;

    //Public functions
    public:
    //Constructor
    Tax(int);
    //Run function pure virtual
    void run(Player*);
};