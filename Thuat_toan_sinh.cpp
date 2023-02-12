#include<bits/stdc++.h>
using namespace std;
int n, b[100];
bool check(){
	for(int i = 0; i < n/2; i++){
		if(b[i] != b[n - i - 1]) return false;
	}
	return true;
}
void in(){
	if(check()){
		for(int i = 0; i < n; i++){
			cout << b[i] << " ";
		}
		cout << endl;
	}
}
void Try(int i){
	for(int j = 0; j <= 1; j++){
		b[i] = j;
		if(i == n - 1) in();
		else Try(i + 1);
	}
}
int main(){
	cin >> n;
	Try(0);
	return 0;
}
