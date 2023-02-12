#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int best_value(int a[], int c[], int n, int v){
	int dp[n+1][n+1] = {0};
	for(int i = 1; i <= n; i++){
		dp[i][0] = 0;
		dp[0][i] = 0;
	}
	int Max = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= v; j++){
		    dp[i][j] = max(dp[i-1][j], (a[i] <= j) ? c[i] + dp[i-1][j - a[i]] : 0);
		}
	}
	return dp[n][v];
}

int main(){
	fast();
	int t;
	cin >> t;
	while(t--){
		int n, v;
		cin >> n >> v;
		int a[n + 1], c[n + 1];
		for(int i = 1; i <= n; i++) cin >> a[i];
		for(int i = 1; i <= n; i++) cin >> c[i];
		cout << best_value(a, c, n, v) << endl;
	}
	return 0;
}

