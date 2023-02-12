#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n + 1];
		long long s1 = 0, s2 = 0, s = 0;
		for(int i = 0;  i < n; i++) cin >> a[i];
		sort(a, a + n);
		for(int i = 0; i < n; i++){
			if(i % 2 == 0){
				s1 = a[i] + 10 * s1;
			}
			else s2 = a[i] + 10 * s2;
		}
		cout << s1 + s2 << endl;
	}
	return 0;
}

