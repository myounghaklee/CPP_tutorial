/*
1. 임의의 두정수 u,v에 대해 u가 v보다 더 커야 한다. 
2. u = u- v
3. u가 0이면 v가 최대 공약수 이고 0이 아니면 (1)로 돌아 간다. 
*/

#include <stdio.h>

/*
* 일반적인 유클리드 알고리즘의 예 
int get_gcd(int u, int v){
    int t; 
    while (u){ //u가 0 보다 클 동안에 반복 
        if (u<v){
            t=u;
            u=v;
            v=t;
        }
        u= u-v;
    }
    return v;
}

void main(void){
    int u, v;
    int gcd;
    scanf("%d, %d", &u, &v);
    gcd = get_gcd(u,v);
    printf(" \t %d", gcd);

}
*/

int gcdModulus(int u , int v){
    int t; 
    while(v){
        t = u%v;
        u=v;
        v=t;
    }
    return u;
}

int gcdRecursion(int u, int v){
    if(v==0)
    return u;
    else
    {
        return gcdRecursion(v, u%v);
    }
}

void main(void){
    int u;
    int v;
    //여기서 찍어보면 된다.
}