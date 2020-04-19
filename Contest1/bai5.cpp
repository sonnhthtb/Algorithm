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
int n, k;
int a[10000];
void Display()
{
    for (int i = 1; i <= k; i++)
    {
        cout << a[i];
    }
    cout << ' ';
}
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
            Display();
        else
            Try(i + 1);
    }
}
void Solve()
{
    cin >> n >> k;
    a[0] = 0;
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