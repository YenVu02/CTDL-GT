#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int main(){
	fast();
	int t;
	cin >> t;
	while(t--){
		long long n, cnt = 0;
		cin >> n;
		queue <long long> q;
		q.push(1);
		while(!q.empty()){
			long long x = q.front();
			q.pop();
			if(x <= n){
				cnt++;
			}
			else break;
			q.push(x*10);
			q.push(x*10+1);
		}
		cout << cnt << endl;
	}
	return 0;
}

