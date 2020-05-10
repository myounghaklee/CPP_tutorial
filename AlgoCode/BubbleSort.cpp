#include <stdio.h>

/*
bubble sort
인접한 원소끼리만 비교해가면 계속 자리를 교환해나가는 방식
단계가 끝날때마다 마지막부터 한 원소씩 정렬된다
시간복잡도 = O(n^2)
오래걸리지만 단순한 정렬

*/
int main(){
    int array[5]={55,7,78, 12,42};
    int temp;
    for(int i =1 ;i<5;i++){
        for(int j =i;j<5;j++)
        if(array[i]<array[i-1]){
            temp =array[i];
            array[i]= array[i-1];
            array[i-1]= temp;
        }
    }
    for(int i=0; i<5;i++){
        printf("%d \t",array[i]);
    }

    return 0;
}