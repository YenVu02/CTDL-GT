#include<bits/stdc++.h>
#define mod 123456789

using namespace std;

long long exponential(long long n){
	if(n == 0) return 1;
	else{
		long long x = exponential(n/2);
		if(n % 2 == 0) return x * x % mod;
		else return 2 * (x * x % mod) % mod;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << exponential(n - 1) << endl;
	}
	return 0;
}

