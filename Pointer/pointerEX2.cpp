#include<stdio.h>

int main (){
    int a = 1025;
    int *p = &a;
    printf("size of integer is %d bytes\n",sizeof(int));
    printf("address = %d, value=%d\n", p, *p);
    printf("address = %d, value=%d\n", p+1, *(p+1));
    char *charP;
    charP = (char*)p; // typecastig 이라고 한다
    printf("size of char is %d bytes\n",sizeof(char));
    /*
    밑의 *charP 의 값이 위의  *p의 값과 다르게 나오는 이유?
    *p는 int타입이기 때문에 1025를 2진수로 표현한 00000000 00000000 00000100 00000001이 저장된다.
    하지만 *charP는 character타입이기 때문에 1바이트인 마지막 8비트 00000001이 저장된다.
    */
    printf("address = %d, value =%d\n", charP, *charP);

    /*
    여기 중요함

    *(charP+1)을 출력하면 4가 나오는 이유 : *charP의 값인 00000001의 다음 주소의 값이 출력된다 
    따라서 00000100 이 출력되는것
    */
    printf("address = %d, value =%d\n", charP+1, *(charP+1));

    //---------------------------------------------------------------------------------//
    void *voidP;
    voidP = p;
    printf("address = %d\n",voidP);
    // printf("address = %d\n",voidP+1); void type은 에러남
    return 0;
} 