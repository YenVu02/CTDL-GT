#include <bits/stdc++.h>

#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int sum (vector<int> &a,int idx) {
    int s = 0;
    for (int i = 0; i < idx; ++i)
        s += a[i];
    return s;
}

int main () {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int &i : a) cin >> i;
        sort(a.begin(), a.end());
        int s = sum(a, n);
        cout << max(abs(s - 2 * sum(a, k)), abs(s - 2 * sum(a, n - k))) << "\n";
    }
}
