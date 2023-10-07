
#include <iostream>
#include <cmath>

using namespace std;

int main(){

  int n;
  cin >> n;

  int total=0;
  int a=n;
  while(n>0){
    int lastdigit = n%10;
    total+= pow(lastdigit,3);
    n=n/10;
  }

  if(total==a){
    cout << "Armstrong number" << endl;
  }
  else{
    cout << "Not an armstrong number" << endl;
  }


}