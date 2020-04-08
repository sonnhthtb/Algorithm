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
    string s;
    cin >> s;
    int n = s.size();
    int x[20] = {0}, res[20] = {0};
    for (int i = 1; i <= n; i++)
    {
        x[i] = s[i - 1] - '0';
    }
    for (int i = 1; i <= n; i++)
    {
        res[i] = (x[i - 1] ^ x[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << res[i];
    }
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