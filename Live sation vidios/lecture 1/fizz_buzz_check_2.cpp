// to check a number is divisible by 3 then return "fizz". if number is divisible by 5 return "buzz".
//if divisible by both 5 and 3 then print "fizzbuzz".
//otherwise return the current number itself.

//approach 2 [main interview approach].

#include<iostream>
using namespace std;

void fizzBuzzCheck (int n) {
    int counter3 = 0 , counter5 = 0;
    for(int i=1; i<=n; i++) {
        counter3++; counter5++;

        if(counter3 == 3 && counter5 == 5) {
            cout<<"fizzbuzz";
            counter3 = 0;
            counter5 = 0;
        }
        else if(counter3 == 3) {
            cout<<"fizz";
            counter3 = 0;
        }
        else if(counter5 == 5) {
            cout<<"buzz";
            counter5 = 0;
        }
        else {
            cout<<i;
        }
        cout<<endl;
    }
    
}

int main() {

    int n = 1500;
    fizzBuzzCheck(n);

    return 0;
}