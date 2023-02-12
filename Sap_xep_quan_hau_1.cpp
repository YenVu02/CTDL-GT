#include<bits/stdc++.h>
using namespace std;

main(){
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
    int t,i,j; cin >> t;
    int a[12] = {0, 1, 0, 0, 2, 10, 4, 40, 92, 352, 724};
    while(t--){
        int n; cin >> n;
        cout << a[n] << "\n";
    }
}

