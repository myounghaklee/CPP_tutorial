#include <stdio.h>


int fecto(int n ){
   if(n==1) 
       return 1;
   
   else
   {
       
       return n * fecto(n-1);
   }
   
}


int main (){
    int n ; 
    scanf("%d",&n);
    int result = fecto(n);
    printf("%d",result);
    return 0;
}