#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[16];

void print(){
	for(int i = 1; i <= k; i++){
		cout << (char) (a[i] + 'A' - 1);
	}
	cout << endl;
}

void Try(int i){
	for(int j = a[i -1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(k == i) print();
		else Try(i + 1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		Try(1);
	}
	return 0;
}

