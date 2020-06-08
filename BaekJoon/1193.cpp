#include <stdio.h>

int main(){
    int x;
    int whatLine =0;
    int denom=0;//분모
    int numer=0;//분자 
    int i=1;
    scanf("%d", &x);

    while(x){
        x-=i;// i번쨰 줄의 몇번쨰인지 

        whatLine = i+1;//몇번째 줄인지

        if(i>=x){
            break;
        }
        i++;
    }
    
    if(whatLine%2==0){//짝수번쨰 줄이라면
    
        numer = x;
        denom = whatLine-x+1;
      
    }
    else{
        numer = whatLine-x+1;
        denom = x;
    }
    printf("%d/%d",numer,denom);


    return 0;
}