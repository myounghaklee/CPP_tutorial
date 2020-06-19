#include <stdio.h>

/*
nCr = (n-1)C(r-1) + (n-1)Cr
*/


long long combi(int n,int r);
int main () {

    int n,r;
    scanf("%d %d", &n, &r);
    printf("%lld\n",combi(n,r));

    return 0;
}

long long combi(int n, int r){
    if(n==r||r==0) return 1;
    return combi(n-1,r-1)+combi(n-1,r);
}