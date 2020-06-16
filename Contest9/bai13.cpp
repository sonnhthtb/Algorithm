// DFS

#include <bits./stdc++.h>

using namespace std;
int u, v, n, m, s, t;
queue<int> mincy;
vector<int> ke[10005];
int visit[1005] = {0};
int truoc[1005];
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
                truoc[ke[x][i]] = x;
                visit[ke[x][i]] = true;
            }
        }
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        memset(truoc, 0, sizeof(truoc));
        memset(visit, false, sizeof(visit));
        cin >> u >> v >> s >> t;
        for (int i = 0; i < 1001; i++)
        {
            ke[i].clear();
        }

        for (int i = 1; i <= v; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
        }
        BFS(s);
        if (truoc[t] == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<int> v;
            v.push_back(t);
            while (truoc[t] != s)
            {
                v.push_back(truoc[t]);
                t = truoc[t];
            }
            v.push_back(s);
            reverse(v.begin(), v.end());
            for (auto z : v)
            {
                cout << z << ' ';
            }
            cout << endl;
        }
    }
}