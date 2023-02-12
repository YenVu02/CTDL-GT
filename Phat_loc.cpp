#include<bits/stdc++.h>
using namespace std;

int n, a[20];

void init(){
	cin >> n;
}

bool check(){
	for(int i = 1; i <= n; i++){
		if(!a[1] || a[n]) return false;
	    if(a[i]){
			if(a[i + 1]) return false;
		}
		else if(i <= n - 3){
			if(!a[i + 1] && !a[i + 2] && !a[i + 3]) return false;
		}
	}
	return true;
}

void print(){
	if(!check()) return;
	for(int i = 1; i <= n; i++){
		if(a[i]) cout << "8";
		else cout << "6";
	}
	cout << endl;
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		if(a[i] && j) return;
		a[i] = j;
		if(i == n) print();
		else Try(i + 1);
	}
}

int main(){
	init();
	Try(1);
}
