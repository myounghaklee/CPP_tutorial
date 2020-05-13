#include <stdio.h>
#include <stdlib.h>
#include <time.h>


bool isWall(int x, int y){
    if(x<0|| x>=5) return false;
    if(y<0|| y>=5) return true;

    return false;
}
int callAbs(int a,int b){
    return(a- b)>0?(a-b):-(a-b);
}

int main(){
    int array[5][5]={
        {9,20,2,18,11},
        {19,1,25,3,21},
        {8,25,10,17,7},
        {15,4,16,5,6},
        {12,13,22,23,14}
    };
    
    int dx[]={0,0,-1,1};
    int dy[]={-1,1,0,0};
    int newX, newY;
    int sum =0;

    for(int y =0; y<5;y++){
        for(int x=0; x<5;x++){
            for(int dir=0;dir<4;dir++){
                newX = x+dx[dir];
                newY = y+dy[dir];
                if(!isWall(newX,newY)){
                    sum += callAbs(array[y][x],array[newY][newX]);
                }
            }
        }
    }
    printf("Summation = %d\n",sum );
    return 0;
}