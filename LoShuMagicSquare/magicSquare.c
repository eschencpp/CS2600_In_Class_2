#include <stdio.h>
#include "magicSquare.h"

//Create array [Row][Column]
int magicSquare [3][3];


int checkRows(int magicSquare[3][3]){
    int sumRow; // magicSquare[0][0] + magicSquare[0][1] + magicSquare[0][2];
    int *ptrSumRow = &sumRow;
    for(int i = 0; i < 3; i++){
        if((*ptrSumRow % 15) != 0 && i > 0){
            //printf("It is not a magic square at row %d \n", i);
            return 1;
        } 
        *ptrSumRow = 0;
        for(int j = 0; j < 3; j++){
            sumRow += magicSquare[i][j];
        }
    }
    if((*ptrSumRow % 15) != 0){
        //printf("It is not a magic square at row 3 \n");
        return 1;
    }
    return 0;
}

int checkColumns(int magicSquare[3][3]){
    int sumColumn; // magicSquare[0][0] + magicSquare[0][1] + magicSquare[0][2];
    int *ptrSumColumn = &sumColumn;
    for(int i = 0; i < 3; i++){
        if((*ptrSumColumn % 15) != 0){
            //printf("Is not a magic square at column %d \n", i);
            return 1;
        } 
        *ptrSumColumn = 0;
        for(int j = 0; j < 3; j++){
            sumColumn += magicSquare[j][i];
        }
    }
    if((*ptrSumColumn % 15) != 0){
        //printf("Is not a magic square at Column 3 \n");
        return 1;
    }
    return 0;
}

int checkDiagonal(int magicSquare[3][3]){
    int sumDiagonal1 = 0; // magicSquare[0][0] + magicSquare[1][1] + magicSquare[2][2];
    int *ptrSumDiagonal1 = &sumDiagonal1;
    int column = 0;
    for(int row = 0; row<3; row++){
        *ptrSumDiagonal1 += magicSquare[row][column];
        column++;
    }
    if(*ptrSumDiagonal1 != 15){
        //printf("The square is not a Lo Shu Magic Square. \n");
        return 1;
    }
    return 0;
}

int checkDiagonal2(int magicSquare[3][3]){
    int sumDiagonal2 = 0; // magicSquare[2][0] + magicSquare[1][1] + magicSquare[0][2];
    int *ptrSumDiagonal2 = &sumDiagonal2;
    int column = 0;
    for(int row = 2; row>=0; row--){
        *ptrSumDiagonal2 += magicSquare[row][column];
        column++;
    }
    if(*ptrSumDiagonal2 != 15){
        //printf("The square is not a Lo Shu Magic Square. Diagonal2 \n");
        return 1;
    }
    return 0;
}

int checkAll(int magicSquare[3][3]){
    int statusRows = checkRows(magicSquare);
    int statusColumns = checkColumns(magicSquare);
    int statusDiagonal = checkDiagonal(magicSquare);
    int statusDiagonal2 = checkDiagonal2(magicSquare);
    if(statusRows > 0 || statusColumns > 0 || statusDiagonal > 0 || statusDiagonal2 > 0){
        printf("This is not a lo shu magic square\n");
    }
    if(statusRows == 0 && statusColumns == 0 && statusDiagonal == 0 && statusDiagonal2 ==0 ){
        printf("This is a lo shu magic square. \n");
    }
}

/*int main(){
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
}*/