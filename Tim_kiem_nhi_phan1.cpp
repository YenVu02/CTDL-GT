#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int l, int h, int k){
	if(l >= h) return -1;
	else{
		int mid = l + (h - l) / 2;
		if(a[mid] == k) return mid;
		if(a[mid] < k) return binarySearch(a, mid + 1, h, k);
		if(a[mid] > k) return binarySearch(a, l, mid - 1, k);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int l = 0;
		int h = n - 1;
		int index = binarySearch(a, l, h, k);
		if(index == -1) cout << "NO";
		else cout << index + 1;
		cout << endl;
	}
	return 0;
}

