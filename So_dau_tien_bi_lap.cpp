#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
	faster();
	int t;
	cin >> t;
	while(t--){
		long long n, kt = 0;
		cin >> n;
		long long a[n + 1];
	    for(int i = 0; i < n; i++) cin >> a[i];
	    for(int i = 0; i < n - 1; i++){
	    	for(int j = i + 1; j < n; j++){
	    		if(a[i] == a[j]){
	    			cout << a[i];
	    			kt = 1;
	    			break;
				}
			}
			if(kt == 1) break;
		}
		if(kt == 0) cout << "NO";
		
		cout << endl;
	}
	return 0;
}

