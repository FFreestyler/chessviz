#ifndef BOARD_H_
#define BOARD_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int y_1, y_2, x_1, x_2, k;
void board(char mas[10][10]);
void chess(char mas[10][10]);
int getxy(char a[20], char f1, char f2, int mode);
int chessmovement(int y1, int x1, int y2, int x2, char mas[10][10]);
#endif
