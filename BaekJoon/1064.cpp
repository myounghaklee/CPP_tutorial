#include<stdio.h>
#include<cmath>
#include <cstdlib>
#include <algorithm>

using namespace std;
#define min(x,y) x<y?x:y;
#define max(a,b) a>b?a:b;
typedef long double ld;

int main (){
    int Xarr[3];
    int Yarr[3];
    ld length[3];
    ld length1, length2, length3;
    ld min= 1000000;
    ld max = 0;
    ld tempLength;
    int idx = 0;
    ld result; 
    for (int i =0; i <3; i++){
        scanf("%d", &Xarr[i]);
        scanf("%d", &Yarr[i]);
    }
    length[0] = sqrt(pow((Xarr[0]-Xarr[1]),2)-pow((Yarr[0]-Yarr[1]),2));
    length[1] = sqrt(pow((Xarr[1]-Xarr[2]),2)-pow((Yarr[1]-Yarr[2]),2));
    length[2] = sqrt(pow((Xarr[0]-Xarr[2]),2)-pow((Yarr[0]-Yarr[2]),2));
    if((Xarr[0]==Xarr[1]==Xarr[2])||(Yarr[0]==Yarr[1]==Yarr[2])){
        printf("-1\n");
    }
    
    
    while(1){
        tempLength = 2*length[idx] + 2*length[++idx];
        min = min(min, tempLength);
        max = max(max,tempLength);
        
        
        if( idx==2) {
            tempLength = 2*length[0] + 2*length[idx];
            min = min(min, tempLength);
            max = max(max,tempLength);   
            break;
        }


    }
    result = max-min;
    printf("%Ld", result);
    return 0;
}