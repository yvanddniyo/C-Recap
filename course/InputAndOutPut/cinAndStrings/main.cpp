#include <iostream>
#include <string>


using namespace std;


int main () {
  string myStr;
  cout << "What your name ?";
  getline(cin, myStr);
  cout << "Hello " << myStr << ". " << endl;
  cout << "What your favorite team? ";
  getline(cin, myStr);
  cout << "I like " << myStr << "too!" << endl; 
  return 0;
}
