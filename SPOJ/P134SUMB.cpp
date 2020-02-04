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
    long long n, k, a, b, x, y;
    cin >> n >> k;
    a = n + k;
    b = (n + 4) / 2;
    x = fabs((-b + sqrt(b * b - 4 * a)) / 2);
    y = b - x;
    cout << min(x, y) << " " << max(x, y);
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