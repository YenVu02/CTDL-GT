#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int k;
char c1, c[20];

void print(){
	for(int i = 1; i <= k; i++){
		cout << c[i];
	}
	cout << endl;
}

void Try(int i){
	for(int j = c[i-1]; j <= c1; j++){
		c[i] = j;
		if(i == k) print();
		else Try(i+1);
	}
}

int main(){
	fast();
	memset(c, 'A', sizeof(c));
	cin >> c1 >> k;
	Try(1);
	return 0;
}

