// [1,2,3] create subset of given set with recursion.
#include<iostream>
using namespace std;
void subSet(int arr[],int i,int n,string osf){
    // i = last node of tree
    // osf = output so far.
    if(i==n){ //base case
        cout << "[" << osf << "]" << endl;
        return;
    }
    //calling two times 
    // one with element
    // one with witout elemet
    subSet(arr,i+1,n,osf+to_string(arr[i])+" ");
    subSet(arr,i+1,n,osf+" ");

}
int main(){
    int arr[3] = {1,2,3};
    subSet(arr,0,3,"");
}