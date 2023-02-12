#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

void cnt(int s, int t){
	long a[20000];
	for(int i = 0; i < 20000; i++) a[i] = INT_MAX;
	queue <int> q;
	q.push(s);
	a[s] = 0;
	while(q.empty() == 0){
		int x = q.front();
		q.pop();
		if(x-1 > 0 && a[x-1] == INT_MAX){
			a[x-1] = min(a[x-1], a[x] + 1);
			q.push(x-1);
		}
		if(x*2 < 20000 && a[2*x] == INT_MAX){
			a[2*x] = min(a[2*x], a[x]+1);
			q.push(x*2);
		}
	}
	cout << a[t] << endl;
}

int main(){
	fast();
	int t;
	cin >> t;
	while(t--){
		int s, t;
		cin >> s >> t;
		cnt(s, t);
	}
	return 0;
}

