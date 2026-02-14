#include<iostream>
using namespace std;

void PrintSort(int arr[],int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int arr[],int n) {
    for(int i=1; i<n; i++) {
        int key = arr[i];
        int pre = i-1;
        while(pre>=0 && arr[pre]>key) {
            swap(arr[pre],arr[pre+1]);
            pre--;
        }
        arr[pre+1] = key;
    }
    PrintSort(arr,n);
}

int main() {
    int arr[5] = {3,5,2,1,7};
    int n = sizeof(arr)/sizeof(int);
    insertionSort(arr,n);
    return 0;
}