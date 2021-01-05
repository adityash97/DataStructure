//  In how many ways we can go from top left to bottom left.
//  can move only down,right and diagonal.
//  Using recursion.

#include<iostream>
using namespace std;
static int pathCounts = 0;
void mazePath(int m,int n,int i,int j,string osf){

    if(i== m-1 and j == n-1){
        cout << "Reached ";
        pathCounts ++;
        cout << osf << endl;

    }
    if(i >= m or j >= n){
        return;
    }
    mazePath(m,n,i+1,j,osf+"R");
    mazePath(m,n,i,j+1,osf+"D");
    mazePath(m,n,i+1,j+1,osf+"Diag");
}

int main(){
    mazePath(2,2,0,0,"");
    cout << "Total paths : " << pathCounts << endl;
}