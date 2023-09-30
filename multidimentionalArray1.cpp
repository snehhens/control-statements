#include <iostream>

using namespace std;

int main() {
  // Declare a two-dimensional array of integers to represent a grade book.
  int gradebook[3][5]; // 3 students, 5 classes each

  // inputs 
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      gradebook[i][j] = 0;
    }
  }

  // first student.
  gradebook[0][0] = 90;
  gradebook[0][1] = 85;
  gradebook[0][2] = 95;
  gradebook[0][3] = 92;
  gradebook[0][4] = 88;

  // second student.
  gradebook[1][0] = 82;
  gradebook[1][1] = 90;
  gradebook[1][2] = 88;
  gradebook[1][3] = 95;
  gradebook[1][4] = 91;

  // third student.
  gradebook[2][0] = 95;
  gradebook[2][1] = 98;
  gradebook[2][2] = 97;
  gradebook[2][3] = 99;
  gradebook[2][4] = 100;

  // Print the gradebook.
  cout << "Student\tClass 1\tClass 2\tClass 3\tClass 4\tClass 5" << endl;
  for (int i = 0; i < 3; i++) {
    cout << i + 1 << "\t";
    for (int j = 0; j < 5; j++) {
      cout << gradebook[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}