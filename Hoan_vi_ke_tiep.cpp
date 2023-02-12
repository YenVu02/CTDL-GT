#include<bits/stdc++.h>
using namespace std;
int n, a[1000];
void init(){
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
}
void printf(){
	for(int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
}
void hvi(int a[], int n){
	int i = n - 1;
	while(i >= 0 && a[i] > a[i + 1]) i--;
	if(i <= 0){
		for(int j = 1; j <= n; j++){
			a[j] = j;
		}
	}
	else{
		int k = n;
		while(a[k] < a[i]) k--;
		swap(a[i], a[k]);
		int l = i + 1, r = n;
		while(l < r){
			swap(a[l], a[r]);
			l++, r--;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		hvi(a, n);
		printf();
		cout << endl;
	}
	return 0;
}
