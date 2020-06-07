#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
ll k;
string s;
void Input()
{
    cin >> k;
    cin >> s;
}

void Solve()
{
    ll cnt[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        cnt[s[i] - 'A']++;
    }
    priority_queue < ll> pq;
    for (int i = 0; i < 256; i++)
    {
        if (cnt[i] != 0)
        {
            pq.push(cnt[i]);
        }
    }
    while (k--)
    {
        long long a = pq.top();
        pq.pop();
            a--;
        // cout << a << endl;
        pq.push(a);
    }
    long long ans = 0;
    while (!pq.empty())
    {
        ll a = pq.top();
        ans += a * a;
        pq.pop();
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