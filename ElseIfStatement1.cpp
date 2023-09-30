
#include <iostream>
using namespace std;

int main(){

int grade = 69;
if (grade >= 90) {
  std::cout << "The student received an A." << std::endl;
} else if (grade >= 80) {
  std::cout << "The student received a B." << std::endl;
} else if (grade >= 70) {
  std::cout << "The student received a C." << std::endl;
} else if (grade >= 60) {
  std::cout << "The student received a D." << std::endl;
} else {
  std::cout << "The student received an F." << std::endl;
}

  return 0;
}

/*
#include <iostream>

using namespace std;

int main(){

int grade;
cout << "enter grade of student : " << endl;
cin >> grade;
if (grade >= 90) {
  std::cout << "The student received an A." << std::endl;
} else if (grade >= 80) {
  std::cout << "The student received a B." << std::endl;
} else if (grade >= 70) {
  std::cout << "The student received a C." << std::endl;
} else if (grade >= 60) {
  std::cout << "The student received a D." << std::endl;
} else {
  std::cout << "The student received an F." << std::endl;
}

  return 0;
}*/