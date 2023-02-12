#include<bits/stdc++.h>
using namespace std;
int n, k, b[1000], dem=0;
void printf(){
		for(int i = 1; i <= n; i++){
	    	cout << b[i];
    	}
    	dem++;
    	cout << endl;
}
void Try(int i, int l){
	for(int j = 0; j <= 1; j++){
		b[i] = j;
		if(j) l++;
		if(l > k) return;
		if(i == n){
			if(k == l) printf();
		}
		else Try(i + 1, l);
	}
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		cin >> n >> k;
		Try(1,0);
		cout << endl;
		cout <<"dem = " << dem;
	}
	return 0;
}

