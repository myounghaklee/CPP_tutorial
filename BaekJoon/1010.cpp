#include <stdio.h>

/*
전형적인 combination 문제임
m개중에 n개를 뽑을 수 있는 경우의 수를 생각해내면 된다. 
즉 문제에서 순서가 중요해 보였지만 이는 신경쓸 필요가 없음
다음은 combination source code

#include <stdio.h>


//nCr = (n-1)C(r-1) + (n-1)Cr


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

*/


long long combination(int n, int m){
    long long bridge[31][31]={0};
    if(bridge[n][m]>0){
        return bridge[n][m];
    }
    if(m == 0 || m==n){

        return bridge[n][m] =1;
    }
    return bridge[n][m] = combination(n-1,m-1) + combination(n-1,m);
}



int main (){
    int t, n ,m;
    int cnt=0;
    scanf("%d", &t);

    for(int i=0;i<t;i++){
        scanf ("%d %d ",&n, &m);
        printf("%lld\n",combination(m,n));
    }
    return 0;
}
