#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int d[1005][1005];
 
int qhd(string s1,string s2){
	int n = s1.size(), m = s2.size();
	for(int i = 1; i <= n ; i++){
		for(int j = 1; j <= m; j++){
			if(s1[i-1] == s2[j-1]) d[i][j] = d[i-1][j-1] + 1;
			else d[i][j] = max(d[i-1][j], d[i][j-1]);
		}
	}
	return d[n][m];
}

int main(){
	fast();
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		cout << qhd(s1, s2) << endl;
	}
	return 0;
}

