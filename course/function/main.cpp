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
  void duplicate (int& a, int& b, int& c) {
    a*=2;
    b*=2;
    c*=2;
 }

//Inline functions

inline string concatination(const string & a, const string& b) {
  return a + b;
}

// Default values in parameters

int divide (int a, int b=2) {
  int r;
  r = a / b;
  return (r);
}
int factorial (long a) {

  if (a == 1) return a;
  else
  return a * factorial(a -1);
}


void odd (int x); // declare this to give access to the program in main.
void even (int x);
int main () {
  int a=1, b=3, c=7;
  int z;
  int y;
  int i;

  do {
    cout << "The number you want (0 to exit): ";
    cin >> i;
    odd(i);
  }
  while(i != 0);

  z = addition(5, 4);
  y = substraction(5, 4);
  printMessage();
  cout << "Factorial of the number: " << factorial(9) << endl;

  cout << "result add: " << z << endl;
  cout << "result sub: " << y << endl;
  duplicate (a, b, c);
  cout << "a=" << a << ", b=" << b << ", c=" << c << endl;
  cout << divide (12) << '\n';
  cout << divide (20,4) << '\n';
  return 0;// this is optional when you didn't pass it the main function assume it by default;
}

void odd(int a) {
  if ((a % 2 )!= 0)  cout << "The number is odd." << endl;
  else even(a);
}

void even(int a) {
  if ((a % 2) == 0) cout << "The number is even." << endl;
  else odd(a);
}

string concatinate( const string& a, const string& b) {
  return a +b;
  // const make the passed paramater or argument no changed.
}
