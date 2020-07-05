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

코드상에 변수를 선언하면 메모리의 stack영역에 저장된다. 
global variable은 static/global영ㅇ역에 저장된다. 
main() function은 스택 프레임에 저장된다. main에서 a=10으로 값을 할당한 후 
increment함수를 호출하게 되면 stack영역에 increment함수가 저장되어있는 다른 프레임을 호출한다 
*/


void increment(int a){
    ++a ;
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