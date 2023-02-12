#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;
// dp[i][j]: xet den con bo thu i, lay duoc khoi luong j
// dp[i][0] = dp[0][j] = 0;
// dp[i][j] = dp[i-1][j];
// neu j >= w[i];
// dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]);
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; t = 1;
	while(t--)
	{
		int C, N, W[101];
		cin >> C >> N;
		for(int i = 1; i <= N; i++)
			cin >> W[i];
		int dp[N+1][C+1];
		for(int i = 0; i <= N; i++)
			dp[i][0] = 0;
		for(int j = 0; j <= C; j++)
			dp[0][j] = 0;
		for(int i = 1; i <= N; i++)
		{
			for(int j = 1; j <= C; j++)
			{
				dp[i][j] = dp[i-1][j];
				if(j >= W[i])
					dp[i][j] = max(dp[i][j], dp[i-1][j-W[i]]+W[i]);
			}
		}
		cout << dp[N][C];
	}
	return 0;
}


