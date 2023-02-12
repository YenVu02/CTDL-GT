#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x, kt = 0;
		cin >> n >> x;
		int a[n + 1];
		for(int i = 1; i <= n; i++) cin >> a[i];
		for(int i = 1; i <= n; i++){
			if(a[i] == x){
				kt = 1;
				break;
			}
		}
		if(kt == 1) cout << 1;
		else  cout << - 1;
		cout << endl;
	}
	return 0;
}

