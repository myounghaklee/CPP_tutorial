#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n,k;
    scanf("%d",&t);
    for(int i =0; i<t;i++){
        string s(n,'a');
        for( int j =n-2;j>=0;j--){
            if(k<=(n-j-1)){
            s[i]='b';
            s[n-k]= 'b';
            printf("%s\n", s);
            break;
            }
            k -=(n-j-1);
        }
    }
    return 0;
}