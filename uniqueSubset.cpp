#include<iostream>
#include<set>
#include<vector>
using namespace std;
set <string> S;
vector <string> V;
void uniqueSubset(string input,string output){
    if(input.size() == 0){
        V.push_back(output);
        return;
    }
    string output1 = output;
    string output2 = output;
    output2.push_back(input[0]);
    input.erase(input.begin()+0);
    // calling function 2 times
    uniqueSubset(input,output1);
    uniqueSubset(input,output2);
}
int main(){
    uniqueSubset("AAB","");
    for(auto i=V.begin();i!= V.end() ; i++){
        S.insert(*i);
    }
    for(auto i=S.begin();i!= S.end() ; i++){
        cout << *i << endl;
    }



}