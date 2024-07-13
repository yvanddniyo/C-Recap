#include <iostream> 

int main () {
    // implement normal line 

    std::cout << "I like code" << "\n";
    std::cout << "I like to eat bugger"  << "\n";

    // here is the declaration of the number
    // int: used as data type that represent int

    int x = 5;
    int y= 4;
    int age = 23;
    int sum = x + y;

    // double: used to declare a number that has the points like 4.5
 
     double price = 23.33;
     double gpa = 4.44;
     double sumD = price + gpa;

     // when want to store only one character we use char

     char grade = 'D';
     char currency = '$';
      
     // Boolean is the  defines as true or false using bool

     bool student = true;
     bool patient = false;  

     // string(object that represent the sequence of the character or text)

     std::string name = "yvan"; 
     std::string day;
      day = "Friday";  

      /** 
       * The ends of basic data type used in the c++
      */

     // const is the word that use to declare a variable that ready only not can modify 

     const double pi = 3.14159;
     double radius = 10;

     double circumference = 2 * pi * radius; 

     std::cout << circumference << "cm";

    // std::cout << "Hello " << name << " can we meet on " << day << "." << "\n"; 

    return 0;
}