#include <stdio.h>
#include <algorithm>
using namespace std;


/*
sort()함수는 세번째 인자로 우리가 커스텀하여 정렬 기준을 선택할 수 있다. 
sort(a, b, c)
a : 정렬을 시작할 위치 ( 배열의 이름을 넣으면 배열의 첫번째 인덱스가 기준이 된다 .)
b : 정렬을 끝낼 위치 
c : 내가 작성한 함수 

*/
bool compare ( int a, int b){ 
    return a<b; // a가 작을때 true반환
}


bool compare2 ( int a, int b){ 
    return a>b; // a가 작을때 true반환
}
int main(){
    int a[10] = {9,3,5,4,1,10,8,6,7,2};
    //sort(a, a+10);
    //sort(a,a+10,compare); //오름차순으로 정렬 
    sort(a,a+10,compare2);//내림차순 정렬  
    for( int i=0; i<10;i++){
        printf("%d\n",a[i]);
    }
} 