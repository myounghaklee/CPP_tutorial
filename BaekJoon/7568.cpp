#include <stdio.h>

int main (){
    int n ;
    scanf("%d",&n);
    int input[n][2];
    int result[n];
    int cnt=1;
    for(int i =0 ; i<n;i++){
        scanf("%d %d", &input[i][0],&input[i][1]);
    }
    for( int i =0; i<n;i++){
        cnt =1;
        for(int j=0; j<n;j++){
            if(input[i][0] <input[j][0] && input[i][1]<input[j][1]){
                cnt ++;
            }
        }
        result[i]= cnt;
    }
    for(int i =0; i<n;i++) printf("%d ", result[i]);



    return 0; 
}