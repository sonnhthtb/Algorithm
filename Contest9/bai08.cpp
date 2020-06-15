// BFS

#include <bits/stdc++.h>

using namespace std;

int u, v, s;
queue<int> mincy;
vector<int> ke[10005];
bool visit[10005];
void BFS(int s)
{
    mincy.push(s);
    visit[s] = true;
    while (!mincy.empty())
    {
        int x = mincy.front();
        mincy.pop();
        cout << x << " ";
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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> u >> v >> s;
        for (int i = 0; i < 1001; i++)
        {
            ke[i].clear();
        }
        memset(visit, false, sizeof(visit));
        for (int i = 1; i <= v; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        BFS(s);
        cout << endl;
    }
}