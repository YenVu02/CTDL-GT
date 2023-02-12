#include<bits/stdc++.h>
using namespace std;
int n, k, a[1000];
void init(){
	cin >> n >> k;
	for(int i = 1; i <= k; i++) cin >> a[i];
}
void printf(){
	for(int i = 1; i <= k; i++) cout << a[i] << " ";
}
void solve(){
	int i = k;
	while(a[i] >= n - k + i && i > 0) i--;
	if(i== 0){
		for(int j = 1; j <= k; j++){
			a[j] = j;
		}
	}
	else{
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[i] + j - i;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		solve();
		printf();
		cout << endl;
	}
	return 0;
}
