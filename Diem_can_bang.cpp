#include<bits/stdc++.h>
using namespace std;

void Try(int a[], int n){
	int Sum = 0;
	for(int i = 0; i < n; i++) Sum += a[i];
	int  SumR = Sum , SumL = 0, kt = 0;
    for(int i = 0; i < n ;i++){
    	SumR -= a[i];
    	if(SumR == SumL) {
    		cout << i + 1;
    		kt = 1;
    		break;
		}
		SumL += a[i];
	}
   	if( kt != 1) cout << -1;

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

