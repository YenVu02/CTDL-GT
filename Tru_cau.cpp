
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);\
				cin.tie(NULL);\
				cout.tie(NULL);
#define endl "\n"
#define memset(b,x,size) memset(b,x,sizeof(b))
#define all(v) v.begin(),v.end()
#define mod 1000000007
vector<int>a[100009];
int check[100009],n ,m,tplt=0;
vector<pair<int,int>>c;
void dfs(int u)
{
	check[u]=1;
	for(auto x:a[u])
	{
		if(check[x]==0)dfs(x);
	}
}
void tru()
{
	int kq=0;
	memset(check,0,size);
	for( int i=1;i<=n;i++)
	{
		memset(check,0,size);
		check[i]=1;
		int demtplt=0;
		for(int j=1;j<=n;j++)
		{
			if(!check[j])
			{
				demtplt++;
				dfs(j);
			}
			
		}
	
		if(demtplt>tplt)kq++;
	}
	cout<<kq<<" ";
}
void ndfs(int u,int x,int y)
{
	check[u]=1;
	for(auto i: a[u])
	{
		if((u==x&&i==y)||(u==y&&i==x))continue;
		if(!check[i])ndfs(i,x,y);
	}
}
void cau()
{
	int kq=0;
	memset(check,0,size);
	for(auto x:c)
	{
		memset(check,0,size);
		int demtplt=0;
		for(int i=1;i<=n;i++)
		{
			if(!check[i])
			{
				demtplt++;
				ndfs(i,x.first,x.second);
			}
		}
		if(demtplt>tplt)kq++;
	}
	cout<<kq;
}
int main()
{
	faster();
	int  u , v;
	cin >> n >> m ;
	for(int i=0;i<m;i++)
	{
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
		c.push_back({u,v});
	}
	memset(check,0,size);
	for(int i=1;i<=n;i++)
	{
		if(check[i]==0)
		{
			tplt++;
			dfs(i);
		}
	}
	tru();
	cau();

}
