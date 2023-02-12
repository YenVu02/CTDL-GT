#include <bits/stdc++.h>
using namespace std;

void swap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}

void selectionSort(int arr[], int n){
	int min_idx, kt, count = 0;
	for(int i = 0; i < n - 1; i++){
		min_idx = i;
		kt = 0;
		for(int j = i + 1; j < n; j++){
			if(arr[j] < arr[min_idx]){
				kt = 1;
				min_idx = j;
			}
		}
		if(kt == 1){
			count++;
			swap(arr[min_idx], arr[i]);
    	}
    }
	cout << count<< endl;	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++) cin >> arr[i];
		selectionSort(arr, n);
	}
}
