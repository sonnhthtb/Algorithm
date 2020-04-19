#include <bits/stdc++.h>
using namespace std;
int n, a[10000];
void Init();
bool isLast();
void genNext();
void Display();
void Solve()
{
    cin >> n;
    a[0] = 10000000;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    genNext();
    // if(isLast()) Init();
    Display();
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        Solve();
    }
}

void Init()
{ //Khoi tao cau hinh dau tien
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}
void Display()
{ //In ra cau hinh
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
}
bool isLast()
{ //Kiem tra da phai cau hinh cuoi chua
    for (int i = 1; i <= n - 1; i++)
    {
        if (a[i] < a[i + 1])
            return false;
    }
    return true;
}
void genNext()
{ //In cau hinh ke tiep
    int pos = 0;
    for (int i = n; i > 1; i--)
    {
        if (a[i] > a[i - 1])
        {
            pos = i - 1;
            break;
        }
    }
    for (int i = n; i >= 1; i--)
    {
        if (a[i] > a[pos])
        {
            swap(a[i], a[pos]);
            break;
        }
    }
    int l = pos + 1, r = n;
    while (l < r)
    {
        swap(a[l], a[r]);
        l++;
        r--;
    }
}