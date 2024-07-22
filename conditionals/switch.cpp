#include<iostream>


using namespace std;

int main () {
    int num;
    cout<<"Enter a number to check grade: ";
    cin>>num;
    switch(num) {
        case 10: cout<<"it is 20" <<endl; break;
        case 20: cout<<"it is 30" <<endl; break;
        case 30: cout<<"it is 40" <<endl; break;
        default:cout<<"Not 20, 30 or 40" <<endl; break; 
    }
}