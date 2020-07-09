#include <stdio.h>

int SumOfElements(int A[]){
    int i, sum =0;
    for(i=0; i<sizeof(A)/sizeof(int);i++){
        sum +=A[i];
    }
    return sum;
}

int main(){
    int A[] = {1,2,3,4,5};
    int total = SumOfElements(A);
    printf("sum of element= %d\n", total); //15가 나오지만 3이 출력됨 
    return 0;
}