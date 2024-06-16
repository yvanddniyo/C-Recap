#include <iostream>


int main () {
 /**
  * type conversion is changing one data type from one value to the another one.
 */
  int correct = 8;
  int question = 10;

  double score = correct / (double)question * 100;

  /*
   * How to make c++ accept the parameter or insertion values.
   cout << (insertion operator)
   cin >> (extraction operator)
  */

std::string name;
int age;

 std::cout << "what's our age?:  ";
 std::cin >> age;
 std::cout << "what your full name?: ";
 std::getline(std::cin >> std::ws, name); // accept space btn characters
 // ws => whitespace 
 

 std::cout << "Hello " << name << "\n";
 std::cout << "Your age is " << age << " years old" << "\n";
    return 0;
}