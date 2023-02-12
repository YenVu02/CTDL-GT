#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;


int main()
{
	fast();
	int q; cin >> q;
	stack <int> st;
	string s;
	while(q--){
		cin >> s;
		if(s == "PUSH"){
			int x; cin >> x;
			st.push(x);
		}
		else if(s == "PRINT"){
			if(!st.empty())
				cout << st.top();
			else cout << "NONE";
			cout << endl;
		}
		else if(!st.empty()) st.pop();
	}
	return 0;
}




