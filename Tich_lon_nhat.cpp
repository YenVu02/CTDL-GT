#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int main(){
	fast();
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a+n);
	int max1 = a[0]*a[1]*a[n-1], max2 = a[0]*a[1], max3 = a[n-3]*a[n-2]*a[n-1], max4 = a[n-2]*a[n-1];
	cout << max(max(max1, max2), max(max3, max4));
	return 0;
}

