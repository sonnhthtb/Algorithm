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
int a[N];
void genNext();
void Display();
void Solve()
{
    string s;
    cin >> s;
    n = s.size();
    for (int i = 0; i < s.size(); i++)
    {
        a[i] = (int)(s[i] - '0');
        // cout << a[i];
    }
    genNext();
    Display();
}

int main()
{
    int T = 1;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        Solve();
    }
    return 0;
}
void Display()
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << endl;
}
void genNext()
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 1)
        {
            a[i] = 0;
        }
        else
        {
            a[i] = 1;
            break;
        }
    }
}