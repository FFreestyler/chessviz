#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()

{
 	std::ofstream out;
    out.open("chess.txt"); 
	setlocale(LC_ALL, "Rus");
    int i, j;
    cout << "Шахматная доска:\n" << "\n";
    for (i = 0; i <= 8; i++) {
        for (j = 0; j <= 16; j++) {
            if (i == 0) {
                if (j == 1)
                    printf("r");
                if (j == 2)
                    printf("n");
                if (j == 3)
                    printf("b");
                if (j == 4)
                    printf("q");
                if (j == 5)
                    printf("k");
                if (j == 6)
                    printf("b");
                if (j == 7)
                    printf("n");
                if (j == 8)
                    printf("r");
                if (j == 0)
                    printf("8");
            }
            if (i == 1) {
                if (j == 1)
                    printf("p");
                if (j == 2)
                    printf("p");
                if (j == 3)
                    printf("p");
                if (j == 4)
                    printf("p");
                if (j == 5)
                    printf("p");
                if (j == 6)
                    printf("p");
                if (j == 7)
                    printf("p");
                if (j == 8)
                    printf("p");
                if (j == 0)
                    printf("7");
            }
            if (i == 6) {
                if (j == 1)
                    printf("P");
                if (j == 2)
                    printf("P");
                if (j == 3)
                    printf("P");
                if (j == 4)
                    printf("P");
                if (j == 5)
                    printf("P");
                if (j == 6)
                    printf("P");
                if (j == 7)
                    printf("P");
                if (j == 8)
                    printf("P");
                if (j == 0)
                    printf("2");
            }

            if (i == 7) {
                if (j == 1)
                    printf("R");
                if (j == 2)
                    printf("N");
                if (j == 3)
                    printf("B");
                if (j == 4)
                    printf("Q");
                if (j == 5)
                    printf("K");
                if (j == 6)
                    printf("B");
                if (j == 7)
                    printf("N");
                if (j == 8)
                    printf("R");
                if (j == 0)
                    printf("1");
            }
            if (i == 8) {
                if (j == 0)
                    printf(" ");
                if (j == 1)
                    printf("a");
                if (j == 2)
                    printf("b");
                if (j == 3)
                    printf("c");
                if (j == 4)
                    printf("d");
                if (j == 5)
                    printf("e");
                if (j == 6)
                    printf("f");
                if (j == 7)
                    printf("g");
                if (j == 8)
                    printf("h");
            }
            if (i == 2) {
                if (j == 0)
                    printf("6");
            }

            if (i == 3) {
                if (j == 0)
                    printf("5");
            }

            if (i == 4) {
                if (j == 0)
                    printf("4");
            }

            if (i == 5) {
                if (j == 0)
                    printf("3");
            }

            if (i % 2 == 1)
                if (j % 2 == 1)
                    printf("  ");
                else
                    printf("  ");
            else if (j % 2 == 1)
                printf("  ");

            else
                printf("  ");
        }
        printf("\n");
    }
    out.close();
    return 0;
}

