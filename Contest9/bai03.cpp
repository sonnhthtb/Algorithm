// chuyển ma trận kề sang danh sách kề

#include <bits/stdc++.h>

using namespace std;
int a[1005][1005];
vector<int> mincy[10000];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        mincy[i].clear();
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
                mincy[i].push_back(j);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < mincy[i].size(); j++)
        {
            cout << mincy[i][j] << " ";
        }
        cout << endl;
    }
}