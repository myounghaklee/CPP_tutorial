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
    int length[3];
    int length1, length2, length3;
    int min= 1000000;
    int max = 0;
    int tempLength;
    for (int i =0; i <3; i++){
        scanf("%d", &Xarr[i]);
        scanf("%d", &Yarr[i]);
    }
    length[0] = sqrt(pow((Xarr[0]-Xarr[1]),2)-pow((Yarr[0]-Yarr[1]),2));
    length[1] = sqrt(pow((Xarr[1]-Xarr[2]),2)-pow((Yarr[1]-Yarr[2]),2));
    length[2] = sqrt(pow((Xarr[0]-Xarr[2]),2)-pow((Yarr[0]-Yarr[2]),2));
    int i =0;
    while(true){
        
        tempLength = 2*length[i] + 2*length[++i];
        min = min(min, tempLength);
        max = max(max,tempLength);
        printf("%d", i);
        if( i==3) break;
    }
    

    


    return 0;
}