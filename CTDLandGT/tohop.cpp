#include <bits/stdc++.h>
using namespace std;
int n, k, a[10000];

void Init();
void Display();
bool isLast();
void genNext();

int main()
{
    cin >> n >> k;
    Init();
    Display();
    while (!isLast())
    {
        genNext();
        Display();
    }
    return 0;
}

bool isLast() 
{
    for (int i = 1; i <= k; i++)
        if (a[i] != n - k + i)
            return false;
    return true;
}
void Init() 
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
}
void Display()
{
    for (int i = 1; i <= k; i++)
    {
        cout << a[i]<<' ';
    }
    cout << endl;
}
void genNext() 
{
    for (int i = k; i > 0; i--)
    {
        if (a[i] != n - k + i)
        {
            a[i]++;
            for (int j = i + 1; j <= k; j++)
            {
                a[j] = a[j - 1] + 1;
            }
            break;
        }
    }
}