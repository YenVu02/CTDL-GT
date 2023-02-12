#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n + 1];
	for(int i = 0; i < n; i++) cin >> a[i];
	vector<int> v;
	for(int i = 0; i < n; i++){
		v.push_back(a[i]);
		sort(v.begin(), v.end());
		cout << "Buoc " << i <<": ";
		for(int j = 0; j < v.size(); j++){
			cout << v[j] << " ";
		}
		cout << endl;
	}
}
