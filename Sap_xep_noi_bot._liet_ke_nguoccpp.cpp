#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
	while(t--){
		int n, k = 1; cin >> n;
		int a[n + 1], b[n + 1][n + 1];
		for(int i = 0; i < n; i++) cin >> a[i];
	    while(1){
	    	int kt = 0;
	    	for(int i = 0; i< n - 1; i++){
		    	if(a[i] > a[i + 1]){
			    	kt = 1;
			    	swap(a[i], a[ i+ 1]);
		    	}
	    	}
	     	if(kt == 0) break;
	      	for(int i = 0; i < n; i++){
		    	b[k][i] = a[i];
		    }
		    k++;
		}
	    for(int i = k - 1; i > 0; i--){
	    	cout << "Buoc " << i << ": ";
	    	for(int j = 0; j < n; j++){
	    		cout << b[i][j] << " ";
			}
			cout << endl;
		}
	}	
	return 0;
}

