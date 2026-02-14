// If cost price and selling price of an item is input through keyboard,write a 
//program to determine wheather the seller has made profit or incurred loss or no profit no loss.Also
//determine how much profit he made or loss he incurred.


#include<iostream>
using namespace std;
int main() {
    int cp;
    cout<<"Enter cost price : ";
    cin>>cp;
    int sp;
    cout<<"Enter selling price : ";
    cin>>sp;
    if(sp>cp) {
        cout<<"profit is : "<<sp-cp<<endl;
    } else if(cp>sp) {
        cout<<"Loss is : "<<sp-cp<<endl;
    } else {
        cout<<"No profit and no loss"<<endl;
    }
}