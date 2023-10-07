// Fibonacci Series 
// The series starts with 0, 1, 1, 2, 3, and so on.

#include <iostream>

using namespace std;

int main(){

    int num, first=0, second=1, next;

    cout << "Enter the number of terms to be printed in fibonacci series : ";
    cin >> num; // 5

    cout << "Fibonacci Series" << endl;
    for(int i=0; i<num; i++){
        cout << first << endl; // 0       // 1         // 1
        next = first + second; // 0 + 1   // 1 + 1 =2  // 1 + 2 = 3
        first = second;        // 1       // 1         // 2
        second = next;         // 1       // 2         // 3
    }

    return 0;
}