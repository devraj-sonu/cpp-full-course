#include<iostream>
#include<climits>
using namespace std;

void maxWater(int *heights, int n) {
    int leftmax[20000], rightmax[20000];
    leftmax[0] = heights[0];
    rightmax[n-1] = heights[n-1];
    for(int i=1; i<n; i++) {
        leftmax[i] = max(leftmax[i-1],heights[i-1]);
    }
    for(int i=n-2; i>=0; i--) {
        rightmax[i] = max(rightmax[i+1],heights[i+1]);
    }
    int watertapped = 0;
    for(int i=0; i<n; i++) {
        int currwater = min(leftmax[i],rightmax[i]) - heights[i];
        if(currwater > 0) {
            watertapped += currwater;
        }
    }

    cout<<"My water tapped is : "<<watertapped <<endl;
}

int main() {

    int heights[7] = {4,2,0,6,3,2,5};
    int n = sizeof(heights)/sizeof(int);
    maxWater(heights,n);

    return 0;
}