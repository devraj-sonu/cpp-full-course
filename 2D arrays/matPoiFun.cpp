#include<iostream>
using namespace std;

void func(int mat[][4],int n, int m) {
    cout<<"0th row ptr" << mat << endl;
    cout<<"1st row ptr" << mat+1 << endl;
    cout<<"2nd row ptr" << mat+2 <<endl;
}

void func2(int(*mat)[4],int n, int m) {
    cout<<"0th row value" << *mat << endl;
    cout<<"1st row value" << *(mat+1) << endl;
    cout<<"2nd row value" << *(mat+2) <<endl;
}

void func3(int(*mat)[4],int n,int m) {
    cout<<*(*(mat+2)+2) << endl;
}
int main() {
    int mat[4][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,1,2,3},
                    {4,5,6,7}};

func(mat,4,4);
func2(mat,4,4);
func3(mat,4,4);

    return 0;
}