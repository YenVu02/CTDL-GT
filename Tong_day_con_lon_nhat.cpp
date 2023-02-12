#include<bits/stdc++.h>
using namespace std;

void init(int a[], int n){
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}

int max(int a, int b){
	return (a > b) ? a : b;
}
int max(int a, int b, int c){
	return max(max(a, b), c);
}

int maxCrossingSum(int a[], int l, int m, int h){
	int sum = 0;
	int left_sum = INT_MIN;
	for(int i = m; i > l; i--){
		for(int j = i + 1; j < )
	}
}

int maxSubArraySum(int a[], n)

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		init(a, n);
		int max_sum = maxSubArraySum(a, 0, n - 1);
		cout << max_sum << endl;
	}
	return 0;
}

