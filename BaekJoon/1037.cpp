#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
    unsigned int n;
    unsigned int arra[50];

    scanf("%d",&n);
    for(int i=0; i<n;i++){
        scanf("%d ", &arra[i]);
    }
    std::sort(arra, arra+n);

    printf("%d", arra[0]*arra[n-1]);


    
    return 0;
}