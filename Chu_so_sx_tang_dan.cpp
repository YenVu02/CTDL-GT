#include<bits/stdc++.h>
using namespace std;

int check(int n){
	int d = n%10;
	n/=10;
	while(n>0){
		int x = n%10;
		if(d < x) return 0;
		d = x;
		n/=10;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
	    int k=1;
	    for(int i = 0; i < n; i++) k *=10;
	    int count = 0;
	    for(int i = 0; i < k; i++) if(check(i) == 1) cout << i << " ";
	//	cout << count << endl;
	
	}
	return 0;
}


