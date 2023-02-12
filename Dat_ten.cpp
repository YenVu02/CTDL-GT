#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int n, k, c[100];
vector<string> v;
set <string > se;

void init(){
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		se.insert(s);
	}
	copy(se.begin(), se.end(), inserter(v, v.begin()));
}

void print(){
	for(int i = 1; i <= k; i++){
		cout << v[c[i] - 1] << " ";
	}
	cout << endl;
}

void Try(int i){
	for(int j = c[i-1] + 1; j <= v.size() - k +i; j++){
		c[i] = j;
		if(i == k) print();
		else Try(i+1);
	}
}

int main(){
	fast();
    init();
	Try(1);
	return 0;
}

