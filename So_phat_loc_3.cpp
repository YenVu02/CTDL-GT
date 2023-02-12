#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int main(){
	fast();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		queue <string> q;
		q.push("6");
		q.push("8");
		vector <string> v;
		v.push_back("6");
		v.push_back("8");
		while(!q.empty()){
			string x = q.front();
			q.pop();
			if(x.size() < n){
				v.push_back(x + "6");
		    	v.push_back(x + "8");
    			q.push(x + "6");
    			q.push(x + "8");
			}
			else break;
		}
		cout << v.size() << endl;
		for(int i = v.size() - 1; i >= 0; i--){
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

