#include<bits/stdc++.h>
using namespace std;

void Try(int a[], int n){
	int kt = 0;
	for(int i = 0; i < n - 1; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] - a[j] > 0){
				cout << j - i;
				return;
			}
			else kt = 1;
		}
	}
	if(kt==1) cout << 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
	    cin >> n;
	    int a[n];
	    for(int i = 0; i < n; i++){
	    	cin >> a[i];
	    }
		Try(a, n);
		cout << endl;
	}
	return 0;
}

