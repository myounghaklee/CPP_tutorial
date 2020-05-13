#include <stdio.h>

void test(int arr[][]){
    int n ;
    int array[n][n];
    scanf("%d",&n);
    int dx = {0,0,-1,1};
    int dy = {-1,1,0,0};

    for(int i =0; i<n;i++){
        for(int j =0; j<n;j++){
            for (int k=0;k<4;k++){
                int testX = i+dx[k];
                int testY = i+dy[k];
                test(array[testX][testY]);
            }

        }
    }
}

int main (){
    return 0;
}