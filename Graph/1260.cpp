#include <stdio.h>
#include <cstdio>
#include <queue>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

vector<int> map[1001];
queue<int> q;
bool check[1001];


//인접리스트 이용
void dfs(int node){
    check[node] = true;
    printf("%d ",node);
    for(int i=0; i<map[node].size(); i++){
        int next = map[node][i];
        if(check[next]==false){
            dfs(next);
        }
    }
}

void bfs(int node){
    //dfs에서 사용했기때문에 초기화
    memset(check,false,sizeof(check));
    check[node]=true;
    q.push(node);
    while(!q.empty()){
        int x=q.front();
        q.pop();
        printf("%d ",x);
        for(int i =0;i<map[x].size();i++){
            int next =map[x][i];
            if(check[next]==false){
                check[next]=true;
                q.push(next);
            }
        }
    }
}


int main(){
    int N, M ,V;
    scanf("%d %d %d",&N, &M, &V);
    for(int i =0; i<M; i++){
        int u, v; 
        scanf("%d %d",&u, &v );
        map[u].push_back(v);
        map[v].push_back(u);
    }

    for(int j=0; j<=N;j++){
        sort(map[j].begin(), map[j].end());
    }
    dfs(V);
    puts("");
    bfs(V);
    puts("");
    return 0;
}