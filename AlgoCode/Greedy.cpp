#include <stdio.h>
#include<stdlib.h>

/* 
최적 해를 구하는데 사용되는 방법 
선택의 경우의 수가 여러가지 있을때 한개를 선택하여 가장 최적이라고 생각되는 것을 선택해
나가는 방시으로 진행하며 최종적인 해답에 도달하는 방법

- 거스름돈 문제 (가장 기초적인 그리디 알고리즘)
*/

int coins[]= { 500,250, 100, 50 ,10};
int count [5];
int money;
int i =0 ;

int main(){
    scanf("%d", &money);
    while(money != 0){
        if(money <0){
            count[i]--;
            money +=coins[i++];
        }
        else{
            count[i]++;
            money -=coins[i];
        }
    }
    for(i=0; i<5;i++){
        printf("%d",coins[i]);
    }
    return 0;
}