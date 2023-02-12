#include<bits/stdc++.h>
using namespace std;
int ngto(int n){
	if(n < 2) return 0;
	else{
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0) return 0;
		}
		return 1;
	}
}
int main(){
	int t;
	 cin >> t;
	 while(t--){
	 	int n, kt = 1;
	 	cin >> n;
	 	for(int i = 2; i < n; i++){
	 	    if(ngto(n - i) == 1 && ngto(i) == 1 ){
	 	    	kt = 0;
	 	    	cout << i << ' ' << n - i << endl;
	 	    	break;
			 }
			 else kt = 1;
		}
		if(kt == 1) cout << "-1" << endl;;
		
	 }
	return 0;
}

