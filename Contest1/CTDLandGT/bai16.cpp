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
int n, a[1000], k;
int C[1000][1000] = {0};
bool check[1000];
vector<string> v;
int Sum()
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += C[i][a[i]];
    }
    return sum;
}
void Init()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
        check[i] = true;
    }
}
void Display()
{
    string s;
    for (int i = 1; i <= n; i++)
    {
        s += (char)(a[i] + '0');
        s += ' ';
    }
    v.push_back(s);
}

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (check[j])
        {
            a[i] = j;
            check[j] = false;
            if (i == n)
            {
                // cout << Sum()<<endl;
                if (Sum() == k)
                    Display();
            }
            else
                Try(i + 1);
            check[j] = true;
        }
    }
}
void Solve()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> C[i][j];
        }
    }
    Init();
    Try(1);
    cout << v.size() << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }
    // cout << endl;
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