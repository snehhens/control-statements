

#include <iostream>
using namespace std;

int main(){

    int i = 1;
while (i <= 10) {
  int j = 1;
  while (j <= 10) {
    std::cout << i << " * " << j << " = " << i * j << std::endl;
    j++;
  }
  i++;
}

  return 0;
}