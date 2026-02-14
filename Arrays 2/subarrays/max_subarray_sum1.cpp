#include<iostream>
#include<climits>
using namespace std;

void sumOfsubarray(int *arr, int n) {
    int maxsum = INT_MIN;
    for(int start=0; start<n; start++) {
        for(int end=start; end<n; end++) {
            int currsum = 0;
            for(int i=start; i<=end; i++) {
                currsum += arr[i];
            }
            cout<<currsum << ",";
            maxsum = max(maxsum, currsum);
        }
        cout<<endl;
    }
    cout<<"maximum subarray sum = " << maxsum <<", " << endl;
}

int main () {

    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(int);

    sumOfsubarray(arr, n);
    return 0;
}
