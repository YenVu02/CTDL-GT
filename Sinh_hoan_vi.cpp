#include<bits/stdc++.h>
using namespace std;
bool  b[100];
int n, a[1000];
void in(){
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << " ";
}
void Try(int i){
	for(int j = 1; j <= n; j++){
		if(b[j] == false) {
			a[i] = j;
			b[j] = true;
			if(i == n) in();
			else Try(i + 1);
			b[j] = false;
        }
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
		cout << endl;
	}
	return 0;
}

