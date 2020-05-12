#include <stdio.h>

int binarySearch(int *ar, int num, int key){
    int start, end, mid;
    start =0, end=num-1;
    for(;;){
        mid=(start+end)/2;
        if(ar[mid]==key){
            return mid;
        }
        else if(ar[mid]>key){
            end= mid-1;
            mid = (start+end)/2;
        }
        else if(ar[mid]<key)
        {
            start=mid;
            mid=(start+end)/2;
        }
        else
        {
            return -1;
        }
        
    }

}

int main(){


    return 0;
}