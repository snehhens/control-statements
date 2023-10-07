
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  
  int n;
  cout << "Enter number : " << endl;
  cin >> n;

  bool prime=0;

  for(int i=2;i<sqrt(n);i++){
    if(n%i==0){
        cout << "non-prime" << endl;
        prime=1;
        break;
    }
  }

  if(prime==0){
    cout << "prime" << endl;
  }

  return 0;

}