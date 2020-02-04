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
long long a[10003][10003]={0};
void Solve()
{
    long long m, n;
    long long s = 0;
    cin >> m >> n;
    for (long long i = 1; i <= m; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    s = m * n;
    for (long long i = 1; i <= m; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            if (a[i][j] > a[i - 1][j])
                s = s + (a[i][j] - a[i - 1][j]);
            if (a[i][j] > a[i][j - 1])
                s = s + (a[i][j] - a[i][j - 1]);
            if (a[i][j] > a[i + 1][j])
                s = s + (a[i][j] - a[i + 1][j]);
            if (a[i][j] > a[i][j + 1])
                s = s + (a[i][j] - a[i][j + 1]);
        }
    }
    cout << s;
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