#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,l,n;
    int cnt=0;
    int dust;
    scanf("%d %d %d",&m,&l,&n);
    int dustarray[1002] ={0};//= malloc(sizeof(int) * n);

    for(int i=0; i<n;i++){
        scanf("%d",&dust);
        dustarray[dust] = 1;
    }
    //int size = sizeof(dustarray)/sizeof(int);

    for(int i=0; i<m;){

        if(dustarray[i]==1){
            cnt++; //먼지 있으면 ++
            for(int j=i;j<=l+i;j++){ //i 부터 테이브 길이만큼 먼지 없앰
                dustarray[j]=0;
            }
            //if(i>size){break;}
            i=i+l+1;
        }
        else{i++;}
        
        if(i>m){break;}

    }
    printf("%d", cnt);

    return 0;
}