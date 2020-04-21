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
int n, k;
int a[100];
void genNext();
void Display();
bool isLast() //kiem tra da phai la cau hinh cuoi chua
{
    for (int i = 1; i <= k; i++)
        if (a[i] != n - k + i)
            return false;
    return true;
}
void Init() //Thiet lap cau hinh dau tien
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
}
void Solve()
{

    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
    }
    genNext();
    if (isLast())
        Init();
    Display();
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
void Display()
{
    for (int i = 1; i <= k; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
}
void genNext()
{
    for (int i = k; i >= 1; i--)
    {
        if (a[i] != n - k + i)
        {
            a[i]++;
            for (int j = i + 1; j <= k; j++)
                a[j] = a[j - 1] + 1;
            break;
        }
    }
}