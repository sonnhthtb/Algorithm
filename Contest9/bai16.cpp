#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

vector<int> ke[10005];
bool visit[10005];
int V, E;
queue<int> mincy;
void BFS(int s)
{
    mincy.push(s);
    visit[s] = true;
    while (!mincy.empty())
    {
        int x = mincy.front();
        mincy.pop();
        for (int i = 0; i < ke[x].size(); i++)
        {
            if (!visit[ke[x][i]])
            {
                mincy.push(ke[x][i]);
                visit[ke[x][i]] = true;
            }
        }
    }
}
void Duyet_TPLT()
{
    int soTPLT = 0;
    for (int u = 1; u <= V; u++)
    {
        if (!visit[u])
        {
            soTPLT++;
            BFS(u);
        }
    }
    cout << soTPLT << endl;
}
void Solve()
{
    cin >> V >> E;
    for (int i = 0; i <= 10000; i++)
        ke[i].clear();
    memset(visit, false, sizeof(visit));
    for (int i = 1; i <= E; i++)
    {
        int u, v;
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    Duyet_TPLT();
}
int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        Solve();
    }
    return 0;
}