#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

long long f[100] = {0};

long long fibo(int n){
	if(n < 2){
		f[n] = n;
		return n;
	}
	if(f[n] == 0){
		f[n] = fibo(n - 1) + fibo(n - 2);
	}
	return f[n];
}

int main(){
	fast();
	cout << fibo(50);
	return 0;
}

