#include <iostream>
#include <iomanip>// iomanip: This header file stands for "input-output manipulation". It provides tools to format input and output. 

using namespace std;
int main() {
  double pi = 3.1444433333;
  int num;
  cout << "Enter a number: ";
  cin >> num;

  cout << "This is the number: " << num << "\n";
  cout << fixed << setprecision(5) << "value of PI is: " << pi << endl;
    return 0;
}

/*
 A variable that stores the memory address of another variable is known as a pointer
*/