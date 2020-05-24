#include <stdio.h>

int fibo(int n ){
    if(n<=1)
    return 0;
    else if(n==2)
    return 1;
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}

int main(){
    int result, n;
    scanf("%d",&n);

    result = fibo(n);
    printf("%d",result);
    return 0;
}

//하지만 이러한 피보나치 수열은 2번씩 호출하기 때문에 좋지 않은 경우이다. 
