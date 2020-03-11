#include <cstdlib>
#include <iostream>
using namespace std;

int main()

{
    // std::ofstream cout;
    // cout.open("chess.txt");
    setlocale(LC_ALL, "Rus");
    int i, j;
    cout << "Chessboard:\n"
         << "\n";
    for (i = 0; i <= 8; i++) {
        for (j = 0; j <= 16; j++) {
            if (i == 0) {
                if (j == 1)
                    cout << "r";
                if (j == 2)
                    cout << "n";
                if (j == 3)
                    cout << "b";
                if (j == 4)
                    cout << "q";
                if (j == 5)
                    cout << "k";
                if (j == 6)
                    cout << "b";
                if (j == 7)
                    cout << "n";
                if (j == 8)
                    cout << "r";
                if (j == 0)
                    cout << "8";
            }
            if (i == 1) {
                if (j == 1)
                    cout << "p";
                if (j == 2)
                    cout << "p";
                if (j == 3)
                    cout << "p";
                if (j == 4)
                    cout << "p";
                if (j == 5)
                    cout << "p";
                if (j == 6)
                    cout << "p";
                if (j == 7)
                    cout << "p";
                if (j == 8)
                    cout << "p";
                if (j == 0)
                    cout << "7";
            }
            if (i == 6) {
                if (j == 1)
                    cout << "P";
                if (j == 2)
                    cout << "P";
                if (j == 3)
                    cout << "P";
                if (j == 4)
                    cout << "P";
                if (j == 5)
                    cout << "P";
                if (j == 6)
                    cout << "P";
                if (j == 7)
                    cout << "P";
                if (j == 8)
                    cout << "P";
                if (j == 0)
                    cout << "2";
            }

            if (i == 7) {
                if (j == 1)
                    cout << "R";
                if (j == 2)
                    cout << "N";
                if (j == 3)
                    cout << "B";
                if (j == 4)
                    cout << "Q";
                if (j == 5)
                    cout << "K";
                if (j == 6)
                    cout << "B";
                if (j == 7)
                    cout << "N";
                if (j == 8)
                    cout << "R";
                if (j == 0)
                    cout << "1";
            }
            if (i == 8) {
                if (j == 0)
                    cout << " ";
                if (j == 1)
                    cout << "a";
                if (j == 2)
                    cout << "b";
                if (j == 3)
                    cout << "c";
                if (j == 4)
                    cout << "d";
                if (j == 5)
                    cout << "e";
                if (j == 6)
                    cout << "f";
                if (j == 7)
                    cout << "g";
                if (j == 8)
                    cout << "h";
            }
            if (i == 2) {
                if (j == 0)
                    cout << "6";
            }

            if (i == 3) {
                if (j == 0)
                    cout << "5";
            }

            if (i == 4) {
                if (j == 0)
                    cout << "4";
            }

            if (i == 5) {
                if (j == 0)
                    cout << "3";
            }

            if (i % 2 == 1)
                if (j % 2 == 1)
                    cout << "  ";
                else
                    cout << "  ";
            else if (j % 2 == 1)
                cout << "  ";

            else
                cout << "  ";
        }
        cout << endl;
    }
    // cout.close();
    return 0;
}

