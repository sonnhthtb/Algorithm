#include <iostream>

using namespace std;

int n, a[12][12];

void in()
{
	int i, j;
	for(i=1; i<=n; i++)
	{
		cout<<"[";
		for(j=1; j<i; j++)		
			cout<<a[i][j]<<" ";
		cout<<a[i][i]<<"]";
	}
}
void dequy(int i)
{
	int j;
	if(i == 0)	return;
	for(j=1; j<i;  j++)
	{
		a[i-1][j] = a[i][j] + a[i][j+1];
	}
	dequy(i-1);
}
main()
{
	int t, i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=1; i<=n; i++)
		{
			cin>>a[n][i];
		}
		dequy(n);
		in();
	}
}