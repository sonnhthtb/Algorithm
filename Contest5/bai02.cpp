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
    int n;
    cin >> n;
    int a[n + 5];
    int dp[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dp[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        // cout<< dp[i]<<" ";
        ans = max(ans, dp[i]);
    }
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