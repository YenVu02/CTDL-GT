#include<bits/stdc++.h>
using namespace std;
int n, k, a[100], b[100];
void init(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++) a[i] = 0;
	for(int i = 1; i <= k; i++){
		cin >> b[i];
		a[b[i]] = 1;
	}
}
void Next(){
	int i = k, d = 0;
	while(i > 0 && b[i] >= n - k + i) i--;
	if(i == 0) d = k;
	else{
		b[i]++;
		if(!a[b[i]]) d++;
		for(int j = i + 1; j <= k; j++){
			b[j] = b[i] + j - i; 
			if(!a[b[j]]) d++;
		}
	}
	cout << d;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		Next();
		cout << endl;
	}
}
