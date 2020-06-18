#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int vis[1005];
vector<int> ke[1005];
int n, m, s, cycle = 0;
void DFS(int u)
{
    vis[u] = 1;
    for (auto v : ke[u])
    {
        if (vis[v] == 0)
            DFS(v);
        else if (vis[v] == 1)
            cycle = 1;
    }
    vis[u] = 2;
}
void Input()
{
    memset(vis, 0, sizeof(vis));
    for (int i = 1; i <= n; i++)
    {
        ke[i].clear();
    }
    cycle = 0;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
}
void Solve()
{
    DFS(1);
    cout << ((cycle == 1) ? "YES" : "NO") << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Input();
        Solve();
    }
    return 0;
}