#include<bits/stdc++.h>
using namespace std;

int x[100005], y[100005];
map <int, int> mp;
long long check(int k, long long m){
	long long p= m;
	if(k==0) return 0;
	if(k==1) return mp[0];
	if(k==2){
		p= upper_bound(y, y+m, 4)-y; 
		return m-p+mp[0]+mp[1];
	} 
	if(k==3){
		p= upper_bound(y, y+m, k)-y;
		return m-p+mp[0]+mp[1]+mp[2];
	}
	else p= upper_bound(y, y+m, k)-y;
	return m-p+mp[0]+mp[1];
}

int main(){
	int t; cin>> t;
	while(t--){
		long long count= 0, n, m;
		cin>> n>> m;
		for(int i= 0; i< n; i++) cin>> x[i];
		for(int i= 0; i< m; i++){
			cin>> y[i];
			mp[y[i]]++;
		} 
		sort(y, y+m);
		for(int i= 0; i< n; i++){
			count+= check(x[i], m);
		}
		cout<< count<< "\n";
		mp.clear();
	}
}


