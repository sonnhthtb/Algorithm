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
int n;
i64 c[1005][1005], x[1005];
i64 sum = 0, ans = inf, fopt = inf;
bool chuaxet[1005] = {false};
i64 cmin = base;
void Input()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> c[i][j];
            cmin = min(cmin, c[i][j]);
        }
    }
    for (int i = 0; i <= n; i++)
        chuaxet[i] = true;
    chuaxet[1] = false;
    x[1] = 1;
}

void Try(int k)
{
    for (int j = 2; j <= n; j++)
    {
        if (chuaxet[j])
        {
            x[k] = j;
            chuaxet[j] = false;
            sum += c[x[k - 1]][x[k]];
            if (k == n)
            {
                // for(int i=1;i<=n;i++){
                //     cout << x[i]<<' ';
                // }
                // cout << endl;
                ans = min(ans, sum + c[x[n]][x[1]]);
            }
            else if (sum + (n - k + 1) * cmin < ans)
            {
                Try(k + 1);
            }
            chuaxet[j] = true;
            sum -= c[x[k - 1]][x[k]];
        }
    }
}

void Solve()
{
    Input();
    Try(2);
    cout << ans << endl;
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