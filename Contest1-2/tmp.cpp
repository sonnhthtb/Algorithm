#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long uc = a[0];
    int dem = 0;
    for (int i = 1; i < n; i++)
    {
        uc = __gcd(uc, a[i]);
    }
    for (int i = 1; i  <= sqrt(uc); i++)
    {
        if (uc % i == 0)
        {
            dem++;
            if (uc / i != i)
            {
                dem++;
            }
        }
    }
    cout << dem;
    return 0;
}