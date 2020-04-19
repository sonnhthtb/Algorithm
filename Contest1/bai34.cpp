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
bool a[1000], xuoi[1000], nguoc[1000];
int c[100][100];
int X[100];
long long ans = 0;
i64 Sum()
{
    i64 sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += c[i][X[i]];
    }
    return sum;
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (a[j] && xuoi[i - j + n] && nguoc[i + j - 1])
        {
            X[i] = j;
            a[j] = false;
            xuoi[i - j + n] = false;
            nguoc[i + j - 1] = false;
            if (i == n)
            {
                ans = max(ans, Sum());
            }
            else
                Try(i + 1);
            a[j] = true;
            xuoi[i - j + n] = true;
            nguoc[i + j - 1] = true;
        }
    }
}
void init()
{
    for (int i = 0; i < 1000; i++)
    {
        a[i] = true;
        xuoi[i] = true;
        nguoc[i] = true;
    }
}
void Solve()
{
    n = 8;
    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> c[i][j];
        }
    }
    init();
    Try(1);
    cout << ans << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        Solve();
    }
}