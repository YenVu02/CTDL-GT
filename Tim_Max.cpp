#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, s = 0;
		cin >> n;
		long long a[n + 1];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
	    for(int i = 0; i < n; i++){
	    	s += (a[i] * i) % MOD;
		}
		cout << s % MOD << endl;
	}
	return 0;
}

