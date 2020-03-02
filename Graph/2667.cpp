#include<stdio.h>
#include<queue>
#include<algorithm>

void bfs(int x, int y , int cnt){
    queue<pair<int,int,>> q; 
    q.push(make_pair(x,y));
    d[x][y] = cnt;
    while(!q.empty()){
        x=q.front().first;
        y= q.front().second;
        q.pop;
        for(int k=0; k<4;k++){
            
        }
    }
}

int main (){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            if(a[i][j]==1;&&d[i][j]==0){
                bfs(i,j,++count); 
            }
        }
    }
}