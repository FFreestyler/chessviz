#define CTEST_MAIN
#include "board.h"
#include <ctest.h>

char mas[10][10];

CTEST(coords, incorrect_mode)
{
    ASSERT_FALSE(chessmovement(-3, 5, 7, 1, mas));
}

CTEST(coords, correct_knight)
{
    ASSERT_TRUE(chessmovement(8, 2, 6, 3, mas));
}

CTEST(coords, incorrect_knight)
{
    ASSERT_FALSE(chessmovement(6, 2, -3, 2, mas));
}

CTEST(coords, correct_paws)
{
    ASSERT_TRUE(chessmovement(7, 1, 6, 1, mas));
}

CTEST(coords, incorrect_paws)
{
    ASSERT_FALSE(chessmovement(2, 4, 5, 4, mas));
}

int main(int argc, const char** argv)
{
    board(mas);
    return ctest_main(argc, argv);
}
