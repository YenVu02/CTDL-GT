#include<bits/stdc++.h>
using namespace std;

int n, a[100], b[100];
bool c[100];

void init(){
	cin >> n ;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
}

void print(){
	for(int i = 1; i <= n; i++){
		cout << a[b[i] - 1] << " ";
	}
	cout << endl;
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(c[j] == false){
			b[i] = j;
			c[j] = true;
			if(i == n) print();
			else Try(i + 1);
			c[j] = false;
		}
	}
}

int main(){
	init();
	Try(1);
	return 0;
}

