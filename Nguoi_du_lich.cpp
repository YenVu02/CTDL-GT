#include <bits/stdc++.h>

 
#define ll long long
#define fast() ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int C[20][20], A[20], B[20], fopt = INT_MAX, cost = 0, cmin = INT_MAX, n;

void Try(int i) {
    int j;
    for (int j = 2; j <= n; ++j) {
        if (B[j] == 0) {
            A[i] = j;
            B[j] = 1;
            cost += C[A[i - 1]][A[i]];
            if (i == n) {
                int v = cost + C[A[n]][A[1]];
                fopt = min(fopt, v);
            }
            else if (cost + (n - i +1)*cmin < fopt) {
                Try(i + 1);
            }
            cost -= C[A[i - 1]][A[i]];
            B[j] = 0;
        }
    }
}

int main () {
    int i, j;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> C[i][j];
            if (i != j)
                cmin = min(cmin, C[i][j]);
        }
    }
    A[1] = 1;
    Try(2);
    cout << fopt;
}
