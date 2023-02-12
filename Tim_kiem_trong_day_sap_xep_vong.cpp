#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, x, kt = 0; cin >> n >> x;
		long long a[n + 1];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			if(a[i] == x){
				kt = 1;
				cout << i + 1;
		    }
		}
		if(kt == 0) cout << -1;
		cout << endl;
	}
	return 0;
}

