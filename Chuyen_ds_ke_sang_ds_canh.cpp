#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int main(){
	fast();
	int n;
	cin >> n;
	cin.ignore();
	for(int i = 1; i <= n; i++){
		string s, token;
		getline(cin, s);
		stringstream ss(s);
		while(ss >> token){
			int num = stoi(token);
			if(num > i) cout << i << " " << num << endl;
		}
	}
	return 0;
}

