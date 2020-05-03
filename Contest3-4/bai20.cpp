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
    string s;
    cin >> s;
    vector<int> vt;
    int n = s.size();
    //danh dau lai tat ca cac vi tri cua [
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '[')
            vt.push_back(i);
    }
    int pos = 0;                                //vi tri cua [ hien tai
    int dem = 0;                                //kiem tra tinh dung dan cua bieu thu
    int ans = 0;                                //ket qua
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '[')
        {
            dem++;
            pos++;
        }
        else
        {
            dem--;
        }
        if (dem < 0)
        {                                       // khi bieu thuc sai
            ans += vt[pos] - i;                 // doi cho tu i den vi tri cua [ tiep theo
            swap(s[i], s[vt[pos]]);
            pos++;                              // tang vi tri [ tiep theo len 1
            dem = 1;                            // khoi tao lai bien kiem tra tinh dung dan
        }
    }
    cout << ans << endl;
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