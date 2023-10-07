#include <iostream>

using namespace std;

int main() {
  int divisibleBy;

  cout << "Enter a number to find which numbers from 1 to 100 are divisible by : ";
  cin >> divisibleBy;

// Switch statement checks which number the user entered and executes the appropriate code.
  switch (divisibleBy) {
    case 2: // If the user entered 2, the program will print all even numbers from 1 to 100.
      for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
          cout << i << endl;
        }
      }
      break;
    case 3: // If the user entered 3, the program will print all numbers from 1 to 100 that are divisible by 3.
      for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
          cout << i << endl;
        }
      }
      break;
    case 5: // If the user entered 5, the program will print all numbers from 1 to 100 that are divisible by 5.
      for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0) {
          cout << i << endl;
        }
      }
      break;
    default:
      cout << "Invalid input." << endl;
  }

  return 0;
}
