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
    int n;
    cin >> n;
    int a[N];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    i64 cnt = 1;
    i64 ans = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
            cnt++;
        else
        {
            ans = max(ans, cnt);
            cnt = 1;
        }
    }
    ans=max(ans,cnt);
    cout << ans;
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