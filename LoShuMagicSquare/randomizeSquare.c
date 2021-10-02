#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int randomizedSquare[3][3];
int rows;
int columns;
int random, i;
int numberRange[9], m=0;
int t;
int j;

void fillArray(){
    for(i = 0; i<9; i++){
        numberRange[i] = i + 1;
    }
}

void shuffle(){
    for(i=0; i<9; i++){
        srand((unsigned)time(NULL));
        j = rand() % 9;
        t = numberRange[j];
        numberRange[j] = numberRange[i];
        numberRange[i] = t;
    }
}

void populateArray(){
    for(rows = 0; rows<3; rows++){
            for(columns=0;columns<3;columns++){
            randomizedSquare[rows][columns] = numberRange[m++];
            printf("%d", randomizedSquare[rows][columns]);
        }
    }
    printf("\n");
}

void randomizeSquare(){
    fillArray();
    shuffle();
    populateArray();
}


/*int main(){
    fillArray();
    shuffle();
    populateArray();
}*/
