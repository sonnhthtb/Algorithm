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
vector<string> vt;
void Display()
{
    string s = "";
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
            s += 'A';
        else
            s += 'B';
    }
    vt.pb(s);
}
bool check()
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
        {
            sum++;
        }
        else
        {
            if (sum == k)
                return true;
            else
                sum = 0;
        }
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
    cout << vt.size() << endl;
    for (int i = 0; i < vt.size(); i++)
    {
        cout << vt[i] << endl;
    }
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