#include <stdio.h>

//int moveCount;

void hanoi(int n, int from , int by , int to){
    //++moveCount;
    if(n==1){
        printf("%d %d\n", from, to);
    }
    else{
        hanoi(n-1,from ,to, by);
        printf("%d %d\n", from, to);
        hanoi(n-1,by,from, to);
    }
}

int main (){
    int n ;
    int moveCount =1;
    scanf("%d",&n);
    int temp =n;
    if(n<0 || n>20){
        return 0;
    }

    
    if(n==1) moveCount =1;
    while (--temp) {
		moveCount = moveCount * 2 + 1;
	}
    printf("%d\n",moveCount);
    hanoi(n, 1,2,3);

    return 0;
}