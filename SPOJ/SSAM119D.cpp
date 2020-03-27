#include <bits/stdc++.h>
using namespace std;
int dp[5005][5005]={0};
vector <char> fi;
vector <char> la;
string s;
void Try(int i,int j)
{
	if(i==j) 
	{
		fi.push_back(s[i]);
		return;
	}
	if(i>j) return;
	if(s[i]==s[j]){
		fi.push_back(s[i]);
		la.push_back(s[j]);
		Try(i+1,j-1);
		return;
	}
	if(dp[i+1][j]>dp[i][j-1]) Try(i+1,j);
	else Try(i,j-1);
}
void Solve()
{
	for(int i=0;i<5005;i++){
		for(int j=0;j<5005;j++) dp[i][j]=0;
	}
	cin >> s;
	int n=s.size();
	for(int j=0;j<n;j++)
	{
		for(int i=j;i>=0;i--)
		{
			if(i==j) dp[i][j]=1;
			else
			{
				if(s[i]==s[j]) dp[i][j] =dp[i+1][j-1]+2;
				else dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
			}
		}
	}
	cout << dp[0][n-1]<<endl;
}
 
int main()
{
	int T;
	cin >> T;
	cin.ignore();
	while(T--)
	    Solve();
    return 0;
} 