#include<bits/stdc++.h>
using namespace std;

int n, m, k, a[10000];
vector <string> s;

void init(){
	cin >> n >> k;
	set <string> ten;
	for(int i = 0; i < n; i++){
		string name;
		cin >> name;
		ten.insert(name);
	}
	for(set <string> :: iterator it = ten.begin(); it != ten.end(); it++){
		s.push_back(*it);
	}
	m = s.size();
}

void print(){
	for(int i = 1; i <= k; i++){
		cout << s[a[i] - 1] << " ";
	}
	cout << endl;
}

void Try(int i){
	for(int j = a[i - 1] + 1; j <= m - k + i; j++){
		a[i] = j;
		if(i == k) print();
		else Try(i + 1);
	}
}

int main(){
    init();
    Try(1);
	return 0;
}

