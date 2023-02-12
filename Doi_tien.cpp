#include<bits/stdc++.h>
using namespace std;

int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, d = 0;
		cin >> n;
		for(int i = 9; i >= 0; i--){
			while(n >= a[i]){
				n-= a[i];
				d++;
			}
		}
		cout << d << endl;
	}
	return 0;
}

