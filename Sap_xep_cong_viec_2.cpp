#include<bits/stdc++.h>
using namespace std;

struct Task{
	int Jobld, Deadline, Profit;
};

bool cmp(Task a, Task b){
	return a.Profit > b.Profit;
}

int main(){
	int test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		Task task[n];
		int max_deadline = 1;
		for(int i = 0; i < n; i++){
			cin >> task[i].Jobld >> task[i].Deadline >> task[i].Profit;
			max_deadline = max(max_deadline, task[i].Deadline);
		}
		sort(task, task + n, cmp);
		int used[max_deadline + 1] = {0};
		int best_profit = 0, count = 0;
		for(int i = 0; i < n; i++){
			while(used[task[i].Deadline] && task[i].Deadline > 0){
				task[i].Deadline--;
			}
			if(task[i].Deadline > 0){
				used[task[i].Deadline] = 1;
				best_profit += task[i].Profit;
				count++;
			}
		}
		cout << count << " " << best_profit << endl;
	}
	return 0;
}

