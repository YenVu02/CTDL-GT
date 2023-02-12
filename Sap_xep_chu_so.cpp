#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, i, k;
		cin >> n;
		set<int> s;
		long long a[n + 1];
		for(i = 0; i < n; i++){
			cin >> a[i];
			long long x;
			x = a[i];
			while(x > 0){
				k = x % 10;
				s.insert(k);
				x/=10;
			}
		}
		for (set<int>:: iterator it = s.begin(); it != s.end(); it++){
	    	cout<< *it << " ";
    	}
		cout << endl;
	}
}
