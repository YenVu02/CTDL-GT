#include<bits/stdc++.h>
using namespace std;

void Process (int a[], int n) {
    if (n > 0) {
        cout << "[" << a[0];

        for (int i = 1; i < n; ++i) {
            cout << " " << a[i];
            a[i-1] += a[i];
        }
        cout << "]\n";
        Process(a, n - 1);
    }
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		Process(a, n);
	}
	return 0;
}

