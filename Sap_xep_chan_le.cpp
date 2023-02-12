#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	long long x;
	vector<long long> v1;
	vector<long long> v2;
	for(int i = 1; i <= n; i++){
		cin >> x;
		if(i % 2 == 0) v1.push_back(x);
		else v2.push_back(x);
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	int l = v1.size() - 1;
	for(int i = 0; i < v2.size(); i++){
		cout << v2[i] << " ";
		if(l >= 0) cout << v1[l] << " ";
		l--;
	}

	return 0;
}

