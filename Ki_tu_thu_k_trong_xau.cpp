#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

void ki_tu(int n, int k){
	long long x = pow(2,  n-1);
	if(k == x) cout << char('A' + n - 1);
	else if(k < x) ki_tu(n-1, k);
	else ki_tu(n-1, k-x);
}

int main(){
	fast();
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		ki_tu(n, k);
		cout << endl;
	}
	return 0;
}

