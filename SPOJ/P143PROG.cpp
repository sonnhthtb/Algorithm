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
    long long n, k;
    cin >> n >> k;
    if (k % (n - 1) == 0)
        cout << n * (k / (n - 1)) - 1 << ' ' << n * (k / (n - 1));
    else
        cout << k + (k / (n - 1)) << " " << k + (k / (n - 1));
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