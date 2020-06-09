// bien doi S thanh T bang -- or *2
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int s, t;
void Input()
{
    cin >> s >> t;
}

struct data
{
    int val;
    int cnt;
};

//BFS in a tree with 2 nodes are -- and *2
void Solve()
{
    set<int> visit;
    queue<data> qe;
    data x = {s, 0};
    qe.push(x);
    while (!qe.empty())
    {
        data s1 = qe.front();
        qe.pop();
        // cout << s1.val << endl;
        if (s1.val == t)
        {
            cout << s1.cnt << endl;
            return;
        }
        visit.insert(s1.val);
        if (s1.val * 2 == t || s1.val - 1 == t)
        {
            cout << s1.cnt + 1 << endl;
            return;
        }
        if (visit.find(s1.val * 2) == visit.end() && s1.val < t)
        {
            x.val = s1.val * 2;
            x.cnt = s1.cnt + 1;
            qe.push(x);
        }
        if (s1.val - 1 >= 0 && visit.find(s1.val - 1) == visit.end())
        {
            x.val = s1.val - 1;
            x.cnt = s1.cnt + 1;
            qe.push(x);
        }
    }
}
int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        Input();
        Solve();
    }
    return 0;
}