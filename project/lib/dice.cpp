#include <ctime>
#include <cstdlib>

int dice()
{
    //Generate two die
    int die1, die2, sum;
    //Randomise numbers
    srand(time(NULL));

    die1 = rand() % 6;
    die2 = rand() % 6;

    sum = die1 + die2;
    return sum;
}
