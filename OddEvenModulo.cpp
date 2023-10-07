#include <iostream>

// using namespace std;

int main() {

    // Number is even or odd using modulo

    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (number % 2 == 0) {
        std::cout << "The number is even." << std::endl;
    } else {
        std::cout << "The number is odd." << std::endl;
    }

    return 0;

    
}
