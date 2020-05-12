#include <stdio.h>


int sequentialSearch(int *arg, unsigned int num, int key){
    unsigned int i;
    for(int i =0; i<num; i++){
        if (arg[i] == key){
        return i;
        }
    }
    return -1;
}


int main(){

    int toFindkey;
    int * array;
    scanf("%d", &toFindkey);
    for(int i=0; ; i++){
        scanf("%d",&array[i]);
        if (i==10)
        break;
    }
    sequentialSearch(array, 9,toFindkey);

    return 0;
}