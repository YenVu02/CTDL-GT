#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

string s;
int k, b, m;

int HCS(long long x){
	int p = 0, d = 0;
	while(x > 0){
		d += (x%10) * pow(b, p);
		++p;
		x /= 10;
	}
	return d;
}

int main(){
	fast();
	cin >> s;
	cin >> k >> b >> m;
	int a[s.size()];
	long long t = 0;
	for(int i = 0; i < s.size(); i++){
		a[i] = s[i] - 48;
    }
	long long x = 1;
	for(int i = 0; i < k - 1; i++){
		x *=10;
	}
	long long y = 0;
	for(int i = 0; i < k; i++){
		y = y * 10 + a[i];
	}
	t+= (HCS(y) % m);
	for(int i = k; i < s.size(); i++){
		y = y%x;
		y = y * 10 + a[i];
		t += (HCS(y)%m);
	}
	cout << t;
	return 0;
}

