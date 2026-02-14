//check if a number is 3 gigit or not

#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n>99 && n<1000) {
        cout<<"The number is a three digit number";
    }
    else{
        cout<<"The number is not a three digit number";
    }
}