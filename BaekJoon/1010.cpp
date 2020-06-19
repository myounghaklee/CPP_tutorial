#include <stdio.h>


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
