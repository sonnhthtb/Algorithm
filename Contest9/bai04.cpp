#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
vector<int> ke[10005];
int a[1005][1005];
int n;
string s;
void Input()
{
    memset(a, 0, sizeof(a));
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        ke[i].clear();
    }
    for (int i = 1; i <= n; i++)
    {

        getline(cin, s);
        int x = 0;
        for (int j = 0; j <= s.size(); j++)
        {
            if (s[j] == ' ' || j == s.size())
            {
                ke[i].push_back(x);
                x = 0;
            }
            else
            {
                x = x * 10 + (s[j] - '0');
            }
        }
    }
}

void Solve()
{
    for (int i = 1; i <= n; i++)
    {
        sort(ke[i].begin(), ke[i].end());
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < ke[i].size(); j++)
        {
            a[i][ke[i][j]] = 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << " ";
            
        }
        cout << endl;
    }
}
int main()
{
    int T = 1;
    // cin >> T;
    while (T--)
    {
        Input();
        Solve();
    }
    return 0;
}