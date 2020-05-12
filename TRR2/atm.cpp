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
int n, S, x[N], t[N];

void Greedy()
{
    int i = 0;
    int sum = S;
    while (i < n)
    {
        if (t[i] <= sum)
        {
            x[i] = 1;
            sum = sum - t[i];
        }
        if (sum == 0)
            break;
        else
            i++;
    }
    for(int i=0;i<n;i++){
        if(x[i]) cout << t[i]<<' ';
    }
    cout << endl;
}

void Solve()
{
    cin >> n >> S;
    for (int i = 0; i < n; i++)
        cin >> t[i];
    sort(t,t+n,greater<int>());
    Greedy();
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