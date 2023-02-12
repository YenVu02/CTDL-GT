#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

bool check(string s){
	int n = s.length();
	stack <char> st;
	for(int i = 0; i < n; i++){
		if(s[i] != ')'){
			st.push(s[i]);
		}
		else{
			bool flag = 0;
			while(!st.empty() && st.top() != '('){
				char x = st.top(); st.pop();
				if(x == '+' || x == '-' || x == '*' || x == '/'){
					flag = 1;
				}
			}
			if(!flag) return 1;
			st.pop();
		}
	}
	return 0;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	cin.ignore();
	while(test--){
		string s; getline(cin, s);
		if(check(s)) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}



