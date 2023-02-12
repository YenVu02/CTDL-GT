#include<bits/stdc++.h>
using namespace std;

int main(){
	string a = "000";
	string s1 = "02/02/2";
	string s2 = "20/02/2";
	string s3 = "22/02/2";
	vector<string> v;
	v.push_back(s1 + a);
	v.push_back(s2 + a);
	v.push_back(s3 + a);
	while(1){
		int check = 1;
		for(int i = 2; i >= 0; i--){
			if(a[i] == '0'){
				a[i] = '2';
				for(int j = i + 1; j < 3; j++) a[j] = '0';
				check = 0;
				break;
			}
		}
		if(check == 1) break;
		v.push_back(s1 + a);
		v.push_back(s2 + a);
		v.push_back(s3 + a);
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << "\n";
	}
	return 0;
}

