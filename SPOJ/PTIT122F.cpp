#include <bits/stdc++.h>
#define i64 long long
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cerr << #a " is " << (a) << endl;
 
const int N = 200005;
const long long base = 1e9+7;
const long long inf = 1e18+7;

using namespace std;
long long Pow(int a, int n)
{
	long res=1;
	while (n--)
		res*=a;
	return res;
}
void Solve(){
    string s1,s2;
	cin>>s1;
	while (s1!="#")
	{
		cin>>s2;
		int dem=(int) count(s1.begin(),s1.end(),'?');
        int l=s1.size();
        long long res=0;
        for (int i=0; i<l; ++i)
        {
            if (s1[i]==s2[i])
                continue;
            if (s1[i]!='?' && s1[i]<s2[i])
                break;
            if (s1[i]!='?' && s1[i]>s2[i])
            {
                res+=Pow(10,dem);
                break;
            }
            if (s1[i]=='?')
            {
                res+=(9-(s2[i]-'0'))*(Pow(10,dem-1));
                --dem;
            }
        }
	    cout<<res<<endl;
		cin>>s1;
	}
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}