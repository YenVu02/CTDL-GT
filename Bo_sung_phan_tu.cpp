#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

int main(){
	faster();
    int t; cin >> t;
	while(t--){
		int n, count = 0;
		cin >> n;
		long long a[n + 1];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		for(int i = 0; i < n - 1; i++){
			if((a[i + 1] - a[i]) != 1) count+= a[i + 1] - a[i] - 1;
		}
		cout << count << endl;
	}	
	return 0;
}

