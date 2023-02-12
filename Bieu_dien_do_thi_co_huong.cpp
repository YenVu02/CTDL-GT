#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int n, m;
vector <int> v[1001];

void solve(){
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++) v[i].clear();
	
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
	}
	
	for(int i = 1; i <= n; i++){
		cout << i << ": ";
		for(int j = 0; j < v[i].size(); j++){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	fast();
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}

