#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n + 1], min = 100000000;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a  + n);
		for(int i = 0; i < n - 1; i++){
			if(a[i + 1] - a[i] < min){
				min = a[i + 1] - a[i];
			}
		}
		cout << min << endl;
	}	
	return 0;
}

