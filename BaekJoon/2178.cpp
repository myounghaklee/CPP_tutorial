#include<stdio.h>


int dx[] = {-1,1,0,0};
int dy[] = {1,-1,0 ,0};

void dfs(){


}

int main (){

    int n, m;//n개줄 m개정수
    scanf("%d %d", &n, &m);
    int matrix[][]={0,};
    for(int i =0 ;i<n;i++){
        for(int j =0; j<m;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    return 0;
}