#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

int main()

{
  std::ofstream out;
  out.open("chess.txt");
  setlocale(LC_ALL, "Rus");
  int i, j;
  cout << "Chessboard:\n"
       << "\n";
  for (i = 0; i <= 8; i++) {
    for (j = 0; j <= 16; j++) {
      if (i == 0) {
        if (j == 1)
          fout << "r";
        if (j == 2)
          fout << "n";
        if (j == 3)
          fout << "b";
        if (j == 4)
          fout << "q";
        if (j == 5)
          fout << "k";
        if (j == 6)
          fout << "b";
        if (j == 7)
          fout << "n";
        if (j == 8)
          fout << "r";
        if (j == 0)
          fout << "8";
      }
      if (i == 1) {
        if (j == 1)
          fout << "p";
        if (j == 2)
          fout << "p";
        if (j == 3)
          fout << "p";
        if (j == 4)
          fout << "p";
        if (j == 5)
          fout << "p";
        if (j == 6)
          fout << "p";
        if (j == 7)
          fout << "p";
        if (j == 8)
          fout << "p";
        if (j == 0)
          fout << "7";
      }
      if (i == 6) {
        if (j == 1)
          fout << "P";
        if (j == 2)
          fout << "P";
        if (j == 3)
          fout << "P";
        if (j == 4)
          fout << "P";
        if (j == 5)
          fout << "P";
        if (j == 6)
          fout << "P";
        if (j == 7)
          fout << "P";
        if (j == 8)
          fout << "P";
        if (j == 0)
          fout << "2";
      }

      if (i == 7) {
        if (j == 1)
          fout << "R";
        if (j == 2)
          fout << "N";
        if (j == 3)
          fout << "B";
        if (j == 4)
          fout << "Q";
        if (j == 5)
          fout << "K";
        if (j == 6)
          fout << "B";
        if (j == 7)
          fout << "N";
        if (j == 8)
          fout << "R";
        if (j == 0)
          fout << "1";
      }
      if (i == 8) {
        if (j == 0)
          fout << " ";
        if (j == 1)
          fout << "a";
        if (j == 2)
          fout << "b";
        if (j == 3)
          fout << "c";
        if (j == 4)
          fout << "d";
        if (j == 5)
          fout << "e";
        if (j == 6)
          fout << "f";
        if (j == 7)
          fout << "g";
        if (j == 8)
          fout << "h";
      }
      if (i == 2) {
        if (j == 0)
          fout << "6";
      }

      if (i == 3) {
        if (j == 0)
          fout << "5";
      }

      if (i == 4) {
        if (j == 0)
          fout << "4";
      }

      if (i == 5) {
        if (j == 0)
          fout << "3";
      }

      if (i % 2 == 1)
        if (j % 2 == 1)
          fout << "  ";
        else
          fout << "  ";
      else if (j % 2 == 1)
        fout << "  ";

      else
        fout << "  ";
    }
    fout << endl;
  }
  out.close();
  return 0;
}

