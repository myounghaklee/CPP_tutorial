#include <stdio.h>

int main(){
    int x;
    int temp =0;
    int whatLine =0;
    int result=0;
    int denom=0;//분모
    int numer=0;//분자 
    scanf("%d", &x);
    for(int i =1 ; i<x; i++){
        if(i>=temp){
            result =i;
            break;
        }
        temp = x-i;// i번쨰 줄의 몇번쨰인지 
        whatLine = i;//몇번째 줄인지
    }
    if(whatLine%2==0){//짝수번쨰 줄이라면
    
        numer = temp;
        denom = whatLine-temp+1;
      
    }
    else{
        numer = temp;
        denom = whatLine-temp+1;
    }
//    printf("%d/%d", )


    return 0;
}