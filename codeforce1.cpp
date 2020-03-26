#include <stdio.h>
using namespace std;

void minMove(short n,int a, int b ){
    unsigned int result = 0;
    a++;
    for(int i =0; i<n; i++){
    if (a%b == 0){
        printf("%d\n",result);
    }
    result++;
    }
}
int main (){
    unsigned short t;
    unsigned int a, b;
    
    scanf("%hd", &t);

    for(int i=0; i<t; i++){
        scanf("%d %d", &a ,&b);
        minMove(t,a,b);
        
    }
    return 0;
}