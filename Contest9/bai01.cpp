#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
vector<int> a[100000];
int e, v;
void Input()
{
    for (int i = 0; i < 100000; i++)
        a[i].clear();
    cin >> v >> e;
    
}

void Solve()
{
    
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for (int i = 1; i <= v; i++)
    {
        cout << i << ": ";
        for (int j = 0; j < a[i].size(); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        Input();
        Solve();
    }
    return 0;
}