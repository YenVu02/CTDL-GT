#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin >> t;
	cin.ignore();
	
	while(t--){
		
		string s;
		cin >> s;
		int len = s.length();
		int a[len + 1][len + 1];
		memset(a, 0, sizeof(a));
		
		for(int i = 0; i < len; i++){
			for(int j = 0, x = i; x < len; j++, x++){
				if(s[j] == s[x]){
					a[j][x] = a[j+1][x-1];
				}
				else{
					a[j][x] = min(a[j+1][x], a[j][x-1]) + 1;
				}
			}
		}
		
		cout << a[0][len - 1] << endl;
	}
	return 0;
}

