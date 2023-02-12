#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;
string s;
int b[100];
bool c[100];

void print(){
	for(int i = 1; i <=s.size(); i++){
		cout <<  s[b[i]];
	}
	cout << " ";
}

void Try(int i){
	for(int j = 0; j < s.size(); j++){
		if(c[j] == false){
			b[i] = j;
			c[j] = true;
			if(i == s.size()) print();
			else Try(i+1);
			c[j] = false;
		}
	}
}

int main(){
	fast();
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		cin >> s;
		Try(1);
		cout << endl;
	}
	return 0;
}

