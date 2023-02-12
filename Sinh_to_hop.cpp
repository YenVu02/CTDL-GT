#include<bits/stdc++.h>
using namespace std;
int n, k, b[100];
void in(){
	for(int i = 1; i <= k; i++){
		cout << b[i];
	}
	cout << " ";
}
void Try(int i){
	for(int j = b[i - 1] + 1; j <= n - k + i; j++){
		b[i] = j;
		if(k == i) in();
		else Try(i + 1);
	}
}
int main(){
	int t; 
	cin >> t;
	while(t--){
		cin >> n >> k;
		Try(1);
		cout << endl;
	}
	return 0;
}

