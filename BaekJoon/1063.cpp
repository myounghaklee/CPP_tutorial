#include <stdio.h>
#include <string>

using namespace std;

//R,L,B,T,RT,LT,RB,LB
int dx[8]={1,-1,0,0,1,-1,1,-1};
int dy[8]={0,0,1-1,1,1,1,-1,-1};

void movement();


int main (){
    string kingLocation, stoneLocation; int n;
    scanf("%s %s %d", &kingLocation, &stoneLocation, &n);
    int nMove[50]={0};
    for(int i =0; i<n;i++){
        scanf("%d", &nMove[i]);
    }

    return 0;
}