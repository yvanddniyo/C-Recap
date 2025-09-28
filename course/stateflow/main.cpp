#include <iostream>

using namespace std;

int main () {
  int x = 0;
  int m;
  string myString = "Hello!";
  string str;
  if (x == 100) 
  cout << "The answer is true" <<endl; 
  else
  cout << "Not true" << endl;
  
  //Implement while loop
  while(x < 10) {
    cout << x << endl;
    ++x;
  }
    cout << "Lift off!" << endl;

    // Do while loop 
    do {
      cout << "Enter:  ";
      getline(cin, str);
      cout << "You Entered:  " << str << endl;
    }
    while (str!= "goodbye");

    //For-loop 

    for (int i = 0; i < 10; i++) {
      cout << i << endl;
    }
    // for(; x< 20;)
    cout << "Lift it off..." << endl;

    for(int n = 0; m < 100; n++, --m) {
      cout << "n number is: "<< n << "m is number: "<< m << endl;
    }

    //Range-based for loop
    for (char c : myString ) {
      cout << "[" << c << "]";
    }
    cout << endl;

    //Break statement which abort the loop regardless where the loop is...

    for (int i = 0;  i > 10; --i) {
      cout << i << ' , ';
      if (i == 3) {
        cout << 'count down abord';
        break;
      }
    }

  return 0;
}
