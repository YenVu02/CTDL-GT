#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int main(){
	fast();
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string s1;
		while(ss >> s1){
			for(int i = s1.size() - 1; i >= 0; i--){
				cout << s1[i];
			}
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}

