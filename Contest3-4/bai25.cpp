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
i64 F[93];
i64 n;
void Fibo()
{
	F[1]=1;
	F[2]=1;
	for(int i=3;i<=92;i++)
	{
		F[i]=(F[i-1]+F[i-2]);
	}
}
long long Search(long long k,long long n)
{
	if(n==1) return 1;
	else if(n==2) return 2;
	else if(k>F[n-2]) return Search(k-F[n-2],n-1);
	else if(k<=F[n-2]) return Search(k,n-2);
}
void Solve()
{
	long long k;
	cin >> n >> k;
	Fibo();
	if(Search(k,n)==1) cout <<'A'<<endl;
	else cout <<'B'<<endl;
}
int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}