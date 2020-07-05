#include <stdio.h>
/*
memory architecture
|---------------------------|
|        heap               |
|---------------------------|
|        Stack              |
|---------------------------|
|        Static/global      |
|---------------------------|
|        Code(text)         |
|---------------------------|

코드상에 변수를 선언하면 메모리의code영역에 저장된다. 
global variable은 static/global영ㅇ역에 저장된다. 
*/


void increment(int a){
    a ++;
}



int main(){
    int a =10;
    increment(a);
    printf("a 의 값은 = %d", a); //11 이 출력될것이라 예상하지만 10 이 출력된다 
    /* 그 이유? 
    main 함수에서 선언한 a는 local variable이다 

*/
    return 0;
}