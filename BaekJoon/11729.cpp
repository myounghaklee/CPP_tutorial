#include <stdio.h>

/* key point 
// n을 제외하고 n-1개를 b로 옮김
// n을 c로 옮김
// b에있던 n-1개를 c로 옮긴다.
// 이 로직이 hanoi function에서 작성한 것 
*/
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
    sleifn 
    return 0;
}
