#include <iostream>

using namespace std;
int main () {
int a, b = 3, c;
a = b;
a+=2;

c = a < b ? a : b;

// convert value to another;
int i;
float f = 3.14;

// size of

string myname = "yvan";
string res;
res = sizeof(char);



i = (int) f; // OR i = int(f)
cout << "res " << res << endl;
cout<< "an" << i << endl;
cout << "answer " << a <<endl;
cout << "result " << c <<endl;
  return 0;
}

//  OR
//  a    |  b   | output
// true |  true | true
// true |  false | true
// false |  false | false
