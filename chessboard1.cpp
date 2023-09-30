#include <iostream>

using namespace std;

int main() {
  // Declare a two-dimensional array of characters to represent the chessboard.
  char chessboard[8][8];

  // Initialize the chessboard with empty spaces.
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      chessboard[i][j] = '-';
    }
  }

  // Place a white pawn on the square e4.
  chessboard[1][4] = 'w';
  chessboard[6][4] = 'b';

  // Print the chessboard.
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      cout << chessboard[i][j];
    }
    cout << endl;
  }

  return 0;
}
