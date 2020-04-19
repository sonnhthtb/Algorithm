#include <bits/stdc++.h>
using namespace std;
int n, a[100000];

void Init();
void Display();
bool isLast();
void genNext();

int main()
{
    cin >> n;
    Init();
    Display();
    while (!isLast())
    {
        genNext();
        Display();
    }
    return 0;
}

void Init()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}
void Display()
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
    cout << endl;
}
bool isLast()
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != n - i + 1)
            return false;
    }
    return true;
}
void genNext()
{
    int pos = -1;
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