//full bubble sort code logic. ascending and descending order.


#include<iostream>
using namespace std;

void print(int arr[],int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubblesort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }

}

void descending(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j]<arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main () {
    int arr[5] = {5,3,8,7,2};
    int n = sizeof(arr)/sizeof(int);
    cout<<"The actual array is : ";
    print(arr,n);

    bubblesort(arr,n);
    cout<<"Ascending order is : ";
    print(arr,n);

    descending(arr,n);
    cout<<"Descending order is : ";
    print(arr,n);
    return 0;
}







//code with boolean logic when the array is already in the sorted manner.

#include<iostream>
using namespace std;

void print(int arr[],int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubblesort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) {
            return;
        }
    }

}

void descending(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++) {
            if(arr[j]<arr[j+1]) {
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) {
            return;
        }
    }
}

int main () {
    int arr[5] = {5,3,8,7,2};
    int n = sizeof(arr)/sizeof(int);
    cout<<"The actual array is : ";
    print(arr,n);

    bubblesort(arr,n);
    cout<<"Ascending order is : ";
    print(arr,n);

    descending(arr,n);
    cout<<"Descending order is : ";
    print(arr,n);
    return 0;
}