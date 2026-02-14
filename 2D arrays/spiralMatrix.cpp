#include<iostream>
using namespace std;

void spiralMatrix(int matrix[][4],int n, int m) {
    int sRow = 0, sCol = 0;
    int eRow = n-1, eCol = m-1;

    while (sRow<=eRow && sCol<=eCol) { //when the both condition true(&& because if the matrix row and col will be odd)
        //top
        for(int j = sCol; j<=eCol; j++) {
            cout<<matrix[sRow][j] <<" ";
        }
        //right
        for(int i = sRow+1; i<=eRow; i++) {
            cout<<matrix[i][eCol]<<" ";
        }
        //bottom
        for(int j = eCol-1; j>=sCol; j--) {
            if(sRow == eRow) { // middle
                break;
            }
            cout<<matrix[eRow][j]<<" ";
        }
        //left
        for(int i = eRow-1; i>=sRow+1; i--) {
            if(sCol == eCol) {
                break;
            }
            cout<<matrix[i][sCol]<<" ";
        }

        sRow++;
        eCol--;
        eRow--;
        sCol++;

    }

    cout<<endl;
    
}

int main() {
    int matrix[4][4] = {{2,5,7,8},
                        {6,8,9,3},
                        {2,8,4,6},
                        {1,3,8,4}};
    spiralMatrix(matrix, 4, 4);
    return 0;

}