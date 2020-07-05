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
