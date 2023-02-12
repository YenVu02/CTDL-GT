#include<bits/stdc++.h>
typedef long long ll;
ll len[100];

using namespace std;

void TinhLen(){
	len[1] = len[2] = 1;
	for(int i = 3; i <= 93; i++){
		len[i] = len[i - 1] + len[i - 2];
	}
}

char Fib(int n, ll k){
	if( n == 1) return '0';
	if(n == 2) return '1';
	if( k > len[n - 2]) return Fib(n - 1, k - len[n-2]);
	return Fib(n - 2, k);
}

int main(){
	int t;
	TinhLen();
	cin >> t;
	while(t--){
		int n;
		ll k;
		cin >> n >> k;
		cout << Fib(n, k) << endl;
	}
	return 0;
}

