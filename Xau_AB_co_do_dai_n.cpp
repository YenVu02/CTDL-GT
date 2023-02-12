#include<bits/stdc++.h>
using namespace std;
int n, b[1000];
string s;
void printf(){
	for(int i = 1; i <= n; i++){
		cout << s[i];
	}
	cout << " ";
}
void Try(int i){
	for(int j = 'A'; j <= 'B'; j++){
		s[i] = j;
		if(i == n) printf();
		else Try(i + 1);
	}
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		cin >> n;
		Try(1);
		cout << endl;
	}
	return 0;
}

