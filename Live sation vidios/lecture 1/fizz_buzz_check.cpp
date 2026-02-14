// to check a number is divisible by 3 then return "fizz". if number is divisible by 5 return "buzz".
//if divisible by both 5 and 3 then print "fizzbuzz".
//otherwise return the current number itself.

//approach 1 [decent].

#include<iostream>
using namespace std;

void fizzBuzz(int n) {
    for(int idx = 1; idx <= n; idx++) {
        if(idx%15 == 0) {
            cout<<"fizzbuzz";
        }
        else if(idx % 3 == 0) {
            cout<<"fizz";
        }
        else if(idx % 5 == 0) {
            cout<<"buzz";
        }
        else {
            cout<<idx;
        }
        cout<< endl;
    }

}

int main() {
    int n = 15;
    fizzBuzz(n);

    return 0;
}