#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int qhd(int a[], int n){
	int f[1005], d = 0;
	for(int i = 0; i < n; i++){
		f[i] = 1;
		for(int j = 0; j < i; j++){
			if(a[j] <= a[i]) f[i] = max(f[i], f[j] + 1);
		}
		d = max(d, f[i]);
	}
	return n-d;
}

int main(){
	fast();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1];
		for(int i = 0; i < n; i++) cin >> a[i];
		cout << qhd(a, n) << endl;
	}
	return 0;
}

