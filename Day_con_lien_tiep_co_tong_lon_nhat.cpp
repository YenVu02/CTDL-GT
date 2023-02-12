#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int maxSubArraySum(int a[], int n){
	int local_max[n] = {0};
	local_max[0] = a[0];
	int result = local_max[0];
	for(int i =1; i < n; i++){
		local_max[i] = max(a[i], a[i] + local_max[i-1]);
		result = max(result, local_max[i]);
	}
	return result;
}

int main(){
	fast();
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		cout << maxSubArraySum(a, n) << endl;
	}
	return 0;
}

