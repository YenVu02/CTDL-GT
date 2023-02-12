#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

long long hcn(long long a[], long long n){
	long long Max = 0, b[n + 11] = {};
	stack <long long> st, st1, st2, st3;
	for(int i = 0; i < n; i++){
		long long s = 1;
		while(st.size()){
			if(a[i] <= st.top()){
				s += st1.top();
				st.pop();
				st1.pop();
			}
			else break;
		}
		st.push(a[i]);
		st1.push(s);
		b[i] = s;
	}
	for(int i = n - 1; i >= 0; i--){
		long long s = 1;
		while(st2.size()){
			if(a[i] <= st2.top()){
				s += st3.top();
				st2.pop();
				st3.pop();
			}
			else break;
		}
		st2.push(a[i]);
		st3.push(s);
	    Max = max(Max, (b[i] + s - 1) * a[i]);
	}
	return Max;
}

int main(){
	fast();
	long long m, n;
	cin >> m >> n;
	long long a[n + 1], b[n + 1];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = m - a[i];
	}
	cout << max(hcn(a, n), hcn(b, n)) << endl;
	return 0;
}

