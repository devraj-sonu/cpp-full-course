//full logic behind the selection sorting algorithm.


#include<iostream>
using namespace std;
void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionAssending(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int maxIdx = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j]>arr[maxIdx]) {
                maxIdx = j;
            }
        }
        swap(arr[i],arr[maxIdx]);
    }
}

void selectionSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int minIdx = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j]<arr[minIdx]) {
                minIdx = j;
            }
           
        }
        swap(arr[i],arr[minIdx]);
    }
}

int main() {

    int arr[5] = {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
    cout<<"Ascending array is : ";
    print(arr,n);

    selectionAssending(arr,n);
    cout<<"Descending array is : ";
    print(arr,n);

    return 0;
}