#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

bool a[100];
char x, c[100];

void print(){
	for(int i = 2; i <= x - 'A'; i++){
		if(c[i] == 'A' && c[i-1] != 'E' && c[i+1] != 'E') return;
		if(c[i] == 'E' && c[i-1] != 'A' && c[i+1] != 'A') return;
	}
	for(int i = 1; i <= x - 'A' + 1; i++){
		cout << c[i];
	}
	cout << endl;
}

void Try(int i){
	for(int j = 'A'; j <= x; j++){
		if(c[j] == false){
			c[i] = j;
			c[j] = true;
			if(i == (x-'A'+1)) print();
			else Try(i+1);
			c[j] = false;
		}
	}
}

int main(){
	fast();
	cin >> x;
	Try(1);
	return 0;
}

