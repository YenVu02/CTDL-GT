#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, min; cin >> n;
	int a[n + 1], b[n + 1][n + 1];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n - 1; i++){
		min = i;
		for(int j = i + 1; j < n; j++){
			if(a[min] > a[j]){
				min = j;
			}
		}
		swap(a[i], a[min]);
		for(int j = 0; j < n; j++) b[i][j] = a[j];
	}
	for(int i = n - 2; i >= 0; i--){
		cout << "Buoc " << i + 1 << ": ";
		for(int j = 0; j < n; j++){
			cout << b[i][j] << " ";
		}
		cout <<endl;
	}
	return 0;
}

