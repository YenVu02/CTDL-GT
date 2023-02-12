#include<bits/stdc++.h>
using namespace std;
int n, a[100], b[100];

void init(){
    cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++) b[i] = i;	
}
bool check(){
	for(int i = 1; i <= n; i++){
		if(a[i] != b[i]) return false;
	}
	return true;
}
void next(){
	int i = n - 1;
	while(i > 0 && b[i] > b[i + 1] ) i--;
	if(i == 0) return;
	else{
		int j = n;
		while(b[i] > b[j]) j--;
		swap(b[i], b[j]);
		int l = i + 1, r = n;
		while(l < r){
			swap(b[l], b[r]);
			l++, r--;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		int d = 0;
		while(!check()){
			next();
			d++;
		}
		cout << d + 1 << endl;
	}
	return 0;
}

