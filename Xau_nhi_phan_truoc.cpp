#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); 

using namespace std;

string s;
int a[1005], n;

void init(){
	cin >> s;
    n = s.size();
	for(int i = 0; i < s.size(); ++i){
		a[i + 1] = s[i] - '0';
	}
}
void print(){
	for(int i = 1; i <= n ;++i){
		cout << a[i];
	}
	cout << endl;
}
void next(){
	int i = n;
	
	while(i > 0 && !a[i]){
		a[i] = 1;
		--i;
	}
	a[i] = 0;
	print();
}
int main(){
	//fast();
	int t;
	cin >> t;
	//cin.ignore();
	while(t--){
		init();
		next();
	}
}
