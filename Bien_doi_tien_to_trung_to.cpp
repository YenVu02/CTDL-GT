#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

string s;
void prefixToInfix(){
	int n = s.length();
	stack <string> st;
	for(int i = n-1; i >= 0; i--){
		if(isalpha(s[i])){
			st.push(string(1, s[i]));
		}
		else{
			string top1 = st.top(); st.pop();
			string top2 = st.top(); st.pop();
			string res = '(' + top1 + s[i] + top2 + ')';
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
	while(test--){
		cin >> s;
		prefixToInfix();
	}
	return 0;
}



