// sorting an array using pure recursion.

#include<iostream>
#include<vector>
using namespace std;
void insert(vector <int> &arr,int);

void sort(vector <int> &arr){
    // base condition
    if(arr.size() == 1)
        return;
    //recusive assumtion
    int value = arr[arr.size()-1];
    arr.pop_back();
    sort(arr);
    //self work
    insert(arr,value);
    


}
void insert(vector <int> &arr,int value){
    if(arr.size() == 0 or arr[arr.size()-1] <= value){
        arr.push_back(value);
        return;
    }
    int temp = arr[arr.size()-1];
    arr.pop_back();
    insert(arr,value);
    arr.push_back(temp);

    
}

int main(){
    vector <int> v;
    for(int i=6;i>0;i--)
        v.push_back(i);
    sort(v);
    for(auto i=v.begin();i != v.end();i++)
        cout << *i << endl;
}