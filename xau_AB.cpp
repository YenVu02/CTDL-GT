#include<bits/stdc++.h>
using namespace std;
int n;
int s[1000];

void print(){
    int d = 0;
    for(int i = 1; i <= n; i++){
        if(s[i] == 0) cout <<"A";
        else{
        	cout << "B";
        	d++;
		}
	}
	if(d != n) cout << ",";
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		s[i] = j;
		if(i == n) print();
		else Try(i + 1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
		cout << endl;
	}
	return 0;
}

