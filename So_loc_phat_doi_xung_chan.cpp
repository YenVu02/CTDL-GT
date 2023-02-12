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
		long long count = 0;
		queue <string> q;
		vector <string> v;
		vector <string> v1;
		q.push("6");
		q.push("8");
		while(!q.empty()){
			string s = q.front();
			q.pop();
			string a = s;
			reverse(a.begin(), a.end());
			v.push_back(s);
			count++;
			v1.push_back(s + a);
			if(count == n) break;
			else{
				q.push(s + "6");
				q.push(s + "8");
			}
		}
		for(int i = 0; i < v1.size(); i++){
			cout << v1[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

