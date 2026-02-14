#include <iostream>
#include <climits>
using namespace std;

void countingSort(int arr[], int n) {
    int freq[100000] = {0};
    int minval = INT_MAX, maxval = INT_MIN;

    for (int i = 0; i < n; i++) {
        minval = min(minval, arr[i]);
        maxval = max(maxval, arr[i]);
    }

    cout << "Min value: " << minval << endl;
    cout << "Max value: " << maxval << endl;
}

int main() {
    int arr[8] = {1,4,1,3,2,4,3,7};
    int n = sizeof(arr) / sizeof(int);

    countingSort(arr, n);   // function call

    return 0;
}
