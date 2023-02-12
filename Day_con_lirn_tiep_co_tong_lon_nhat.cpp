#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

void SumArrayMax(int a[], int n){
	int s = 0, ss = 0;
	for(int i = 0; i < n; i++){
		s = max(a[i], s + a[i]);
		ss = max(ss, s);
	}
	cout << ss;
}

int main(){
	fast();
	int t;
	cin >> t;
	while(t--){
		int n;
        cin >> n;
        int a[n + 1];
        for(int i = 0;i < n; i++){
        	cin >> a[i];
		}
		SumArrayMax(a, n);
		cout<<endl;
		
	}
	return 0;
}

