#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int main(){
	fast();
	int t;
	cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		stack <int> st;
		vector<int> v;
		v.push_back(-1);
		st.push(a[n-1]);
		for(int i = n-2; i >= 0; i--){
			while(!st.empty()){
				if(st.top() > a[i])
				{
					v.push_back(st.top());
					break;
				}
				else st.pop();
			}
			if(st.empty()) v.push_back(-1);
			st.push(a[i]);
		}
		for(int i = n-1; i >= 0; i--){
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

