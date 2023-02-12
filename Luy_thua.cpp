#include<bits/stdc++.h>
#define MOD 1000000007

using namespace std;

int pow1(int a, int b){
	if(b == 0) return 1;
	else{
		long long x = pow1(a, b/2);
		if(b % 2==0){
			return (x * x) % MOD;
		}
		return a * (x * x % MOD) % MOD;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		cout << pow1(n, k) << endl;
	}
	return 0;
}

