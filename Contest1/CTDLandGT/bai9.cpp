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
int n;
int x[20], res[20];
void Result()
{
    for (int i = 1; i <= n; i++)
        cout << res[i];
    cout << ' ';
}
void Try(int k)
{
    for (int i = 0; i < 2; i++)
    {
        x[k] = i;
        res[k] = (x[k] ^ x[k - 1]);
        if (k == n)
            Result();
        else
            Try(k + 1);
    }
}
void Solve()
{
    cin >> n;
    Try(1);
    cout << endl;
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