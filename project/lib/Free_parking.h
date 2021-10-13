#include "Player.h"
#include "Tile.h"

class Free_parking: public Tile
{
    //Private variables

    //Public functions
    public:
    //Run function pure virtual
    void run(Player*);
};