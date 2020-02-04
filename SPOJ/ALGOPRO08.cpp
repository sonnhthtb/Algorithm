#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	if(n>m)
	{
		cout << m << " "<< (n-m)/2;	
	}
	else
	{
		cout << n <<" "<< (m-n)/2;
	}
	return 0;
}