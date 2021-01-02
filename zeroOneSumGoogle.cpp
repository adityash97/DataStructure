#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<< "Enter length of array"<<  " ";
    cin >> n;
    vector<int> arr(n,0);
    int q;
    cout << "Enter query numeber" << endl;
    cin >> q;
    while(q--){
        cout << "Insert L and R "<< endl;
        int l, r;
        cin >> l >> r;
        arr[l]++;
        if(r+1 < n){
            arr[r+1]--;
        }
    }
    for(int i=0;i<n;i++){
        arr[i]+=arr[i-1];
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}