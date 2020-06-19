#include <stdio.h>
//nCr = (n-1)C(r-1)+ (n-1)Cr

long long dpcombi(int n, int r){
    int dp[100][100];
    for( int i=0; i<=n;i++){
        for(int j =0 ; j<=r;j++){
            if( i==j || j==0){
                dp[i][j]=1;
            }
            else
            dp[i][j] = dp[i-1][j-1]+dp[i-1][j];
        }
    }
    return dp[n][r];
}


int main (){
    int n,r;
    scanf("%d %d", &n, &r);

    printf("%lld\n",dpcombi(n,r));

    return 0;
}