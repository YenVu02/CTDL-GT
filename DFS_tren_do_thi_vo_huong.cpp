#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;
stack <int> st;
int n, m, s;
vector<int> v[1001];
bool chuaxet[1001];

void inp(){
	cin >> n >> m >> s;
	 for(int i = 1; i <= n; i++) v[i].clear();
	 for(int i = 1; i <= m; i++){
	 	int x, y;
	 	cin >> x >> y;
	 	v[x].push_back(y);
	 	v[y].push_back(x);
	 }
	 memset(chuaxet, 0, sizeof(chuaxet));
}

void dfs(int s){
	cout << s << " ";
	chuaxet[s] = 1;
	st.push(s);
	while(!st.empty()){
		int x = st.top();
		st.pop();
		for(int i : v[x]){
			if(!chuaxet[i]){
				cout << i << " ";
				chuaxet[i] = 1;
				st.push(x);
				st.push(i);
				break;
			}
		}
	}
	cout << endl;
}

int main(){
	fast();
	int t;
	cin >> t;
	while(t--){
		inp();
		dfs(s);
	}
	return 0;
}

