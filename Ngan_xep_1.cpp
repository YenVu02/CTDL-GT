#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

void print(stack<int> st){
	vector<int> v;
	while(!st.empty()){
		v.push_back(st.top());
		st.pop();
	}
	for(int i = v.size() - 1; i >= 0; i--){
		cout << v[i] << " ";
	}
	cout <<endl;
}

int main(){
	fast();
	string s;
	stack <int> st;
	while(cin >> s){
		if(s == "push"){
			int x;
		    cin >> x;
			st.push(x);
		}
		else if(s == "pop"){
			if(!st.empty()){
				st.pop();
			}
		}
		else{
			if(st.empty()){
				cout << "empty\n";
			}
			else{
				print(st);
			}
		}
	}
	return 0;
}

