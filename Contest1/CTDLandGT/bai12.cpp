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
int n, k, a[1000];
void Display()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << endl;
}
bool check()
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a[i];
    }
    if (sum == k)
        return true;
    else
        return false;
}
void Try(int i)
{
    for (int j = 0; j < 2; j++)
    {
        a[i] = j;
        if (i == n)
        {
            if (check())
                Display();
        }
        else
            Try(i + 1);
    }
}
void Solve()
{
    cin >> n >> k;
    Try(1);
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