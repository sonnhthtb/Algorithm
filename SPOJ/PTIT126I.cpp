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

void Solve(){
    string A, B;
	cin>>A>>B;
	int R=B.length();
	int C=A.length();
	int vth=0, vtc=0;
	int kt=0;
	for (int i=0; i<C; i++)
	{
		for (int j=0; j<R; j++)
		{
			if (A[i]==B[j])
			{
				vtc=i;
				vth=j;
				kt=1;
				break;
			}
		}
		if (kt==1) break;
	}
	for (int i=0; i<R; i++)
	{
		for (int j=0; j<C; j++)
		{
			if (i==vth) cout<<A[j];
			else if (j==vtc) cout<<B[i];
			else cout<<".";
		}
		cout<<endl;
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