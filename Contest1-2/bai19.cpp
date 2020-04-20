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
void Display(int a[], int n)
{
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << a[i];
        }
        else
            cout << " " << a[i];
    }
    cout << "]"<< endl;
}
void Try(int a[], int n)
{
    int b[1000];
    if (n < 2)
        return; 
    for (int i = 0; i < n - 1; i++)
    {
        b[i] = a[i] + a[i + 1];
    }
    Display(b, n - 1);
    Try(b, n - 1);
}
void Solve()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Display(a, n);
    Try(a, n);
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