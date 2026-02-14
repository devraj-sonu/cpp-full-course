#include<iostream>
#include<climits>

using namespace std;

void maxsubarraysum(int *arr, int n) {
    int maxsum = INT_MIN;
    int currsum = 0;

    for(int i=0; i<n; i++) {
        currsum += arr[i];
        maxsum = max(maxsum,currsum);
        if(currsum<0) {
            currsum = 0;
        }
    }
    cout << "Maximum Subarray Sum is: " << maxsum << endl;
}

int main() {
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(int);

    maxsubarraysum(arr,n);

    return 0;
}