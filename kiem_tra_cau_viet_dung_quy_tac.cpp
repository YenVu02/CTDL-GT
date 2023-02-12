#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stack<char> st;
		ll c=0;
		for(ll i=0;i<s.size();i++){
			if(s[i]=='('||s[i]=='['){
				st.push(s[i]);
			}
			if(s[i]==')'){
				if(st.empty()){
					c=1;
					break;
				}
				if(st.top()=='('){
					st.pop();
				}else{
					c=1;
					break;
				}
			}
			if(s[i]==']'){
				if(st.empty()){
					c=1;
					break;
				}
				if(st.top()=='['){
					st.pop();
				}else{
					c=1;
					break;
				}
			}
		}
		if(st.size()){
			c=1;
		}
		if(c==1) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
}
