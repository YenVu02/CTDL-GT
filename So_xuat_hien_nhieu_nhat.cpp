#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, max = 0, j;
		cin >> n;
		int a[n + 1], b[100000] = {0};
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[a[i]]++;
		}
		for(int i = 0; i < n; i++){
			if(b[a[i]] > max){
				max = b[a[i]];
				j = a[i];
			}
		}
		if(max > float(n/2)) cout  << j << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

