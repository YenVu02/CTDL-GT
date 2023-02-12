#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

void hanoitower(int n, char a, char b, char c){
	if(n == 1){
		cout << a << " -> " << c << endl;
		return;
	}
	hanoitower(n-1, a, c, b);
	hanoitower(1, a, b, c);
	hanoitower(n-1, b, a, c);
}

int main(){
	fast();
	int n;
	cin >> n;
	char a = 'A';
	char b = 'B';
	char c = 'C';
	hanoitower(n, a, b, c);
	return 0;
}

