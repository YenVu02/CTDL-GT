#include<bits/stdc++.h>
using namespace std;
void bullbleSort(int a[], int n){
	int b = 1;
	for(int i = n - 1; i > 0; i--){
		bool kt = true;
		for(int j = 0; j < i; j++){
			if(a[j] > a[j + 1]){
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				kt = false;
			}
		}
		if(kt) break;
		cout << "Buoc " << b << ": ";
		for(int j = 0; j < n; j ++) cout << a[j] << " ";
		b++;
		cout << endl;
	}
}
int main(){
	int n;
	cin >> n;
	int a[n + 1];
	for(int i = 0; i < n; i++) cin >> a[i];
	bullbleSort(a, n);
	return 0;
}
