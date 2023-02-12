#include<bits/stdc++.h>
using namespace std;

struct task{
	int Start, Finish;
};

bool cmp(task a, task b){
	return a.Finish < b.Finish;
}

int main(){
	int test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		task t[n];
		for(int i = 0; i < n; i++) cin >> t[i].Start;
		for(int i = 0; i < n; i++) cin >> t[i].Finish;
		sort(t, t + n, cmp);
		int ans = 1, i = 0;
		for(int j = 1; j < n; j++){
			if(t[i].Finish <= t[j].Start){
				ans++;
				i = j;
			}
		}
		cout << ans << endl;
	}
	return 0;
}

