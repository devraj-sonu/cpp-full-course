#include<iostream>
using namespace std;


int diagonalSum(int matrix[][4],int n) {
    int sum = 0;

    for(int i=0; i<n; i++) {//time complexity of the approach is>> O(N^2)
        for(int j=0; j<n; j++) {
            if(i == j) {
                sum += matrix[i][j];//code for primary diagonal
            } else if (j == n-i-1) {
                sum += matrix[i][j];//code for secondary diagonal
            }
        }
    }

    //<---------------------------or----------------------------->

    for(int i=0; i<n; i++) {//for time complexity for approach >> O(N)
        sum += matrix[i][i];//code for primary diagonal
        if(i != n-i-1) {
            sum += matrix[i][n-i-1];//code for secondary diagonal
        }
    }

    cout<<"Sum = "<< sum << endl;
    return sum;
}

int main() {
    int matrix[4][4] = {{2,6,8,4},
                        {8,3,7,2},
                        {0,4,3,9},
                        {1,7,4,3}};
    diagonalSum(matrix, 4);
    return 0;
}