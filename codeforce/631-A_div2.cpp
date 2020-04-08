#include <bits/stdc++.h>
using namespace std;


int check[201]; //기존에100이 있고 100번 움직일 수 있을때 


void solution(){
    int n,x;
    cin >>n>> x;
    for(int i =0; i<n;i++){
        int temp;
        cin >>temp;
        check[temp]=1;
    }
    int tes = 0;
	int v;
		for (int j = 1;j <= 200;j++){
			if (check[j] == 0)
				tes++;
			if (tes == x){
				j++;
				while(check[j] != 0){
					j++;
				}
				v = j - 1;
				break;
			}
		}
		cout <<v<<endl;

}



int main(){
    int t; 
    cin>>t;
    while(t--){
        solution();
    }

    return 0;
}