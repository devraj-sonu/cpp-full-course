#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
void reverse(char word[],int n) {
    int st = 0,end = n-1;
    while(st<end) {
        swap(word[st],word[end]);
        st++;
        end--;
    }
}

int main() {

    char word[] = "APPLE";
    reverse(word,strlen(word));
    cout<<"Reverse is : "<<word<<endl;
    return 0;
}