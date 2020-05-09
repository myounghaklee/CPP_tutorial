#include<stdio.h>
#include<iostream>

/*
n*m배열의 방에서 긴 막대기의 배열을 입력받는다 
이 방을 90도 회전했을때 막대지궁 자강 낙차가 큰 것을 구하는 것
*/

int main(){

    int T,N,M;
    int H;
    int fallenCount=0;
    int temp =0;
    
    scanf("%d",&T); //test case
    scanf("%d",&N); //가로길이
    scanf("%d",&M); //세로길이
    int room[N][M];
    for( int i =0 ; i<N; i++){ //배열 초기화 
        for( int j=0; j<M;j++){
            room[N][M]=0;
        }
    }
    for(int i =0; i<N; i++){ //방에 막대기 채우기
        scanf("%d",H);
        for(int j=0; j<H; j++){
            room[i][j]= 1;
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(room[i][j]==0){
                temp =0;
                for(int k =i+1;k<N;k++){
                    if(room[k][j]==0)
                    temp ++;
                }
                if(temp>fallenCount){
                    fallenCount=temp;
                }
            }
        }
    }
    printf("%d",fallenCount);
    return 0;
}