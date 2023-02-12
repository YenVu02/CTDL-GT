#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

string s;
void solve(){
	int n = s.length(), d = 0;
	stack <char> st;
	for(int i = 0; i < n; i++){
		if(s[i] == '(')
			st.push(s[i]);
		else{
			if(st.empty()){
				d++;
				st.push('(');
			}
			else st.pop();
		}
	}
	cout << d + st.size()/2 << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--){
		cin >> s;
		solve();
	}
	return 0;
}




