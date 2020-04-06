#include <bits/stdc++.h>
using namespace std;

void solution(){
    int d, m;
    cin>>d >>m;
    long long result =1;
    for( int i =0 ; i<30; i++){
        if(d<(1<<i)){
            break;
        }
        result = result * (min((1<<(i+1))-1,d)-(1<<i) + 2)%m;
    }
    result--;
    if(result <0){
        result +=m;
        cout << result << endl;
    }
}

int main (){
    int t;
    cin>>t;
    while(t--){
        solution();
    }

    return 0;
}