#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		long long n, m, tich;
		cin >> n >> m;
		long long a[n + 1], b[m + 1];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < m; i++) cin >> b[i];
		sort(a, a + n);
		sort(b, b + m);
	    tich = a[n - 1] * b[0];
		cout << tich << endl;  
	}
	return 0;
}

