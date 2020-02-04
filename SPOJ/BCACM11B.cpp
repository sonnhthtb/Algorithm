#include <bits/stdc++.h>
#define i64 long long
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cout << #a " is " << (a) << endl;

const int N = 200005;
const long long base = 1e9 + 7;
const long long inf = 1e18 + 7;

using namespace std;
void Solve()
{
    int a[101][101];
    int n, m, k, t, h, i, x, y;
    cin >> m;
    while (m)
    {
        cin >> n >> k >> h;
        x = y = 1;
        t = n * n;
        while (y <= t)
        {
            for (i = x; i <= n - x + 1 && y <= t; i++)
            {
                a[x][i] = y;
                y++;
            }
            for (i = x + 1; i <= n - x + 1 && y <= t; i++)
            {
                a[i][n - x + 1] = y;
                y++;
            }
            for (i = n - x; i >= x && y <= t; i--)
            {
                a[n - x + 1][i] = y;
                y++;
            }
            for (i = n - x; i >= x + 1 && y <= t; i--)
            {
                a[i][x] = y;
                y++;
            }
            x++;
        }
        cout << a[k][h] << endl;
        m--;
    }
}
int main()
{
    int T = 1;
    // cin >> T;
    while (T--)
    {
        Solve();
    }
    return 0;
}