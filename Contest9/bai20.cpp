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

bool isDuyetHet()
{
    for (int i = 1; i <= V; i++)
    {
        if (!visit[i])
            return false;
    }
    return true;
}

void DuyetTru()
{
    memset(visit, false, sizeof(visit));
    for (int u = 1; u <= V; u++)
    {
        visit[u] = true;
        if (u == 1)
        {
            BFS(2);
        }
        else
        {
            BFS(1);
        }
        if (!isDuyetHet())
        {
            cout << u << ' ';
        }
        memset(visit, false, sizeof(visit));
    }
    cout << endl;
}

void Solve()
{
    cin >> V >> E;
    for (int i = 0; i <= 1005; i++)
        ke[i].clear();
    memset(visit, false, sizeof(visit));
    for (int i = 1; i <= E; i++)
    {
        int u, v;
        cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    DuyetTru();
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