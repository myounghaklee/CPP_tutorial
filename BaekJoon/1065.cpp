#include <stdio.h>
/*
한수 : 각 자리수들이 등차수열을 이루는 수 
예를 들어 123(공차1), 246(공차 2)
한자리수 두자리수는 모두 한수이다. 
*/
int main(){
    int n ; 
    int count1=0,count2=0;
    int temp;
    int hunds,tens,ones;
    scanf("%d",&n);

        count1=n;
    }
    else{
        count1=99;
        for(int i =100; i<=n;i++){
            ones = i%10;
            tens = i%10;
            hunds = i;
            if((hunds-tens) == (tens-ones)){
                count2++;
            }            
        }

    }
    printf("%d",count1+count2);
    return 0;
}