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
    int x, y;
    cin >> x >> y;
    if (x == 2)
    {
        if (y == 1)
            cout << "4";
        else
            cout << "5";
    }
    else
    {
        if (x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12)
        {
            if (y > 5)
                cout << "6";
            else
                cout << "5";
        }
        else
        {
            if (y > 6)
                cout << "6";
            else
                cout << "5";
        }
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