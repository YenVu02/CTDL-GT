#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, kt = 0, k; cin >> n;
		long long a[n + 1];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		for(int i = 0; i < n - 1; i++) {
			if(a[0] != a[i]){
				kt = 1;
				k = i;
				break;
			}
		}
		if(kt == 1) cout << a[0] << " " << a[k];
		else cout << -1;
		cout << endl;
	}
	return 0;
}

