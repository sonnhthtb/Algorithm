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

void Try(string s, int k, string &max)
{
    if (k == 0)
        return;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] < s[j])
            {
                swap(s[i], s[j]);
                if (s > max)
                    max = s;
                Try(s, k - 1, max);
                swap(s[i], s[j]);
            }
        }
    }
}

void Solve()
{
    string s;
    int k;
    cin >> k;
    cin.ignore();
    cin >> s;
    string max = s;
    Try(s, k, max);
    cout << max << endl;
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