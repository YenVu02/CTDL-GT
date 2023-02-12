#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n + 1], b[n + 1][n + 1];
	for(int i = 0; i < n; i++) cin >> a[i];
	vector<int> v;
	for(int i = 0; i < n; i++){
		v.push_back(a[i]);
		sort(v.begin(), v.end());
		for(int j = 0; j < v.size(); j++) {
			b[i][j] = v[j];
		}
	}
    for(int i = n - 1; i >= 0; i--){
    	cout << "Buoc " << i << ": ";
    	for(int j = 0; j < i + 1; j++){
    		cout << b[i][j] << " ";
		}
		cout <<endl;
	}
	return 0;
}

