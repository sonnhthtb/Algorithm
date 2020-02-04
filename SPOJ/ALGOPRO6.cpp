#include <iostream>
using namespace std;
main ()
{
	int n,i,j,sum=0;
	cin >> n;
	int songay[100];
	for(i=1;i<=12;i++)
	{
		if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
		{
			songay[i]=31;
		}
		else if(i==2)
		{
			if((n%4==0 & n%100 !=0 )|| n%400==0)
			{
				songay[i]=29;
			}
			else
			{
				songay[i]=28;
			}
		}
		else
		{
			songay[i]=30;
		}
	}
	for(i=1;i<=12;i++)
	{
		for(j=1;j<=songay[i];j++)
		{
			sum=sum+(j%10)+(j/10)+(i%10)+(i/10)+(n%10)+((n/10)%10)+((n/100)%10)+(n/1000);
		}
	}
	cout << sum;
 return 0;
}

