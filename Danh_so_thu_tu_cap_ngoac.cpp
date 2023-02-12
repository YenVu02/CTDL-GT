#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

int main(){
	fast();
	int test;
	cin >> test;
	while(test--){
		string s;
		cin >> s;
		stack <int> st;
	    int count = 1;
	    for(int i = 0; i < s.size(); i++){
	    	if(s[i] == '('){
		    	cout << count << " ";
		    	st.push(count);
		    	count++;
	    	}
	    	else if(s[i] == ')'){
		    	cout << st.top() << " ";
		    	st.pop();
	    	}
    	}
		cout << endl;
	}
	return 0;
}

