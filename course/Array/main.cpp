#include <iostream>

using namespace std;

int foo[] = {1, 2, 3, 4, 5};
int n, result = 0;

void printArr(int arg[], int length) {
  for (int n = 0; n < length; ++n) {
    cout << arg[n] << " ";
    cout << endl;
  }
}

int main()
{
  int nums[5] = {3, 2, 232, 3};
  // int numsNo[]{3, 2, 232, 3};
  cout << "array: " << nums[0] << "\n";

  for (int n = 0; n < 5; ++n)
  {
    result += foo[n];
  }
  cout << "Result: " << result << "\n";

  // MultiDimentional Array

  int jimmy[3][5];

  // Arrays as parameters

  // Declaration of array as paramater.

  int firstArr[] = {5, 10, 15};
  int secondArr[] = {2, 4, 6, 8, 10};

  //calling function

  printArr(firstArr, 3);
  printArr(secondArr, 5);
  return 0;
}