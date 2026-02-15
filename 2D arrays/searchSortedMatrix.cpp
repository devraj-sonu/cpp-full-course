#include<iostream>
using namespace std;

//for approach top right corner to search

bool searchKey(int mat[][4],int n, int m, int key) {
    int i = 0, j = m-1;

    //time complexity = O(n+m)

    while(i<n && j>=0) {
        if(mat[i][j] == key) {
            cout<<"found the key at cell (" << i <<"," << j <<")\n";
            return true;
        } else if(mat[i][j]>key) {
            j--; //forward to left
        } else {
            i++; //move to downwards
        }
    }

    cout<<"Key not found\n";
    return false;
}

//for approach bottom left corner to search

bool searchKey(int mat[][4], int n, int m, int key) {
    int i = n-1, j = 0;

    while(i>=0 && j<m) {
        if(mat[i][j] == key) {
            cout<<"found the key at cell ("<< i <<","<< j <<")\n";
            return true;
        } else if(mat[i][j]>key){
            i--;
        } else {
            j++;
        }
    }

    cout<<"Key not found\n";
    return false;
}

int main() {
    int matrix[4][4] = {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}};
    searchKey(matrix, 4, 4, 33);
    return 0;
}