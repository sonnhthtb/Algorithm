#include <bits/stdc++.h>
#define i64 long long
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cerr << #a " iafs " << (a) << endl;
 
const int N = 200005;
const long long base = 1e9+7;
const long long inf = 1e18+7;

using namespace std;
int n;
int S;
int a[500];
int res = 99999;
 
void Try(int i , i64 sum , int d){
	if (sum>S || d>res) return;	
	if(i==n){
		if (sum == S) res = min(res,d);
		return;
	}
	Try(i+1,sum,d);
	Try(i+1,sum+a[i],d+1);
}
void Solve(){
    cin>>n;
	cin>>S;
	for(int i=0;i<n;i++) cin>>a[i];
	Try(0,0,0);
	if (res==99999) cout<<-1;
	else cout<<res;
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}