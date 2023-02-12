#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int fib(int n){
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	for(int i = 2; i <= n; i++){
		long long sum = v[i-1] + v[i-2];
		v.push_back(sum);
	}
	return v[n];
}

int main(){
	fast();
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << fib(n);
		cout << endl;
	}
	return 0;
}

