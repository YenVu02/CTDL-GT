#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

bool check(string s){
	stack <char> st;
	int len = s.length();
	for(int i = 0; i < len; i++){
		if(s[i] == '(' || s[i] == '['|| s[i] == '{')
		{
			st.push(s[i]);
		}
		else
		{   if(st.empty()) return 0;
			else if(st.top() == '(' && s[i] == ')') st.pop();
		    else if(st.top() == '[' && s[i] == ']') st.pop();
		    else if(st.top() == '{' && s[i] == '}') st.pop();
			else return 0;
		}
	}
	return st.empty();
}

int main(){
	fast();
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		cin >> s;
		if(check(s)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}

