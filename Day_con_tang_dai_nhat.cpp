#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int lis(int a[], int n){
	int result = 1;
	int f[n];
	f[0] = 1;
	for(int i = 1; i < n; i++){
		f[i] = 1;
		for(int j = 0; j < i; j++){
			if(a[i] > a[j]){
				f[i] = max(f[i], f[j] + 1);
			}
		}
		result = max(result, f[i]);
	}
	return result;
}

int main(){
	fast();
	int n;
	cin >> n;
	int a[n + 1];
	for(int i = 0; i < n; i++) cin >> a[i];
	cout << lis(a, n);
	return 0;
}

