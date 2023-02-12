#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

long long exponential(long long a, long long b){
	if(b == 0) return 1;
	else{
		long long x = exponential(a, b/2);
		if(b % 2 == 0) return x * x % mod;
		else return a * (x * x % mod) % mod;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long m = n, dao = 0;
		while(m > 0){
			dao = dao * 10 +  m % 10;
			m/=10;
		}
		cout << exponential(n, dao) << endl;
	}
	return 0;
}

