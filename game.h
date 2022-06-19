#include <stdlib.h>

#define MAX_NAME_LEN 128 // de preferencia numeros magicos em potencia de 2

#define SQUARES_NUM 3

typedef struct game{
    unsigned int gameType;
    unsigned int ply1Won;
    unsigned int ply2Won;
    char ply1[MAX_NAME_LEN];
    char ply2[MAX_NAME_LEN];
    unsigned int winner;
    unsigned int plyr;
    unsigned int playsCounter;
    unsigned int rows;
    unsigned int cols;
    char squares[SQUARES_NUM][SQUARES_NUM];
} gameStats;
