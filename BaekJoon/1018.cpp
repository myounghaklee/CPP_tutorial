#include <stdio.h>
/*체스 순회를 하는 문제이기 때문에 brute-force Algorithm 을 사용
*/
#define  min(a,b) (((a)<(b))?(a):(b))
char chess[50][50];



int main (){
    int result =100;
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i =0; i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%c",&chess[i][j]);

        }
        scanf("\n");  
    }


    for(int i =0; i<n-7;i++){//입력받은만큼 순회 
        for(int j =0; j<m-7;j++){


            int cnt =0;
            for( int k=i; k<i+8; ++k){// 체스판 크기만큼 체크 
                for(int l =j; l<j+8; ++l){
                    //if(((k%2)==0 && (l%2)==0)|| ((k%2)==1&&(l%2)==1)){//짝짝, 홀홀 일때 
                    if((k%2)^(l%2)){  
                        if(chess[k][l]=='W') {
                            cnt++;
                           // printf("짝짝 %d %d %d\n",k,l, cnt);
                        }
                    }
                    else{
                        if(chess[k][l]=='B') //cnt++; //홀짝, 짝홀 일때 
                        {
                            cnt++;
                            //printf("홀짝 %d %d %d\n",k,l,cnt);


                        }
                    }
                }
            }

            result = min(result,cnt);
           // printf("첫번쨰 %d %d\n",i , result);
            result = min(result,64-cnt);//(0,0)=블랙, (0,0)=화이트 일때 비교 
           // printf("두번쨰 %d %d\n",i , result);
        }
    }
    printf("%d\n",result);

    return 0;
}


