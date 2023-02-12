#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int main()
{
	fast();
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    priority_queue<int, vector<int>, greater <int> > pq;
	    for(int i = 0; i < n; i++)
	    {
	    	int x; 
	    	cin >> x;
	    	pq.push(x);
		}
		long long sum = 0;
		while(pq.size() >= 2){
			long long a = pq.top();
			pq.pop();
			long long b = pq.top();
			pq.pop();
			long long s = a + b;
			pq.push(s);
			sum += s;
		}
		cout << sum << endl;
	}
	return 0;
}

