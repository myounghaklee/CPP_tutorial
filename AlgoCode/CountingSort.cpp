#include <stdio.h>
#include <stdlib.h>


/*
집합에 각 항목이 몇개씩 있는지 세는 작엄을 하여 선형 시간에 정렬하는 효율적인 알고리즘
n = list length, k = maximum of integer라면 
시간복잡도 = O(n+k) 
방법
1. 배열내의 각 항목이 몇개씩 있는지 확인
2. 이전의 발생 회수마느 ㅁ이후의 배열 갑셍 더해주낟. 
3. 정렬할 우너소아 각 원스이 개수를 저장한 배열을 통해 정렬한 과정 


*/

int main (){
    int data [8]= {0};
    int count [8]={0,};
    int countset [8]={0,};
   
    for(int i =0; i<8; i++){
        for(int j =0; j<8; j++){
            if(data[j]==i){
                count[i]+=1;
            }
        }
    }
    for( int i =0 ; i<9; i++){
        countset[i+1]=countset[i]+ countset[i+1];

    }
    for(int i =0 ;i <9; i++){
        printf("%d", countset[i]);
    }



    return 0;
}