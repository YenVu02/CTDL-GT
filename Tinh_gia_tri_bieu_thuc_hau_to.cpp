#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

string s;
int calc(int a, int b, char sign){
	if(sign == '+') return a+b;
	if(sign == '-') return a-b;
	if(sign == '*') return a*b;
	return a/b;
}
void solve(){
	stack <int> st;
	
	for(int i = 0; i < s.length(); i++){
		if(isdigit(s[i])){
			st.push(s[i]-'0');
		}
		else{
			int top2 = st.top(); st.pop();
			int top1 = st.top(); st.pop();
			int res = calc(top1, top2, s[i]);
			st.push(res);
		}
	}
	cout << st.top() << endl;
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



