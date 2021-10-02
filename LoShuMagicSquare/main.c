#include <stdio.h>
#include "magicSquare.h"

int main(){
    // Working Lo Shu Magic Square
    int magicSquare1 [3][3] = {
    {4, 9, 2},
    {3, 5, 7},
    {8, 1, 6} 
    };

    // Invalid Magic Square
    int square2 [3][3] = {
        {2, 9, 5},
        {3, 4, 7},
        {8, 6, 1} 
    };

    //sprintf("The int is %d", magicSquare[2][1]);
    //checkAll(magicSquare1);
    printf("Testing magicSquare1. This should result in a valid Lo Shu Magic Square.\n");
    checkAll(magicSquare1);
    printf("Testing magicSquare2. This should not be a valid Lo Shu Magic Square.\n");
    checkAll(square2);

    return 0;
}