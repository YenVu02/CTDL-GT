#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0) cin.tie(NULL)

using namespace std;

int n, m, a[1005][1005];

inline int BFS()
{
    int M[1005][1005] = {};
    queue<pair<int, int>> q;
    pair<int, int> p;
    q.push({1, 1});
    M[1][1] = 0;
    while(q.sz)
    {
        p = q.front();
        q.pop();
        if(p.fi + a[p.fi][p.se] <= n and !M[p.fi + a[p.fi][p.se]][p.se])
        {
            if(p.fi + a[p.fi][p.se] == n and p.se == m) return M[p.fi][p.se] + 1;
            M[p.fi + a[p.fi][p.se]][p.se] = M[p.fi][p.se] + 1;
            q.push({p.fi + a[p.fi][p.se], p.se});
        }
        if(p.se + a[p.fi][p.se] <= m and !M[p.fi][p.se + a[p.fi][p.se]])
        {
            if(p.fi == n and p.se + a[p.fi][p.se] == m) return M[p.fi][p.se] + 1;
            M[p.fi][p.se + a[p.fi][p.se]] = M[p.fi][p.se] + 1;
            q.push({p.fi, p.se + a[p.fi][p.se]});
        }
    }
    return -1;
}

int main()
{
    faster();
    int t = 1;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= m; ++j)
                cin >> a[i][j];
        cout << BFS() << endl;
    }
    return 0;
}

