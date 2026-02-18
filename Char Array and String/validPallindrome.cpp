#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

bool isPallindrome(char str[],int n) {
    int st = 0, end = n-1;
    while(st<end) {
        if(str[st++] != str[end--]) {
            cout<<"Not a valid pallindrome";
            return false;
        }
    }
    cout<<"valid pallindrome\n";
    return true;
}

int main() {
    char word[] = "RACECAR";
    isPallindrome(word,strlen(word));
    return 0;
}