#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int sorted[10000];
void merge(int left, int mid, int right , int * arrayPtr){

    int i ,j,k,l;
    i = left;
    j = mid+1;
    k= left;
    while(i<=mid && k<=right){
        if(arrayPtr[i]<=arrayPtr[j]){
            sorted[k++]= arrayPtr[i++];
        }
        else
        {
            sorted[k++]= arrayPtr[j++];
        }
        
    }
    if(i>mid){
        for( l=j;l<=right;l++){
            sorted[k++]= arrayPtr[l];
        }
    }
    else{
        for(l=i;l<=mid;l++){
            sorted[k++]=arrayPtr[l];
        }
    }
    for(l=left;l<=right;l++){
        arrayPtr[l]=sorted[l];
    }
    

}
void mergeSort(int left, int right , int * arrayPtr){
    int mid;
    
    if(left<right){
        mid = (left+right)/2;
        mergeSort(left, mid, arrayPtr);
        mergeSort(mid+1, right, arrayPtr);
        merge(left, mid, right, arrayPtr);
    }
}

int main(){
    int n ; 
    int * arrayPtr;
    cin >> n;
    arrayPtr = (int *)malloc(sizeof(int)* n);
    for(int i=0; i<n;i++){
        cin >>arrayPtr[i];
    }
    mergeSort(0,n-1, arrayPtr);
    for(int i =0; i<n;i++){
        cout << arrayPtr[i];
    }


    return 0;
}