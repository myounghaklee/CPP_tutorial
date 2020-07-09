#include <stdio.h>

/*int SumOfElements(int A[]){
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
*/
int SumOfElements(int *Apointer, int size){
    int i, sum =0; 
    printf("SumOfElements의 포잍너 사이즈 = %d,\n 첫번째 인덱스의 사이즈 =%d\n",sizeof(Apointer),sizeof(Apointer[0]));
    for(i=0; i<size;i++){
        sum +=Apointer[i];
    }
    return sum;
}
int main(){
    int A[]={1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    int total = SumOfElements(A,size); //A는 &A[0]로 넘겨준다
    printf("sum of elements = %d\n", total);
    printf("main size of A = %d, main size of A[0] = %d\n", sizeof(A),sizeof(A[0]));
    
}