#include <iostream>

using namespace std;

int main () {
  int x = 10;
  for (int i = 10;  i > 0; --i) {
    cout << i << " , " <<endl;
    if (i == 3) {
      cout << "count down abort" <<endl;
      break;
    }
  }

  // Continue loop

  for (int j = 10; j > 0; --j) {
    if (j == 5) continue;
     cout << j << endl;
  }
    cout << "Lift the shit off";


//switch statement
switch (x) {
  case 1:
  case 2:
  case 3:
    cout << "x is 1, 2 or 3";
    break;
  default:
    cout << "x is not 1, 2 nor 3";
  }
}