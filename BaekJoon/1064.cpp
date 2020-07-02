#include<stdio.h>
#include<cmath>
#include <cstdlib>
#include <algorithm>

using namespace std;
#define min(x,y) x<y?x:y;
#define max(a,b) a>b?a:b;
typedef long double ld;

int main (){
    ld Xarr[3];
    ld Yarr[3];
    ld length[3];
    ld length1, length2, length3;
    ld min= 1000000;
    ld max = 0;
    ld tempLength;
    for (int i =0; i <3; i++){
        scanf("%ld", &Xarr[i]);
        scanf("%ld", &Yarr[i]);
    }
    length[0] = sqrt(pow((Xarr[0]-Xarr[1]),2)-pow((Yarr[0]-Yarr[1]),2));
    length[1] = sqrt(pow((Xarr[1]-Xarr[2]),2)-pow((Yarr[1]-Yarr[2]),2));
    length[2] = sqrt(pow((Xarr[0]-Xarr[2]),2)-pow((Yarr[0]-Yarr[2]),2));
    if((Xarr[0]==Xarr[1]==Xarr[2])||(Yarr[0]==Yarr[1]==Yarr[2])){
        printf("-1\n");
    }
    if()
    int idx = 0;
    while(true){
        
        tempLength = 2*length[idx] + 2*length[++idx];
        min = min(min, tempLength);
        max = max(max,tempLength);
        printf("%d", idx);
        
        if( idx==3) break;


    }
    printf("%ld", max-min);

    


    return 0;
}