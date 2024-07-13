#include<iostream>

using namespace std;

int main () {
    int num;

    cout << "Enter the numnber of your grade : " << endl;
    cin >> num;

    if (num <0 || num > 100 ) {
        cout << "Input number inserted is invalid."  << endl;
    }
    else if(num < 50) {
        cout<< "Failed, improve next semester."  << endl;
    }
    else if (num >= 50 && num < 60) {
        cout<< "Class F"  << endl;
    }
    else if (num >= 60 && num < 67) {
        cout<< "Class E"  << endl;
    }
    else if (num >= 67 && num < 75) {
        cout<< "Class C"  << endl;
    }
    else if (num >= 75 && num < 85) {
        cout<< "Class B"  << endl;
    }
    else {
        cout<< "Class A"  << endl;
    }
    return 0;
}