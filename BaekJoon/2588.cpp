#include<stdio.h>

int main(){
    int input1, input2;
    int out1, out2, out3, result;
    scanf("%d %d",&input1, &input2);
    out1 = input1*(input2%10);
    out2 = input1*((input2%100)/10);
    out3 = input1*(input2/100);
    result = input1*input2;

    printf("%d\n%d\n%d\n%d", out1, out2, out3, result);
    
    return 0;
}