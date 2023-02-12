#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define PI 3.141592653589793238
//cout << fixed << setprecision(2) << total;
int main(){
	faster();
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n + 1], b[m + 1];
		int d[100000] = {0};
		vector <int> v1;
		vector <int> v2;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			v2.push_back(a[i]);
			d[a[i]]++;
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
			if(d[b[i]] == 0) v2.push_back(b[i]);
			d[b[i]]++;
			if(d[b[i]] == 2) v1.push_back(b[i]);
		}
		sort(v2.begin(), v2.end());
		sort(v1.begin(), v1.end());
		for(int i = 0; i < v2.size(); i++){
			cout << v2[i] << " ";
		}
		cout << endl;
		for(int i = 0; i < v1.size(); i++){
			cout << v1[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

