#include <bits/stdc++.h>


using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
    int t;
    scanf("%d"&t);
    for(int i=0; i<t;i++){
        int n ; 
        string x;
        cin >> n >> x;
        string a(n,'0'),b(n,'0');
        for (int j = 0; i < n; ++j) {
			if (x[j] == '1') {
				a[j] = '1';
				b[j] = '0';
				for (int k = j + 1; k < n; ++k) {
					b[k] = x[k];
				}
				break;
			} else {
				a[j] = b[j] = '0' + (x[j] - '0') / 2;
			}
		}
		cout << a << endl << b << endl;
    }



return 0;
}