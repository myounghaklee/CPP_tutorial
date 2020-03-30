#include <bits/stdc++.h>

using namespace std;

int main(){
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
    int t,n,k;
    cin >>t;
    for(int i =0; i<t; i++){
        cin >> n >> k;
        string s(n,'a');
        for( int j = n-2; j>=0; j--){
            if(k <= (n-j-1)){
            s[i]='b';
            s[n-k]= 'b';
            cout << s << endl;
            break;
            }
            k -= (n-j-1);
        }
    }
}