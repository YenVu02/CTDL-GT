#include <bits/stdc++.h>

#define ll long long
#define fast() ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

string check (vector <int> &a) {

    vector<int> b;
    int n = a.size();

    for (int i : a) b.push_back(i);
    sort(b.begin(), b.end());

    for (int i = 0; i < (n + 1) / 2; ++i) {
        if (b[i] != a[i] && b[i] != a[n - i - 1]) return "No";
    }
    return "Yes";
}

int main () {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &i : a) {
            cin >> i;
        }
        cout << check(a) << "\n";
    }
}
