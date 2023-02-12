#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int main(){
	fast();
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n-1; i++) cin >> b[i];
		for(int i = 0; i < n; i++){
			if(a[i] != b[i]){
				cout << i+1 << endl;
				break;
			}
		}
	}
	return 0;
}

