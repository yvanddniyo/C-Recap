#include <iostream>

using namespace std;

      namespace foo {
        int value() { return 5; }
      }

      namespace bar {
        const double pi = 3.1416;
        double value() { return 2 * pi;}
      }

      namespace first{
        int x = 5;
        int y = 10;
      }

      namespace second{
        double x = 3.1416;
        double y = 2.7183;
      }

      namespace scope_name {
        int n = 9;
        int m = 10;
      }

int main () {
  // using namespace first: This is give ability to using the value without distructing.
  using first::x;
  using second::y;
  cout << x << '\n';
  cout << y << '\n';
  cout << first::y << '\n';
  cout << second::x << '\n';
  cout << foo::value() << endl;
  cout << bar::value() << endl;
  cout << bar::pi << endl;

  using namespace scope_name;
  cout << n << endl;
  cout << m << endl;
}