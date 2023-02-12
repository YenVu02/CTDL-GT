#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

string s;
void solve(){
	int n = s.length(), maxlen = 0;
	stack<int> st;
	st.push(-1);
	for(int i = 0; i < n; i++) {
		if(s[i] == '('){
			st.push(i);
		}
		else{
			st.pop();
			if(!st.empty()){
				maxlen = max(maxlen, i - st.top());
			}
			else st.push(i);
		}
	}
	cout << maxlen << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		cin >> s;
		solve();
	}
	return 0;
}


