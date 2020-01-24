#include <stdio.h>
#include <math.h>
#include <string.h>
//소수구하기 알고리즘 및 에라토스테네스 체의 알고리즘 구현

int isPrime(int n ){
    int i ; 
    for (i=2; i<n; i++){
        if(n%1 ==0){
            return false;
        }
    }
    return true;
}

int isPrime2(int n ){
    int i, sqrn;
    sqrn =(int)sqrt(n);
    for(i=2; i<=sqrn; i++){
     if(n%i==0){
         return false;
     }   
    }
    return true;
}

int main( int argc, char* argv[]){
    //인자가 있어야 한다. 
    if(argc<2){
        printf("usage : prime2[integer]\n");
        return 0;
    }

    //주어진 인자는 2보다 큰수여야 한다. 
    int n = atoi( argv[1]);
    if(n<2){
        printf("error : n must be greater thane 1\n");
        return 0;
    }

    int *parray;
    parray = new int [n+1];
    if(parray ==0){
        printf(":error : memory allocation failed\n");
        return 0;
    }
    memset(parray, 0, sizeof(int)*(n+1));

    int i, j;
    //소수구하는 루프
    for ( i =2;i<=n;i++){
        if(paaray[i]==1)
        continue;
        j=i;
        while((j+=i)<=n){
            parray[j] =1;
        }
    }

    //소수 출력
    for( i=2;i<=n; i++){
        if(parray[i] == 0){
            printf("%d",i);
        }
        printf("\n");
    }

    delete [] array;
    return 0;
}