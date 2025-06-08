#include<iostream>
#include<string>

using namespace std;
const double pi = 3.1415926;
const char newline ='\n';

int main () {
    // we have 3 way initialize the variable: c-like, constructor, uniform
     int x = 0; 
     int y(0); 
     int z{0}; 

     //type deduction
     int foo = 0;
     auto bol = foo; 
     // same as int bal = fool

     // if not initialised yet

     int foos = 0;
     decltype(foos) bar; // same as int bar;

    //  intoduction to the string 
    string my_string;
    my_string = "This is the first sentence...";
    cout << my_string << endl;

    //  Type constant;
    double r = 0.5;
    double circle;

    circle = 2 * pi * r;

    // Variable in the action
    int a, b;
    int result;
    // process

    a = 5;
    b = 2;
    a = a + 1;
    result = a - b;
    //output
    cout << "this is radius" << circle << newline;
    cout << result;
    // cout << "Hello World! ";
    // cout << "I'm a C++ program.";
    // terminate program
    return 0;
}