#include<bits/stdc++.h>
using namespace std;
int n, a[100];

void print (){
	cout << "HA";
		for(int i = 1; i <= n - 3; i++){
	        if(a[i]) cout << "H";
	        else cout << "A";
    	}
	    cout << "A" << endl;
	
}
void Try(int i){
	for(int j = 0; j <= 1; j++){
		if(a[i-1] && j) return;
		a[i] = j;
		if(i == n-3) print();
		else Try(i + 1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		if(n == 2) cout << "HA";
		if(n == 3) cout << "HAA";
		if(n > 3)Try(1);
		cout << endl;
	}
	return 0;
}

