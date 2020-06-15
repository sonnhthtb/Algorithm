// bien doi S thanh T bang -- or *2
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int s, t;
void Input()
{
    cin >> s;
}

struct data
{
    int val;
    int cnt;
};

void Solve()
{
    t = 1;
    map<ll, int> visit;
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
        visit[s1.val] = 1;
        int m = sqrt(s1.val);
        for (int i = m; i >= 2; i--)
        {
            if (s1.val % i == 0 && visit[s1.val / i] == 0)
            {
                visit[s1.val / i] = 1;
                x.val = s1.val / i;
                x.cnt = s1.cnt + 1;
                qe.push(x);
            }
        }
        if (s1.val - 1 >= 0 && visit[s1.val - 1] == 0)
        {
            visit[s1.val - 1] = 1;
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