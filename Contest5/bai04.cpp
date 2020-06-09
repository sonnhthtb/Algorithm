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
    int n, k;
    cin >> n >> k;
    int a[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] = a[i] % k;
    }
    int dp[n + 1][k + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            dp[i][j] = -base;
        }
    }
    dp[0][0] = 0;
    //Do dai day con dp[i][j] la do dai day con co tong chia k du j va ket thuc tai i
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][(j - a[i] + k) % k] + 1);
        }
    }
    cout << dp[n][0] << endl;
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