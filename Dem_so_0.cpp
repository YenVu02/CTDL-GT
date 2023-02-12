#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

long long n, a[1000];

int count0(int d, int c){
	int mid = ( d + c) / 2;
	if(mid > 0 && a[mid] == 1 && a[mid - 1] == 0) return mid;
	if(mid < n - 1 && a[mid] == 0 && ( mid == n -1 || a[mid + 1] == 1)) return mid + 1;
	if(a[mid] == 1) return count0(d, mid - 1);
	if(a[mid] == 0) return count0(mid + 1, c);
}

int main(){
	fast();
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		if(a[0] == 1) cout << 0;
		else if(a[n - 1] == 0) cout << n;
		else cout << count0(0, n - 1);
		cout << endl;
	}
	return 0;
}

