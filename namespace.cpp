#include <iostream>
namespace first{
    int x =1;
}
//namespace provide a solution for not conflict name variables in large project.

// typedef:  reserved key word used to make code more readability

// typedef std::string text_t;
// you can also use that 

// using text_t = std::string;
// using  number_t = int;

int main () {
    // using namespace first;
//    text_t name = "heyo ";
//    number_t age = 30;

   int students = 20;
   students++;
   std::cout << students;
    // std::cout << name << age;
    return 0;
}