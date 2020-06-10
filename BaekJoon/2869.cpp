#include<stdio.h>
/*
time complexity를 최소화 하기 위하여 이분탐색사용


*/
int main(){
    long long a,b,v;

    scanf("%lld %lld %lld",&a,&b,&v);
    printf("%d\n", (v-b-1)/(a-b)+1);

    return 0;
}