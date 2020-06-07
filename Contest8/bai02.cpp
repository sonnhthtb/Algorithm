#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

queue<int> qe;
void Solve()
{
    string s;
    getline(cin, s);
    // cout << s << endl;
    if (s[1] == 'U')
    {
        int tmp = 0;
        for (int j = 5; j < s.size(); j++)
        {
            tmp = tmp * 10 + (s[j] - '0');
        }
        qe.push(tmp);
    }
    if (s[1] == 'R')
    {
        if (!qe.empty())
            cout << qe.front() << endl;
        else
            cout << "NONE" << endl;
    }
    if (s[1] == 'O')
    {
        if (!qe.empty())
            qe.pop();
    }
}
int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        Solve();
    }
    return 0;
}