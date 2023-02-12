#include<bits/stdc++.h>
using namespace std;
vector<string> v;
string rev(string &s){
	reverse(s.begin(), s.end());
	return s;
}
void init(){
	queue<string> q;
	q.push("4");
	q.push("5");
	v.push_back("44");
	v.push_back("55");
	while (1){
		string top=q.front();
		q.pop();
		if(top.size()==15) break;
		q.push(top+"4");
		q.push(top+"5");
		string s=top+"4";
		string ss=top+"5";
		v.push_back(top+"4"+rev(s));
		v.push_back(top+"5"+rev(ss));
	}
}
int main(){
	init();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++) cout<<v[i]<<" ";
		cout<<endl;
	}
}
