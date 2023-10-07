

#include <iostream>
#include <string>

int main() {
    std::string password;

    std::cout << "Enter a password: ";
    std::cin >> password;

    if (password.length() % 2 == 0) {
        std::cout << "Password is strong." << std::endl;
    } else {
        std::cout << "Password is weak." << std::endl;
    }

    return 0;
}


  