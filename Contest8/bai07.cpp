// Tim so luong so BDN nho hon so nguyen duong K

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
ll s;
void Input()
{
    cin >> s;
}

//BFS in a tree with 2 nodes are 0 and 1
void Solve()
{
    queue <ll> qe;
    qe.push(1);
    long long ans = 0;
    long long s1 = 1;
    while (!qe.empty())
    {
        s1 = qe.front();
        qe.pop();
        // cout << s1 << " " << s << endl;
        if (s1 <= s)
        {
            ans++;
            qe.push(s1*10);
            qe.push(s1*10+1);
        }
    }
    cout << ans << endl;
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