#include<stdio.h>
/*
time complexity를 최소화해야되는 문제
- 첫번째 사고흐름
for문을 사용하여 v를 (a-b)로 나눔
증가한 i가 답이라고 생각
하지만 시간초과됨

- 두번째 사고흐름
연산시간을 줄이기 위한 방법생각
미끄러지지 않고 목표지점까지 올라갈 수 있으니 (v-b)를 나누기로 설정
(v-b)/(a-b)를 하니 딱 떨어지지 않을 경우 발생 따라서 하루가 적어서 +1을 함
문제 해결 완료 



*/
int main(){
    long long a,b,v;

    scanf("%lld %lld %lld",&a,&b,&v);
    printf("%d\n", (v-b-1)/(a-b)+1);

    return 0;
}