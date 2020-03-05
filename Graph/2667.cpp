#include<stdio.h>
#include<queue>
#include<algorithm>

/*
(x,y)를 방문하는 bfs 

*/
//현재 정점에서 동서남북으로 이동하기위한 x,y좌표 배열 
int dx[4]= {1,-1,0,0};
int dy[4]= {0,0,1,-1};

// nx,ny = 현재정점에서 다음정점으로 이동하기 위함

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
            if(a[i][j]==1 && d[i][j]==0){ //집이 있는데 아직 방분하지 않은경우에 count증가 시킴
                bfs(i,j,++count); 
            }
        }
    }
}