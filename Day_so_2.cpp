#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int main(){
	fast();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1], m[n+1][n+1];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			m[0][i] = a[i];
		}
		for(int i = 1; i < n; i++){
			for(int j = 0; j < n - i; j++){
				m[i][j] = m[i-1][j] + m[i-1][j+1];
			}
		}
		for(int i = n-1; i >= 0; i--){
			cout <<"[";
			for(int j = 0; j < n-i-1; j++){
				cout << m[i][j] << " ";
			}
			cout << m[i][n-i-1] << "] ";
		}
		cout << endl;
	}
	return 0;
}


