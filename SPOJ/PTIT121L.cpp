#include<bits/stdc++.h>
#include<math.h>
using namespace std;
long kt(long a[],long b[])
{
long h=0;
	for(int i=1;i<=3;i++)
	{
		if(a[i]>h)h=a[i];
		if(b[i]>h)h=b[i];
	}
	if(a[1]==a[2]&&a[2]==a[3]&&a[3]==h)
	{
		if(b[1]+b[2]+b[3]!=h)return 0;
		return h;
	}
	else if(a[1]==a[2]&&a[2]!=a[3]&&a[1]==h)return 0;
	if(a[1]==a[2]&&a[2]==b[3]&&b[3]==h)
	{
		if(b[1]+b[2]+a[3]!=h)return 0;
		return h;
	}else if(a[1]==a[2]&&a[2]!=b[3]&&b[2]==h)return 0;
	if(a[1]==b[2]&&b[2]==a[3]&&a[3]==h)
	{
		if(b[1]+a[2]+b[3]!=h)return 0;
		return h;
	}
	if(a[1]==b[2]&&b[2]==b[3]&&b[3]==h)
	{
		if(b[1]+a[2]+a[3]!=h)return 0;
		return h;
	}
	if(b[1]==a[2]&&a[2]==a[3]&&a[3]==h)
	{
		if(a[1]+b[2]+b[3]!=h)return 0;
		return h;
	}
	if(b[1]==a[2]&&a[2]==b[3]&&b[3]==h)
	{
		if(a[1]+b[2]+a[3]!=h)return 0;
		return h;
		
	}
	if(b[1]==b[2]&&b[2]==a[3]&&a[3]==h)
	{
		if(a[1]+a[2]+b[3]!=h)return 0;
		return h;
	}
	if(b[1]==b[2]&&b[2]==b[3]&&b[3]==h)
	{
		if(a[1]+a[2]+a[3]!=h)return 0;
		return h;
	}
	if(a[1]==h)//
	{
		if(a[2]+a[3]==h)
		{
			if((b[2]==b[3])&&b[2]+b[1]==h)return h;
			return 0;
		}
		if(a[2]+b[3]==h)
		{
				if((b[2]==a[3])&&b[2]+b[1]==h)return h;
			return 0;
		}
		if(b[2]+a[3]==h)
		{
				if((a[2]==b[3])&&a[2]+b[1]==h)return h;
			return 0;
		}
		if(b[2]+b[3]==h)
		{
				if((a[2]==a[3])&&a[2]+b[1]==h)return h;
			return 0;
		}
	}
	if(a[2]==h)//
	{
		if(a[1]+a[3]==h)
		{
			if(b[1]==b[3]&&b[1]+b[2]==h)return h;
			return 0;
		}
		if(a[1]+b[3]==h)
		{
				if((b[1]==a[3])&&b[1]+b[2]==h)return h;
			return 0;
		}
		if(b[1]+a[3]==h)
		{
				if((a[1]==b[3])&&a[1]+b[2]==h)return h;
			return 0;
		}
		if(b[1]+b[3]==h)
		{
				if((a[1]==a[3])&&a[1]+b[2]==h)return h;
			return 0;
		}
	}
	if(b[1]==h)//
	{
		if(a[2]+a[3]==h)
		{
			if(b[2]==b[3]&&b[2]+a[1]==h)return h;
			return 0;
		}
		if(a[2]+b[3]==h)
		{
				if((b[2]==a[3])&&b[2]+a[1]==h)return h;
			return 0;
		}
		if(b[2]+a[3]==h)
		{
				if((a[2]==b[3])&&a[2]+a[1]==h)return h;
			return 0;
		}
		if(b[2]+b[3]==h)
		{
				if((a[2]==a[3])&&a[1]+a[2]==h)return h;
			return 0;
		}
	}
	if(b[2]==h)//
	{
		if(a[1]+a[3]==h)
		{
			if(b[1]==b[3]&&b[1]+a[2]==h)return h;
			return 0;
		}
		if(a[1]+b[3]==h)
		{
				if((b[1]==a[3])&&b[1]+a[2]==h)return h;
			return 0;
		}
		if(b[1]+a[3]==h)
		{
				if((a[1]==b[3])&&a[1]+a[2]==h)return h;
			return 0;
		}
		if(b[1]+b[3]==h)
		{
				if((a[1]==a[3])&&a[1]+a[2]==h)return h;
			return 0;
		}
	}
	
	if(a[3]==h)//
	{
		if(a[1]+a[2]==h)
		{
			if(b[1]==b[2]&&b[1]+b[3]==h)return h;
			return 0;
		}
		if(a[1]+b[2]==h)
		{
				if((b[1]==a[2])&&b[1]+b[3]==h)return h;
			return 0;
		}
		if(b[1]+a[2]==h)
		{
				if((a[1]==b[2])&&a[1]+b[3]==h)return h;
			return 0;
		}
		if(b[1]+b[2]==h)
		{
				if((a[1]==a[2])&&a[1]+b[3]==h)return h;
			return 0;
		}
	}
	if(b[3]==h)//
	{
		if(a[1]+a[2]==h)
		{
			if(b[1]==b[2]&&b[1]+a[3]==h)return h;
			return 0;
		}
		if(a[1]+b[2]==h)
		{
				if((b[1]==a[2])&&b[1]+a[3]==h)return h;
			return 0;
		}
		if(b[1]+a[2]==h)
		{
				if((a[1]==b[2])&&a[1]+a[3]==h)return h;
			return 0;
		}
		if(b[1]+b[2]==h)
		{
				if((a[1]==a[2])&&a[1]+a[3]==h)return h;
			return 0;
		}
	}
	return 0;
}
main()
{
	long a[5],b[5];
	for(int i=1;i<=3;i++)
	cin>>a[i]>>b[i];
	cout << kt(a,b);
}