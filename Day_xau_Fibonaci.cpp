#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int F[100];

char FiboWord(int n, long long k){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(k <= F[n-2]) return FiboWord(n - 2, k);
	if(k > F[n-2]) return FiboWord(n - 1, k - F[n - 2]);
}

int main(){
	fast();
	
	F[0] = 0; F[1] = 1;
	for(int i = 2; i < 93; i++){
		F[i] = F[i-2] + F[i-1];
	}
	
	int t;
	cin >> t;
	while(t--){
		int n;
		long long k;
		cin >> n >> k;
		cout << FiboWord(n, k) << endl;
	}
	return 0;
}

