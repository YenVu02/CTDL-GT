#include<bits/stdc++.h>
using namespace std;
int n, k, a[100], b[100];
void init(){
	cin >> n >> k;
	for(int i = 1; i <= k; i++) cin >> a[i];
	for(int i = 1; i <= k; i++) b[i] = i;
}
bool check(){
	for(int i = 1; i <= k; i++){
		if(a[i] != b[i]) return false;
	}
	return true;
}
void next(){
	int i = k;
	while(i > 0 && b[i] >= n - k + i) i--;
	if(i == 0) return;
	else{
		b[i]++;
		for(int j = i + 1; j <= k; j++){
			b[j] = b[i] + j - i;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int d = 0;
		init();
		while(!check()){
			next();
			d++;
		}
		cout << d + 1<< endl;
	}
	return 0;
}

