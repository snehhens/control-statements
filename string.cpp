#include <iostream>
#include <string>

int main() {
  std::string my_string = "Hello, world!"; // Using the String class.

  // Print the string.
  std::cout << my_string << std::endl;

  char your_string[] = "hi!, I am Sneh "; // Using a character array.

  std::cout << your_string << std::endl;

  size_t length = my_string.length();

  std::cout << "The length of the string is: " << length << std::endl;

  return 0;
}
