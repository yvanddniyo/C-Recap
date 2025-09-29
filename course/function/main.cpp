#include <iostream>

using namespace std;

int addition (int a, int b) {
  int r;
  r=a+b;
  return r;
}
int substraction(int a, int b) {
  int r;
  r = a - b;
  return r;
}

//Void function

void printMessage() {
  cout << "I'm a function" << endl;
}

// Arguments passed by value and by reference


int main () {
  int z;
  int y;
  z = addition(5, 4);
  y = substraction(5, 4);
  printMessage();
  cout << "result add: " << z << endl;
  cout << "result sub: " << y << endl;
  return 0;// this is optional when you didn't pass it the main function assume it by default;
}


