#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int n, k, a[100], b[100], cnt = 0;

void init(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a+1, a+n+1);
}

void check(){
	int sum = 0;
	vector<int> res;
	for(int i = 1; i <= n; i++){
		sum += a[i]*b[i];
		if(b[i] == 1) res.push_back(a[i]);
	}
	if(sum == k){
		cnt = 1;
		cout << "[";
		for(int i = 0; i < res.size() - 1; i++){
			cout << res[i] << " ";
		}
		cout << res.back() << "] ";
	}
}

void Try(int i){
	for(int j =1; j >=0 ;j--){
		b[i] = j;
		if(i == n) check();
		else Try(i+1);
	}
}

int main(){
	fast();
	int t;
	cin >> t;
	while(t--){
		init();
		Try(1);
		if(cnt == 0) cout << -1;
		cout << endl;
		cnt = 0;
	}
	return 0;
}

