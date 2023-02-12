#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int recursion(int n, long long  k){
    long long x = pow(2, n);
	if(k == x) return n;
	if( k < x) return recursion(n - 1, k);
	if(k > x) return recursion(n - 1, k - x);
}

int main(){
    faster();
	int t;
	cin >> t;
	while(t--){
		int n;
		long long k;
		cin >> n >> k;
		int x =  recursion(n - 1, k);
		cout <<x + 1 << endl;
	}
	return 0;
}
