#include <bits/stdc++.h>

using namespace std;

void init(long long a[], int n) {
    for (int i = 0; i < n;++i)
        cin >> a[i];
}

int main () {
    int t;
    cin >> t;
    while (t--) {

        int n, m, k;
        cin >> n >> m >> k;

        long long a[n], b[m], c[k];
        init(a, n); init(b, m); init(c, k);

        int i = 0, j = 0, p = 0;
        vector<long long> res;
        while (i < n && j < m && p < k) {

            if (a[i] == b[j] && a[i] == c[p]) {
                res.push_back(a[i]);
                ++i, ++j, ++p;
                continue;
            }

            if (a[i] <= b[j] && a[i] <= c[p]) ++i;
            else

            if (b[j] <= a[i] && b[j] <= c[p]) ++j;
            else ++p;
        }
        if (res.empty())
            cout << "-1";
        
        for (auto i : res)
            cout << i << " ";
        cout << "\n";
    }
}
