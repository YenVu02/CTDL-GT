#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>> t;
	while(t--){
		int a[1005]={0}, b[1005]={0};
		int n, k, count= 0; 
		cin>> n>> k;
		for(int i= 0; i< n; i++){
			cin>> a[i];
			b[a[i]]++;
		}
		for(int i= 0; i<= k; i++){
			if(b[i]&& b[k-i]){
				if(i== k-i) count+= b[i]*(b[i]-1)/2;
				else count+= b[i]*b[k-i];
				b[k-i]= 0;
			}
		}
		cout<< count<< endl;
	}
}



