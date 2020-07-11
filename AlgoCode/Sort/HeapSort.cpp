#include <iostream>
#include <algorithm>
using namespace std;

/*------------------------------------------------------------------
힙정렬
병합정ㄹ렬과 퀵정렬 만큼 빠른 정렬 알고리즘
한개의 노드를 기준으로 정렬을 할떄는 logN의 시간복잡도가 걸린다
전체 노드를 힙정렬시키기 위해선 N* logn의 시간복잡도가 걸린다. 


--------------------------------------------------------------------*/
int number = 9;
int heap[9]={ 7,5,3,2,1,6,8,9,4};

int main (){

    for (int i=1; i<number; i++){
        int c =i;
        do{int root = (c-1)/2;
        if(heap[root]<heap[c]){
            int temp = heap[root];
            heap[root]= heap[c];
            heap[c]=temp;
        }
        c=root;
    }while(c!=0);
    }

    //크기를 줄여가며 반복적으로 힙을 구성
    for(int i = number-1; i>=0;i--){
        int temp = heap[0];
        heap[0]=heap[i];
        heap[i]=temp;
        int root =0;
        int c=1;
        do{
            c= 2*root + 1;
            if(heap[c]<heap[c+1]&&c<i-1){
                c++;
            }
        
        if(heap[root]<heap[c] && c<i){
            int temp = heap[root];
            heap[root]=heap[c];
            heap[c]=temp;
            
        }
        }while(c<i);

    }
    for(int i=0; i<number;i++){
        cout << heap[i]<< ' ';        
    }
return 0;
}
