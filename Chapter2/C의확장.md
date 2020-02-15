## Pointer
메모리의 주소를 가리키는 변수 - 32비트환경에서는 4byte크기를 가진다. 
일반적인 메모리는 0부터 2^32 까지의 주소가 있다.
-pointer 규정 요소 
address & type
주소만 있는 포인터 : void pointer

### 포인터 연산 
- *(dereference operator), &(address of operator)
- pointer + int, Pointer - int 두 연산은 가능하지만 poiner + pointer안됨
- pointer - pointer

### 포인터의 특징
low-level프로그래밍 가능하게 한다. 

```
int nValue = 10;
int * nValue = &nValue; //nValue 변수의 
int nValue2 = *pValue // 이것은 pValue가 가리키고있는 값을 (주소아님)을 가져온다.
int nValue3 = pValue 
```


## Reference
Alias & 쉬운 포인터사용
생성과 동시에 초기화 되어야 한다. 
```
int nValue = 10;
int& rValue = nValue; //reference사용하기 위해선 &사용하여 초기화 
rValue = 11; //nValue도 11
nValue = 12; //rValue 도 12
printf("%x, %x \n", &nValue, &rVlaue ); //같은 주소가 찍힌다.
```

## Pointer vs Reference
```
void SwapPtr(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp; 
}

void SwapRef(int&x, int& y){
    int temp = x;
    x=y;
    y= temp;
    y= temp;
}

int first =0, second = 1;
//포인터는 출력할때 &를 사용해야한다.
SwapPtr(&first, &second); // &빼먹으면 crash 1, 0
//레퍼런스는 &없이 사용 가능하다.
SwapRef(first, second); //0,1
```
## 새로운 메모리 할당 
Type-safe memory allocation : new&delete - class(struct)의 constructor와 destroctor를 호출한다. 

```
//c언어 방식
struct Person;
Person * pAnyone;
pAnyone = (Person)*malloc(sizeof(Person));
if(pAnyone==0)
exit(0);
```

```
```