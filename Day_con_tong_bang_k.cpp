#include<bits/stdc++.h>
using namespace std;
int n, k, a[100], b[100];
vector <int> v;
void in(int l){
	for(int i = 0; i <= l; i++){
		if(b[i]){
			v.push_back(a[i]);
		}
		
	}
	cout << endl;
}
void Try(int i, int sum){
	if(sum > k) return;
	for(int j = 0; j <= 1; j++){
		b[i] = j;
		sum += a[i] * b[i];
		if(sum == k){
			in(i);
			return;
		}
		if(i < n - 1) Try(i + 1, sum);
	}
}
int main(){
    int t;
    cin >> t;
    while(t--){
    	cin >> n >> k;
	    for(int i = 0;i < n; i++) cin >> a[i];
	    Try(0, 0);
    }
    return 0;
}
