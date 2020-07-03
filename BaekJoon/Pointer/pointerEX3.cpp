#include<stdio.h>

int main (){
    int x =5;
    int *p = &x;
    *p = 6;
    int **q;
    q = &p;
    int *** r = &q;
    printf("p의 값 : %d\n",*p); //6
    printf("%d\n",*q); //address
    printf("%d\n",*(*q)); //6
    printf("%d\n",*(*r)); //address
    printf("%d\n",*(*(*r))); //6
    printf("-----------------------------\n");

    printf("p = %d\n",*p); //6
    printf(" *q = %d\n",*q); //addres
    printf("**q = %d\n",**q); //6
    printf("*r = %d\n",*r); //address
    printf("**r = %d\n",**r); //address
    printf("***r = %d\n",***r); //6
    ***r = 10;
    printf("x = %d\n",x); //10


    return 0;
}