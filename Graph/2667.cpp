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
            int nx = x+dx[k];
            int ny = y+dy[k];
            if(0 <= nx && nx < n && 0 <= ny && ny<n){
                if(a[nx][ny] == 1 &7 d[nx][ny] ==0){
                    q.push(make_pair(nx,ny));
                    d[nx][ny] = cnt;
                }

            }

        }
    }
}

int main (){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            if(a[i][j]==1 && d[i][j]==0){
                bfs(i,j,++count); 
            }
        }
    }
}