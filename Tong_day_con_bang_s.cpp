#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int n, k, a[100], b[100], d;
int ll=1000;
void in(int l){
	d =0 ;
	for(int i = 0; i <= l; i++){
		if(b[i]){
			d++;
		}
	}
	if(d  < ll) ll = d;
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
	fast();
	cin >> n >> k;
	for(int i = 0;i < n; i++) cin >> a[i];
	Try(0, 0);
	cout << ll;
	return 0;
}
