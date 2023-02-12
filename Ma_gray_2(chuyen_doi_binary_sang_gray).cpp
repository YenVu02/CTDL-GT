#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string gray, binary = "";
		cin >> gray;
		binary = gray[0];
		for(int i = 1; i < gray.size(); i++){
			int n = binary.size() - 1;
			if(binary[n] != gray[i]) binary += "1";
			else binary += "0";
		}
		cout << binary << endl;
	}
	return 0;
}

