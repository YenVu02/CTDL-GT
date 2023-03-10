#include <bits/stdc++.h>
using namespace std;
bool div(string s, int n)
{
	int ans = 0;
	for(int i = 0; i < s.length(); i++)
	{
		ans = (10*ans + s[i] - '0')%n;
	}
	return ans == 0;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		queue <string> q;
		q.push("9");
		while(!q.empty())
		{
			string x = q.front(); q.pop();
			if(div(x, n))
			{
				cout << x << '\n';
				break;
			}
			q.push(x+"0");
			q.push(x+"9");
		}
	}
	return 0;
}

