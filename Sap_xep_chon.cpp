#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n + 1];
	for(int i = 0; i < n; i++) cin >>a[i];
	for(int i = 0; i < n - 1; i++){
		int min = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		if(i != min){
			int temp = a[i];
         	a[i] = a[min];
        	a[min] = temp;
		}
		cout << "Buoc " << i + 1 << ": ";
		for(int i = 0; i < n; i++) {
	        cout << a[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}

