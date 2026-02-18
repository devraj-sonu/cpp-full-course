#include<iostream>
#include<cstring>
using namespace std;

int main() {

    // char word[100];
    // cin>>word;//it ignores after the space

    // cout<<"Your word was : "<<word<<endl;
    // cout<<"length : "<<strlen(word)<<endl;


    char sentence[100];
    cin.getline(sentence,30,'*');//it ignores after the space

    cout<<"Your word was : "<<sentence<<endl;
    cout<<"length : "<<strlen(sentence)<<endl;
    return 0;
}