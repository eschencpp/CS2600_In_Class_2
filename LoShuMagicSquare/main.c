#include <stdio.h>
#include "magicSquare.h"
#include "randomizeSquare.h"
#include <time.h>
#include <stdlib.h>

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
    printf("The magic square being tested is:\n 4 9 2\n 3 5 7 \n 8 1 6\n");
    checkAll(magicSquare1);
    printf("Testing magicSquare2. This should not be a valid Lo Shu Magic Square.\n");
    printf("The magic square being tested is:\n 2 9 5\n 3 4 7 \n 8 6 1\n");
    checkAll(square2);
    randomizeSquare();
    printf("Testing random Magic Square\n");
    printf("The magic square being tested is:\n %d %d %d\n %d %d %d\n %d %d %d\n",randomizedSquare[0][0],randomizedSquare[0][1],randomizedSquare[0][2],
                                                                                  randomizedSquare[1][0],randomizedSquare[1][1],randomizedSquare[1][2],
                                                                                  randomizedSquare[2][0],randomizedSquare[2][1],randomizedSquare[2][2]);
    checkAll(randomizedSquare);
    return 0;
}