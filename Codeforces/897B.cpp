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
    int k, p;
    cin >> k >> p;
    long long ans=0;
    for (int i = 1; i <= k; i++)
    {
        i64 tmp = i, r = 0, dec = 1;
        while (tmp)
        {
            r = (r * 10 + tmp % 10);
            tmp /= 10;
            dec *= 10;
        }

        ans = (ans + dec * i + r) % p;
    }

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