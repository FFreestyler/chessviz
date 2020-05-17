#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "board.h"

void board(char mas[10][10])
{
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++)
            mas[j][i] = ' ';
    }
    for (int i = 1; i < 9; ++i) {
        mas[9][i] = (char)((int)'a' + (i - 1));
        mas[0][i] = (char)((int)'a' + (i - 1));
        mas[i][9] = (char)((int)'1' + (i - 1));
        mas[i][0] = (char)((int)'1' + (i - 1));
        mas[2][i] = 'P';
        mas[7][i] = 'p';
    }

    mas[1][1] = 'R';
    mas[1][2] = 'N';
    mas[1][3] = 'B';
    mas[1][4] = 'Q';
    mas[1][5] = 'K';
    mas[1][6] = 'B';
    mas[1][7] = 'N';
    mas[1][8] = 'R';

    mas[8][1] = 'r';
    mas[8][2] = 'n';
    mas[8][3] = 'b';
    mas[8][4] = 'q';
    mas[8][5] = 'k';
    mas[8][6] = 'b';
    mas[8][7] = 'n';
    mas[8][8] = 'r';
}

