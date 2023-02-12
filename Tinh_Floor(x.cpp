#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int main(){
	fast();
	int t;
	cin >> t;
	while(t--)
	{
		long long n, x;
		cin >> n >> x;
		long long a[n], b[100] = {0};
		stack<int>st;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] <= x) st.push(a[i]);
		}
		if(st.size() == 0) cout << -1;
		else cout << st.size();
		cout << endl;
	}
	return 0;
}

