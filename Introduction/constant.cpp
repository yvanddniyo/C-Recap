// using the preprocessor for definng the constant.
#include <iostream>
using namespace std;

#define PI 3.1415926
#define NEWLINE  '\n'

int main () {
    double r=5;
    double circle;

    circle  = 2 * PI * r;
    cout << "radius " << circle <<  NEWLINE;

    return 0;
}