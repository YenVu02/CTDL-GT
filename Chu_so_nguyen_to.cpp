#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;
queue<string> q;
int check(string s){
	int len = s.size();
	if(s[len-1] == '2') return 0;
	else {
		int a[333] = {};
		for(int i = 0; i < len; i++) {
			a[s[i] - '0'] = 1;
		}
		a[4] = 1;
		a[6] = 1;
		for(int i = 2; i <= 7; i++) if(!a[i]) return 0;
		return 1;
	}
}

int main(){
	fast();
	int n;
	cin >> n;
	q.push("2");
	q.push("3");
	q.push("5");
	q.push("7");
	string s = q.front();
	while(1){
		string s = q.front();
		q.pop();
		if(s.size() > n) break;
		if(check(s)) cout << s << endl;
		q.push(s + "2");
    	q.push(s + "3");
	    q.push(s + "5");
    	q.push(s + "7");
	}
	return 0;
}

