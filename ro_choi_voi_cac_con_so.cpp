#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int n, a[100];
bool b[100];

void print()
{
	for(int i = 2; i <= n; i++)
	{
		if(abs(a[i] - a[i-1]) == 1) return;
	}
	for(int i = 1; i <= n; i++)
	{
		cout << a[i];
	}
	cout << endl;
}

void Try(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(b[j] == false)
		{
			a[i] = j;
			b[j] = true;
			if(i == n) print();
			else Try(i+1);
			b[j] = false;
		}
	}
}

int main(){
	fast();
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		Try(1);
		cout << endl;
	}
	return 0;
}

