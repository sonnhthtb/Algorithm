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
int n, c[1005][1005], x[N], used[N];

void Greedy()
{
    x[0] = 0;
    used[0] = 1;
    int i = 0;
    while (i < n)
    {
        int xi = 0;
        i++;
        int b = base;
        for (int j = 1; j < n; j++)
            if (used[j] == 0 && c[x[i - 1]][j] < b)
            {
                b = c[x[i - 1]][j];
                xi = j;
            }

        x[i] = xi;
        used[xi] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << x[i]<<" ";
    }
    cout << endl;
}
void Solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> c[i][j];
        }
    }
    Greedy();
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