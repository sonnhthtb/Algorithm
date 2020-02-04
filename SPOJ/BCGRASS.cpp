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
    char a[102][102];
    int R, C, i, j, dem = 0;
    cin >> R >> C;
    for (i = 1; i <= R; i++)
        for (j = 1; j <= C; j++)
            cin >> a[i][j];
    for (i = 1; i <= R; i++)
    {
        for (j = 1; j <= C; j++)
        {
            if (a[i][j] == '#' && a[i + 1][j] != '#' && a[i][j + 1] != '#')
                dem++;
        }
    }
    cout << dem;
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