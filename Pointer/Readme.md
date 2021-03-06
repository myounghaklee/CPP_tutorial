# Pointers
포인터는 ram(memory)의 주소를 가리킨다.
: variables that store address of another vaariable
```
int a; 
``` 
라고 변수 선언을 하면 int 타입이기 때문에 4바이트 크기의 메모리를 할당하고 포인터는 할당된 주소의 시작주소를 가리키게 된다. 

## 포인터 사용법
```
int a; //변수 선언 
a= 5;
int *p; //포인터 선언
p = &a; //p는 a의 주소를 가리킨다 
prinft("%d", p )// p가 가리키고 있는 a의 주소가 출력된다. 
printf("%d",&a) // a의 주소 출력된다 p의 출력 결과와 동일 
printf("%d",&p) // p의 주소 출력. 즉, p의주소에 p의 값인 a의 주소가 들어있다.
printf("%d",*p) // p가 가리키고 있는 a의 값인 5가 출력된다
```

## pointer to pointer
![이미지] (/Users/myounghak/dev/CPP_tutorial/BaekJoon/Pointer/pointerToPoiner.png)


## call by referenece
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


## arrays as function arguments
아래의 코드를보고 예를 들어 설명해 보자
```
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
```
SumOfElements의 인자인 A배열은 main의 A 배열을 전부 복사하는게 아니다
A의 포인터가 복사된다고 생각하면 된다. 
컴파일러는 main의 A함수의 첫번째 주소를 카피한다.
그래서 SumOfElements의 인자를 int * A로 변경하면된다. 