//overloading functions
//  function templates uis the function has ability to define a generic function.
#include <iostream>

using namespace std;
    int operate( int a, int b) {
      return (a * b);
    }
    double operate(double a, double b) {
      return a/b;
    }
    // generic function
    template <class T> T sum (T a, T b ) {
      T result;
      result = a + b;
      return result;
    }

    template <class T, class U> bool are_equal(T a, U b) {
      return a == b;
    }

int main() {
  // function should have same name but different type and don't affect anything.
  int x =5, y=2, k;
  double n =5.0, m=0.5, h;
  k= sum<int>(x, y);
  h= sum<double>(n, m);
  
  if (are_equal(10, 10.0)) // this is equivalent to the 
// are_equal<int,double>(10,10.0)

    cout << "x and y are equal." << endl;
  else
    cout << "x and y are not equal." << endl;
  
  // you can simply write even this
  // k= sum(x, y);
  // h= sum(n, m);
  cout << "k: " << k << endl;
  cout << "h: " << h << endl;
  cout << "Result for operation multipy: " << operate(4, 3) << endl;
  cout << "Result for operation divide: " << operate(0.5, 0.2) << endl;
}