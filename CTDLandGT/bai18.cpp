#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, s, dem = 0;
	cin >> n >> s;
	long long a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = n - 1; i >= 0; i--)
	{
		if (s >= a[i])
		{
			long long x = s / a[i];
			dem += x;
			s -= x * a[i];
		}
	}
	cout << dem;
	return 0;
}
