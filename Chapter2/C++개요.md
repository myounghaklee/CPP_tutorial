## C의 확장언어로서의 C++
포인터와 레퍼런스
새로운 메모리할당
function Overloading, Template가능함

## OOP로서의 C++

## 프로그래밍언어
컴퓨터를위한 상세 작업 명세서 이며 기계중심에서 사람중심으로 변화하였다

## 기계어 
CPU가 이해하는 유일한 언어 
Operator + Operand의 조함으로 이루어져 있다. (컴퓨터 구조시간에 배움)
## Assembly Language
숫자를 이해하기 쉬운 symbol로 대치 

## C++
c언어와의 하휘호환성을 제공하며 스펙상 단점을 보안한다.
- reference, inline function, 변수 중간선언, 
- funciton overload, 새로운 메모리 할당 가능
- template
- 코드와 데이터를 통합한 class 제공
- encapsulation, inheritance, polymorphism  제공

## C++ 구성
- data type 
    1. primitive type : char ,int, float, double..
    2. derived type : array, pointer, reference
    3. user defined type : structure, union, class

- flow control : if else, switch, while, do while, for goto, continue, break
- function : function name, argument, return value, body
- default argument, function overloading, inlien function

## 식별자 종류
- 변수 또는 오브젝트 이름
- 클래스, 구조체, 공용체, 열거형 이름
- 클래스, 구조체 공용체 열거형의 멤버 이름
- 함수 이름
- typedef이름
- 레이블 이름
- 매크로 이름
- 매크로 인자 이름

## 메모리 공간 할당
- 스택 (지역변수, 리턴주소): 함수가 실행되는 동안에만 할당됩니다.
- 힙 (동적으로 할당되는 메모리)
- 데이터 (global, static변수) : 프로그램 종료 시까지 해제되지 않습니다.
- 코드 : 프로그램 코드 
의 순서로 운영체제에서 메모리 공간을 할당합니다.

```
int main(){
    int n;
    int *arrayPtr;
    scanf("%d",&n);
    arrayPtr = (int*)malloc(n*sizeof(int));
    return 0;
}
```

## single quote vs double qoute
'a' = 바이트의 메모리에 영문자 A를 상수로 표현한다. 
"a" = 문자열의 끝을 알리는 ₩0가 포함되어 2바이트의 메모리에 표혀한다. 


## 범위지정 연산자 ::
만약 전역변수명과 지역변수명이 같을때 함수내애서 전역변수를 사용하고 싶을때 사용한다.
```
#incluce <iostream>
using namespace std;
int hak = 10;
int main () {
    int hak =20;
    cout << "전역변수 " <<::hak << endl;
    cout <<"지역 변수" <<hak << endl;
    return 0 ; 

}

```

## c++의 연산자들 
- new / delete  : 동정 메모리를 할당하고 해제하는 연산자
- new[]/delete[] : 동적 배열 메모리 할당하고 해제 하는 연산자 
- static_cast : 형변환에 사용 되며 정적 데이터 변환연산자이다.
- dynamic_cast : 동적 데이터 변환 연산자, 상속관계의 클래스간에 형변환시에 사용한다.
