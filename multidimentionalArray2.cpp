#include <iostream>

using namespace std;

int main() {
  // Declare a two-dimensional array of integers to represent a grade book.
  int gradebook[3][5]; // 3 students, 5 classes each

  // input grades for each student
  for (int i = 0; i < 3; i++) {
    cout << "Enter grades for Student " << i + 1  << " (Class 1 to Class 5): ";
    for (int j = 0; j < 5; j++) {
       cin >> gradebook[i][j];
    }
  }

  // Input grades for each student.
  /*for (int i = 0; i < 3; i++) {
    cout << "Enter grades for Student " << i + 1  << " (Class 1 to Class 5): ";
    for (int j = 0; j < 5; j++) {
      cin >> gradebook[i][j];
    }
  }*/

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
