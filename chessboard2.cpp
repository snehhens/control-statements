#include <iostream>

using namespace std;

int main() {
  
  char chessboard[8][8];

  // the chessboard with empty spaces.
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      chessboard[i][j] = '-';
    }
  }

  // chessboard with black and white spaces
    chessboard[0][0] = 'w';
    chessboard[1][0] = 'w';

    chessboard[0][1] = 'w';
    chessboard[1][1] = 'w';
    

    chessboard[0][2] = 'w';
    chessboard[1][2] = 'w';
    

    chessboard[0][3] = 'w';
    chessboard[1][3] = 'w';
  
    chessboard[0][4] = 'w';
    chessboard[1][4] = 'w';

    chessboard[0][5] = 'w';
    chessboard[1][5] = 'w';



    
    
   

   

    
    


  // Print the chessboard.
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      cout << chessboard[i][j]<< "\t" ;
    }
    cout << endl;
  }

  return 0;
}
