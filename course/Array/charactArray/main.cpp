#include <iostream>
#include <string>

using namespace std;

int main () {
  // declare the array of char

  char foo [20];
  char mywords[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
  char myWord[] ="Hello";
  cout << "char: " << myWord << endl;
  cout << "chars: " << mywords << endl;

  char question1[] = "what your name ?";
  string question2 = "Where do you live ?";
  char answer1[80];
  string answer2;
  cout << question1;
  cin >> answer1;
  cout << question2;
  cin >> answer2;

  cout << "Hello " << answer1;
  cout << " from " << answer2 << "! \n";
}

