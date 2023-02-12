#include<bits/stdc++.h>
using namespace std;

int a[100], n;
string s;

void print(){
	string gray = "";
	gray = s[0];
	for(int i = 1; i < n; i++){
		int k = gray.size() -1;
		if(gray[k] != s[i]) gray += "1";
		else gray += "0";
	}
	cout << gray;
	cout << endl;
}

void Try(int i){
	
	for(int j = '0'; j <= '1'; j++){
		a[i] = j;
		if(i == n) print();
		else Try(i+1);
	}
}

int main(){
	
	int t;
	cin >> t;
	
	while(t--){

		cin >> n;
		
	}
	return 0;
}

