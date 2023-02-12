#include <bits/stdc++.h>

#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int  S(int n, int s, int m) {
    int d = ceil((float)s * m / n);
    if  (d <= (s - s/ 7))  return d;
    return -1;
}

int main () {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        cout << S(n, s, m) << "\n";
    }
}
