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
increment의 a 지역변수 이곳에 담겨있다.
main's increment(a)의 a는 actual argument라 하고 void increment(int a)의 a는 formal argument라고 한다. 
increment 함수를 main 의 a =10이라는 값을 대입해서 호출했기 때문에 call by value라 한다

*/


Void increment(int a){//Main에 의해서 호출되는 함수이기 때문에 called function
    ++a ;
    
}



int main(){ //increment, printf를 호출하기 때문에 "calling function"이다
    int a =10;
    increment(a);
    printf("a 의 값은 = %d", increment(a)); //11 이 출력될것이라 예상하지만 10 이 출력된다 
    /* 그 이유? 
    main 함수에서 선언한 a는 local variable이다 

*/
    return 0;
}