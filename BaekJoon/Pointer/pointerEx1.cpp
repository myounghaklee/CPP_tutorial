#include <stdio.h>
int main (){
    int a;
    int *p;
    p = &a;
    printf("%d\n",p);
    a= 5;
    printf("%d\n",p);// p가 가리키고 있는 a의 주소가 출력된다. 
    printf("%d\n",&a); // a의 주소 출력된다 p의 출력 결과와 동일 
    printf("%d\n",&p); // p의 주소 출력. 즉, p의주소에 p의 값인 a의 주소가 들어있다.
    printf("%d\n",*p); // p가 가리키고 있는 a의 값인 5가 출력된다
    
    printf("size of integer type is %d \n",sizeof(int));

    printf("%d\n",p+1); //INT 타입이기 때문에 +4한 결과가 나온다
    

    return 0;
}