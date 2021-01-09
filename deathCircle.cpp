// Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle. The task is to choose the place in the initial circle so that you are the last one remaining and so survive.
// Consider if n = 5 and k = 2, then the safe position is 3.
// Firstly, the person at position 2 is killed, then person at position 4 is killed, then person at position 1 is killed. Finally, the person at position 5 is killed. So the person at position 3 survives.

// The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. The first and only line of each test case consists of two space separated positive integers denoting n and k.
// josephus problem
// https://practice.geeksforgeeks.org/problems/game-of-death-in-a-circle/0/?category[]=Recursion&category[]=Recursion&page=1&query=category[]Recursionpage1category[]Recursion
#include<iostream>
#include<vector>
using namespace std;

void deathCircle(vector <int> &josephus,int k,int index,int &ans){
    if(josephus.size() == 1){
        ans = josephus[0];
        josephus.pop_back();

        return ;
    }
    index = (index+k)%josephus.size();
    josephus.erase(josephus.begin()+index);
    deathCircle(josephus,k,index,ans);

}
int main(){
    vector<int> josephus;
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        for(int i=1;i<=n;i++)
            josephus.push_back(i);
        k = k-1;
        int ans = -1;
       deathCircle(josephus,k,0,ans) ;
       cout << ans << endl;
    }

}