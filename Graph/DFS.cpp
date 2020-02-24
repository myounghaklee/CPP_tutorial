#include<stdio.h>


//인접행렬을 이용하여 구현 , 
//dfs(x) = x 에 방문했다는 뜻
// 재귀 호출을 이용해서 구현 할 수 있다. 
void dfs(int x){
    
    check[x] = true;
    printf("%d",x);
    for( int i=0 ; i<=n;i++){
        if(a[x][i]==1 && check[i]==false){
            dfs(i);
        }
    }
}



int main(){
    return 0;
}