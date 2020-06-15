// DFS

#include <bits./stdc++.h>

using namespace std;
int u, v, n, m, s, t ;
int mark[1005] = {0};
int a[1005][1005];
int truoc[1005];
void DFS(int u)
{
    mark[u] = 1;
    for (int v = 1; v <= n; v++)
    {
        if (a[u][v] == 1 && mark[v] == 0)
        {
            truoc[v] = u;
            DFS(v);
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
        memset(mark, 0, sizeof(mark));
        cin >> n >> m >> s >> t;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                a[i][j] = 0;
            }
        }
        for (int i = 1; i <= m; i++)
        {
            cin >> u >> v;
            a[u][v] = 1;
            a[v][u] = 1;
        }
        DFS(s);
        if(truoc[t]==0){
            cout << -1 << endl;
        }
        else{
            vector<int> v;
            v.push_back(t);
            while(truoc[t]!=s){
                v.push_back(truoc[t]);
                t = truoc[t];
            }
            v.push_back(s);
            reverse(v.begin(), v.end());
            for(auto z : v){
                cout << z << ' ';
            }
            cout << endl;
        }
    }
}