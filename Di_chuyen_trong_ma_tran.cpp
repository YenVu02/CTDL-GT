#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int main(){
	fast();
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n+1][m+1], d[n+1][m+1], vitri[n+1][m+1];
		memset(d, 0, sizeof(d));
		memset(vitri, 0, sizeof(vitri));
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin >> a[i][j];
			}
		}
		queue <pair <int, int> > q;
		q.push({1, 1});
		while(!q.empty()){
			pair <int, int> p = q.front();
			q.pop();
			int i = p.first;
			int j = p.second;
			int k = a[i][j];
			if(i == n && j == m) break;
			if(i + k <= n && !vitri[i+k][j]){
				q.push({i+k, j});
				d[i+k][j] = d[i][j] + 1;
				vitri[i+k][j] = 1;
			}
			if(j + k <= m && !vitri[i][j+k]){
				q.push({i, j+k});
				d[i][j+k] = d[i][j] + 1;
				vitri[i][j+k] = 1;
			}
		}
		if(d[n][m]) cout << d[n][m];
		else cout << -1;
		cout << endl;
	}
	return 0;
}

