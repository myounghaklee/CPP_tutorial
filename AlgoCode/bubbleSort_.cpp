#include <stdio.h>
#define swap(a,b) {int t; t=a; a=b;b=t;

void SelectionSort(char*a, int size){

    int minimum;
    int i , j;
    for(i=0;i<size-1;i++){
        minimum =i;
        for(j=i+1;j<size;j++){
            if(a[minimum]>a[j]){
                minimum=j;
            }
            if(minimum !=i){
                swap(a[minimum],a[j])
            }
        }
    }
}

int array[][];


int main(){


    return 0;
}