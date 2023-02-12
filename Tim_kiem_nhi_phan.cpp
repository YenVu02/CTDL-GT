#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k, kt = 0;
		cin >> n >> k;
		int a[n + 1];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++){
			if(a[i] == k){
				cout << i + 1;
				kt = 0;
				break;
			}
			else kt = 1;
		}
		if(kt == 1) cout << "NO";
		cout << endl;
	}
	return 0;
}

