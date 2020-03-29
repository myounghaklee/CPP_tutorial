#include <stdio.h>
using namespace std;

int main (){
    unsigned short t;
    unsigned int a, b;
    unsigned int result;
    scanf("%hd", &t);

    for(int i=0; i<t; i++){
        scanf("%d %d", &a ,&b);
        if(a%b==0){
            printf("0\n");
        }
        else{
            result = b-a%b;
            printf("%d",result);
        }
        
    }
    return 0;
}