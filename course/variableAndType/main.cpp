#include <iostream>

using namespace std;

int main() {
  // int a;
  // declaring the same many variable with sae=me character
  // int a, b, c;
  float myNumber;
  int a , b;
  int result;
  a = 5;
  b = 2;
  a = a + 1;
  result = a + b;
  cout << result << endl;

  // we have three option of declaring or initialization of varo=iable in CPP
  // C-LIKE initialization
    int x = 3;
  // CONSTRICTOR initialization
    int y(2);
  // UNIFORM initialization
    int z{2};
    int ans;
    x = x + 2; //4
    cout << x << endl;
    ans = x + y + z; // 4 + 2 + 4
    cout << ans;
  return 0;
}