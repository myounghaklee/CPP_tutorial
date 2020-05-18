#include <stdio.h>
#define swap(a,b) {int t; t=a; a=b;b=t;

void SelectionSort(char*a, int size){

    int minimum;
    int i , j;
    for(i=0;i<size-1;i++){
        minimum =i;
        for(j=i+1;j<size;j++){
            if(a[minimum]>a[j]){
                minimum=j;
            }
            if(minimum !=i){
                swap(a[minimum],a[j])
            }

        }
    }
}

int array[][];


int main(){


    return 0;
}

4번 : 영상촬영, 도청, 열감지, 비행, 클로킹, 
5번 : 빈민국가 중 전쟁이 빈번한게 발생하는 국가(이스라엘, 아프리카)
