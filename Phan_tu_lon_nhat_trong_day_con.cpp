#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k, max; cin >> n >> k;
		long long a[n + 1];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n - k + 1; i++){
			max = i;
			for(int j = i; j < i + k; j++){
				if(a[j] > a[max]){
					max = j;
				}
			}
			cout << a[max] << " ";
		}
		cout << endl;
	}
	return 0;
}

