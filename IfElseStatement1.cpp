
#include <iostream>
#include <string>
using namespace std;

int main(){

// Check if a character is a vowel or a consonant.
char character;
cout << "enter character : " << endl;
cin >> character;

if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
  std::cout << "The character is a vowel." << std::endl;
} else {
  std::cout << "The character is a consonant." << std::endl;
}

  return 0;
}