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
        a[i] = 0;
    }
}
void Display()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << endl;
}
bool isLast()
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != 1)
            return false;
    }
    return true;
}
void genNext()
{
    for (int i = n; i > 0; i--)
    {
        if (a[i] == 0)
        {
            a[i] = 1;
            break;
        }
        else
            a[i] = 0;
    }
}
 