#include <stdio.h>

int main (){
    int array[5]= {1,2,3,4,5};
    int *p = &array[0];
    printf("배열의 0번째 인덱스 주소 = %d\n", p);
    printf("배열의 0번째 값 = %d\n", *p);
    for(int i=0 ;i<5; i++){
        
        printf("배열의 %d번째 값 : %d\n",i, *p);
        p++;
    }


    return 0;
}