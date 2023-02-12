#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>> t;
	while(t--){
		int n, k; cin>> n>> k;
		int a[n], ok= 0;
		for(int i= 0; i< n; i++) cin>> a[i];
		sort(a, a+n);
		for(int i= 0; i< n-2; i++){
			for(int j= i+1; j< n-1; j++){
				bool x=  binary_search (a+j+1, a+n, k-a[i]-a[j]);
				if(x){
					ok= 1; break;
				}
			}
			if(ok) break;
		}
		if(ok) cout<< "YES\n";
		else cout<< "NO\n";
	}
}


