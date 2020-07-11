
#include <vector>
#include <iostream>
using namespace std;


void swapHeap(vector<int> & vecHeap, int a, int b){
    int temp = vecHeap[a];
    vecHeap[a]=vecHeap[b];
    vecHeap[b]=temp;
}

int main(){
    int N;
    cin>> N;
    vector<int> heap(N+1,0);
    heap[1]=1;
    for(int i =2; i<=N; i++){
        heap[i] =i;
        int j = i-1;
        swapHeap(heap, i, i-1);
        while(j!=1){
            swapHeap(heap, j, j/2);
            j=j/2;
        }
    }
    for(int i =1; i<=N; i++){
        cout<<heap[i]<<" ";
    }
    return 0;
}