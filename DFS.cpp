#include<iostream>
using namespace std;
void DFS(int G[][7],int start,int size);
int G[7][7] ={
        {0,0,0,0,0,0,0},
        {0,0,1,1,0,0,0},
        {0,1,0,0,1,0,0},
        {0,1,0,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}};
int main(){
    
    DFS(G,1,7);
}

void DFS(int G[][7],int start,int size){
    static int visited[7] = {0};
    if(visited[start] == 0){
        cout << start << endl;
        visited[start] = 1;
    
    for(int j = 1;j<size;j++){
        if(G[start][j]==1 && visited[j] == 0){
            DFS(G,j,size);

        }
    }
    }

}