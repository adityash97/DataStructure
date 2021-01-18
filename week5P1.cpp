// 1. Write a C++ program to create a class called Matrix using 2-Dimensional array of integers. Implement the following by overloading the operator == which checks the compatibility of the two matrices to be added and subtracted. Perform the following by overloading + and – operators.
// if ( m1 == m2 ) {
// m3 = m1 + m2;
// m4 = m1 – m2; }
// else { // Display an error message
// } where m1, m2, m3, and m4 are objects of Matrix class.

#include<iostream>
#define size 100
using namespace std;
class Matrix{
    int M,N;
    int arr[size][size];
    public:
    Matrix(int m,int n){
        M = n;
        N = m;
        
    }
    void setMatrixElem(){
        cout << "Enter Matrix elements"<< endl;
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                cout << "Matrix ["<<i <<"]["<<j<< "] : ";
                cin >> arr[i][j];
            }
        }
    }
    void showMatrixElem(){
        cout << "Matrix elements are :"<< endl;
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    void showMatrixSize(){
        cout << "Size  MxN : " << " "<<M << "x" << N << endl;
    }

    //overloading the operator == to check the compatibility of the two matrices to be added and subtracted.
    // only square matrix will be added and substracted;
    
    bool operator==(Matrix m){
        return (M==m.M && N == m.N)? true: false;
    }
    //matrix addition
    Matrix operator+(Matrix m){
        Matrix temp(M,N);
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                temp.arr[i][j] = arr[i][j] + m.arr[i][j];
            }
        }
        return temp;
    }
    //matrix substraction
    Matrix operator-(Matrix m){
        Matrix temp(M,N);
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                // substracting from greater elem to smaller.
                if(arr[i][j] > m.arr[i][j])
                    temp.arr[i][j] = arr[i][j] - m.arr[i][j];
                else    
                    temp.arr[i][j] = m.arr[i][j] - arr[i][j];
            }
        }
        return temp;
    }
    

};

int main(){
    Matrix m1(2,2);
    Matrix m2(2,2);
    if(m1 == m2){
        cout << "Enter element for 1st matrix \n\n";
        m1.setMatrixElem();
        m1.showMatrixElem();
        cout << "Enter element for 2nd matrix \n\n";
        m2.setMatrixElem();
        m2.showMatrixElem();
        Matrix m3 = m1 + m2;
        cout << "M3 Matrix :"<< endl;
        m3.showMatrixElem();
        Matrix m4 = m1 - m2;
        cout << "M4 Matrix :"<< endl;
        m4.showMatrixElem();
    }else{
        cout << "Matrix size mismatched . So can't perform addition or substraction operation" << endl;
    }
}