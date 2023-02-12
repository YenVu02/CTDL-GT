#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int main()
{
	fast();
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		cin >> s;
		int a[100] = {0}, len = s.size(), Max = 0;
		for(int i = 0; i < len; i++)
		{
			a[s[i] - 'a']++;	
		}
		for(int i = 0; i < len; i++)
		{
			Max = max(Max, a[s[i] - 'a']);
		}
		if(Max > (len+1)/2) cout << -1;
		else cout << 1;
		cout <<endl;
	}
	return 0;
}

