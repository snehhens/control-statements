
#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int reverse=0; // This variable will store the reversed number.
    while(n>0){ // This while loop will run until the number is 0.
        int lastdigit = n%10; // Store last digit
        reverse = reverse*10 + lastdigit; // Reverse number
        n=n/10; // Remove last digir
    }

    cout << reverse << endl;

    return 0;
}
