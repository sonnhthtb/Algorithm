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

int n, m, a[1000][1000];
int ans = 0;
void Input()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
}

int Try(int i, int j)
{
    if (i == 1 || j == 1)
    {
        return 1;
    }
    return Try(i - 1, j) + Try(i, j - 1);
}

void Solve()
{
    Input();
    cout << Try(n, m) << endl;
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