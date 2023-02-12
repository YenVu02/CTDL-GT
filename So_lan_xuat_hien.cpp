#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
	faster();
	int t;
	cin >> t;
	while(t--){
		int n, x, kt = 0, d;
		cin >> n >> x;
		int a[n + 1];
		int b[100000] = {0};
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[a[i]]++;
		}
		for(int i = 0; i < n; i++){
			if(a[i] == x){
				kt = 0;
				cout << b[a[i]] << endl;
	            break;
			}
			else {
			   kt = 1;	
			}
		}
		if(kt == 1) cout << -1 << endl;
	}
	return 0;
}

