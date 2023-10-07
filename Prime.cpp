
#include <iostream>

using namespace std;

int main() {
  
  int n;
  cout << "Enter number : " << endl;
  cin >> n;

  for(int i=2;i<n;i++){
    if(n%i==0){
        cout << "non-prime" << endl;
        break;
    }
    else{
        cout << "prime" << endl;
    }
  }

  return 0;

}