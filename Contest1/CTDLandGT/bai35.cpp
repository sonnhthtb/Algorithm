#include <bits/stdc++.h>
using namespace std;
int n, k, s;
int a[200000000], b[20000000];
long ans = 0;
void Try(int i)
{
	long long tmp1 = 0, tmp2 = 0;
	for (int j = 0; j <= 1; j++)
	{
		a[i] = j;
		if (i == (n - 1))
		{
			tmp1 = 0;
			tmp2 = 0;
			for (int u = 0; u < n; u++)
			{
				//				cout << a[k];
				if (a[u] == 1)
				{
					tmp1++;
					tmp2 += b[u];
					//					cout << tmp1<<" "<< tmp2<<endl;
				}
			}
			//			cout << tmp1 <<" "<<tmp2<<endl;

			if (tmp1 == k && tmp2 == s)
			{
				//					cout << tmp1 <<" "<<tmp2<<endl;
				++ans;
			}
		}
		else
			Try(i + 1);
	}
}
int main()
{
	while (1)
	{
		cin >> n >> k >> s;
		if (n == 0 && k == 0 && s == 0)
			break;
		for (int i = 0; i < n; i++)
			b[i] = i + 1;
		Try(0);
		cout << ans << endl;
		ans = 0;
	}
	return 0;
}