#include <iostream>
using namespace std;
int a[100000000], b[100000000], c[100000000];
int k, n;
int ans = 0;
int test()
{ // hÃ m dÃ¹ng d? in m?t c?u hÃ¬nh ra ngoÃ i
	for (int i = 1; i <= k; i++)
	{
		if (c[i] != b[i])
			return 0;
	}
	return 1;
}
void backtrack(int i)
{ // hÃ m quay lui
	for (int j = a[i - 1] + 1; j <= n - k + i; j++)
	{			  // xÃ©t cÃ¡c kh? nang c?a j
		a[i] = j; // ghi nh?n m?t giÃ¡ tr? c?a j
		if (i == k)
		{ // n?u c?u hÃ¬nh dÃ£ d? k ph?n t?
			if (test())
			{
				ans = 0;
				for (int o = 1; o <= k; o++)
				{
					//					cout << a[o]<<" ";
					//					cout << ans;
					for (int l = 1; l <= k; l++)
					{
						if (a[o] == b[l])
							ans++;
					}
				}
				//				cout << endl;
			}
			//			else
			{
				for (int u = 1; u <= k; u++)
				{
					c[u] = a[u];
				}
			}
		}
		else
		{
			backtrack(i + 1); // quay lui
		}
	}
}
void toHop()
{ // hÃ m li?t kÃª cÃ¡c t? h?p
	if (k >= 0 && k <= n)
	{
		a[0] = 0; // kh?i t?o giÃ¡ tr? a[0]
		backtrack(1);
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		for (int i = 0; i <= k; i++)
		{
			a[i] = 0;
			b[i] = 0;
			c[i] = 0;
		}
		for (int i = 1; i <= k; i++)
		{
			cin >> b[i];
		}
		toHop();
		cout << k - ans << endl;
		ans = 0;
	}
	return 0;
}