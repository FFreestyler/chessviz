#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void board(char mas[10][10])
{
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++)
            mas[i][j] = ' ';
    }
    for (int i = 1; i < 9; ++i) {
        mas[0][i] = (char)((int)'a' + (i - 1));
        mas[9][i] = (char)((int)'a' + (i - 1));
        mas[i][0] = (char)((int)'1' + (i - 1));
        mas[i][9] = (char)((int)'1' + (i - 1));
        mas[2][i] = 'p';
        mas[7][i] = 'P';
    }

    mas[1][1] = 'r';
    mas[1][2] = 'n';
    mas[1][3] = 'b';
    mas[1][4] = 'q';
    mas[1][5] = 'k';
    mas[1][6] = 'b';
    mas[1][7] = 'n';
    mas[1][8] = 'r';

    mas[8][1] = 'R';
    mas[8][2] = 'N';
    mas[8][3] = 'B';
    mas[8][4] = 'Q';
    mas[8][5] = 'K';
    mas[8][6] = 'B';
    mas[8][7] = 'N';
    mas[8][8] = 'R';
}

int main()
{
    char mas[10][10];
    board(mas);
}
