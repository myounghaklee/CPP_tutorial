/*
BFS
큐를 사용하여 현재 노드에서 갈 수 있는 노드들을 전부 넣어준다.


*/

#include<stdio.h>
#include<queue>
using namespace std;

//인접행렬을 이용
bool check[];

int main(){
queue<int> q;
check[i] = true;
q.push(1);
while(!q.empty()){
    int x = q.front(); //현재 내가 방문하고 있는 정점
    q.pop();
    printf("%d",x);

    for( int i=1; i<=n; i++){
        if(a[x][i]==1 && check[i] == false){
            check[i] = true; 
            q.push(i);
        }
    }
}
return 0;
}

//인접 리스트

bool check[];

int main(){
queue<int> q;
check[i] = true;
q.push(1);
while(!q.empty()){
    int x = q.front(); //현재 내가 방문하고 있는 정점
    q.pop();
    printf("%d",x);

    for( int i=1; i<=a[x].size(); i++){
        int y = a[x][y];
        if(check[y]==false){
            check[y]= true; 
            q.push(y);
        }
    }
}
return 0;
}
