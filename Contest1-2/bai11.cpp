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

void Solve()
{
    string gray;
    cin >> gray;
    string b = "";
    b += gray[0];
    for (int i = 1; i < gray.size(); i++)
    {
        if (gray[i] == '0')
            b += b[i - 1];
        else
        {
            if (b[i - 1] == '0')
                b += '1';
            else
                b += '0';
        }
        // cout << b<<endl;
    }
    cout << b << endl;
}

int main()
{
    int T = 1;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        Solve();
    }
    return 0;
}