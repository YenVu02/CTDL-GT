#include <bits/stdc++.h>
#define endl '\n'
#define toint(a) (int) a - '0'
using namespace std;
using pii = pair<int, int>;
using ll = long long;
int n, a[20][20], ok;
char path[50];
void print()
{
	ok = 1;
	for(int i = 1; i <= 2*(n-1); i++)
		cout << path[i];
	cout << " ";
}
void inp()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
}
void Try(int i, int x, int y)
{
	if(x+1 <= n && a[x+1][y])
	{
		path[i] = 'D';
		if(i == 2*(n-1))
			print();
		Try(i+1, x+1, y);
	}
	if(y+1 <= n && a[x][y+1])
	{
		path[i] = 'R';
		if(i == 2*(n-1))
			print();
		Try(i+1, x, y+1);
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int test; cin >> test;
	while(test--)
	{
		inp(); ok = 0;
		if(a[1][1] == 0)
			cout << -1 << endl;
		else
		{
			Try(1, 1, 1);
			if(!ok) cout << -1;
			cout << endl;
		}
		
	}
	return 0;
}
//4
//
//0 20 35 10
//
//20 0 90 50
//
//35 90 0 12
//
//10 50 12 0
