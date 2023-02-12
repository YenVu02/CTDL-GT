#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

void reverse(string s){
	stack <string> st;
	string token;
	stringstream ss (s);
	while(ss >> token){
		st.push(token);
	}
	while(!st.empty()){
		cout <<st.top() << " ";
		st.pop();
	}
	cout << endl;
}

int main(){
	fast();
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		reverse(s);
	}
	return 0;
}

