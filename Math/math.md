# Math

## 나머지
PC에서 는 자료형별로 정수를 저장할 수 있는 범위가 정해져 있다. 
 (a+b) mod M = ((a mod m)+ (b mod m)) mod m
 (a*b) mod m = ((a mod m) * (b mod m ))mod m
 이 성립한다. 
 하지만 나누기의 경우에는 위의 공식이 성립 하지 않는다. 
 (a-b)mod m = ((a mod m )- (b mod m)+m)mod m 


## 최대 공약수 
분별력있는 문제는 수학공식을 써야 한다.
```
//이 코드는 시간복잡도가 n 이다. 
int g =1;
for (int i=2; i<=in(a,b);i++){
    if(a%i==0 && b%i ==0)
    g=i;
}

//시간복잡도를 위해 유클리드 알고리즘을 한다. 
//밑의 코드의 시간복잡도는 logN이다. 
int gcd = (int a, int b){
    if(b==0){
        return a; 
    }else{
        return gcd(b,a%b);
    }
}
```
ㅇ