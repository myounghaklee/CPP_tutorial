#include<stdio.h>


//인접행렬을 이용하여 구현 , 
//dfs(x) = x 에 방문했다는 뜻
// 재귀 호출을 이용해서 구현 할 수 있다. 
void dfs(int x){
    
    check[x] = true;
    printf("%d",x);
    for( int i=0; i<=n; i++){//n은 정점의 갯수
        if(a[x][i]==1 && check[i]==false){
            dfs(i);
        }
    }
}

//인접 리스트를 이용하여 구현 
void dfs(int x){
    check[x]=true;
    printf("%d",x);
    for( int i=0; i<a[x].size(); i++){
        int y = a[y][i];
        if(check[y] == false){
            dfs(y);
        }
    }
}


//메인에서 dfs함수를 호출하여 사용하면 된다. 

int main(){
    return 0;
}