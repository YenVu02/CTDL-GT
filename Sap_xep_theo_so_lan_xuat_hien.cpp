#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n + 1], b[100000] = {0};
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[a[i]]++;
		}
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				if(b[a[i]] < b[a[j]]) swap(a[j], a[i]);
				else if(b[a[i]] == b[a[j]] && a[i] > a[j]) swap(a[i], a[j]);
			}
		}
		for(int i = 0; i < n; i++) cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}

