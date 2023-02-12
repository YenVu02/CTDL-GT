#include<bits/stdc++.h>
using namespace std;

int n, k;
int s[100];

bool check(){
	for(int i = 1; i <= n; i++){
		if()
	}
}

void print(){
	for(int i = 1; i <= n; i++){
		cout << (char) (s[i] + 'A');
	}
	cout << endl;
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		s[i] = j;
		if(i == n) print();
		else Try(i + 1);
	}
}

int main(){
	cin >> n >> k;
	Try(1);
}
