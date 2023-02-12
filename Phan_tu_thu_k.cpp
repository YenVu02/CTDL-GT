#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int main(){
	fast();
	int t;
	cin >> t;
	while (t--)
	{
		int m, n, k;
		cin >> m >> n >> k;
		int c[n+m];
		for(int i = 0; i < m+n; i++){
			cin >> c[i];
		}
		sort(c, c+m+n);
		cout <<c[k-1]<<endl;
	}
	return 0;
}

