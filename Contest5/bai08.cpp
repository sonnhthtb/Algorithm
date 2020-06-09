#include <bits/stdc++.h>
#define i64 long long
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cerr << #a " is " << (a) << endl;

const int N = 200005;
const long long base = 1e9 + 7;
const long long inf = 1e18 + 7;

using namespace std;

void Solve()
{
    int n, m;
    cin >> n >> m;
    int a[n + 5][m + 5];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    int ans[n + 5][m + 5] = {0};
    for (int i = 0; i < n; i++)
    {
        ans[i][0] = a[i][0];
    }
    for (int i = 0; i < m; i++)
    {
        ans[0][i] = a[0][i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (a[i][j] == 1)
                ans[i][j] = min(ans[i - 1][j], min(ans[i][j - 1], ans[i - 1][j - 1])) + 1;
            else
                ans[i][j] = 0;
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // cout << ans[i][j]<<" ";
            res = max(res, ans[i][j]);
        }
        // cout << endl;
    }
    cout << res << endl;
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