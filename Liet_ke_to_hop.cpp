#include<iostream>
#include<set>

#define ll long long
#define fast() ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int n, x[100], ok = 0, k, a[100], idx = 1;
void init() {

    cin >> n >> k;
    set<int> s;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    int n = s.size();
    for (auto i : s)
        a[idx++] = i;
    idx--;
}
void print() {
    for (int i = 1; i <= k; ++i)
        cout << a[x[i]] << " ";
    cout << "\n";
}
void Try(int i) {
    for (int j = x[i - 1] + 1; j <= idx - k + i; ++j) {
        x[i] = j;
        if (i == k)
            print();
        else
            Try(i + 1);
    }
}

int main() {
    fast();
    init();
    Try(1);
}
