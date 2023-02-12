#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

long long exponential(long long a, long long b){
	if(b == 0) return 1;
	else{
		long long x = exponential(a, b/2);
     	if(b % 2 == 0) return (x * x )% mod;
    	else return a  * (x * x % mod) % mod;
	}
}

int main(){
	while(1){
		long long a, b;
		cin >> a >> b;
		if(a == 0 && b == 0) return 0;
		cout << exponential(a, b) << endl;
	}
	
}

