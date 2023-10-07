#include <iostream>

using namespace std;

int main() {
  float num1, num2;
  char op;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  cout << "Enter an operator (+, -, *, /): ";
  cin >> op;

  float result;
  switch (op) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
      cout << "Invalid operator" << endl;
      return 1;
  }

  cout << "The result is: " << result << endl;

  return 0;
}
