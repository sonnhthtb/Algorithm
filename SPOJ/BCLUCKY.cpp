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
    long long n, x, d=0;
	cin>>n>>x;
	long long a[n+1], gtri = n, kq=0;
	for(long long i=0; i<n; i++)
		scanf("%lld", &a[i]);
	sort(a, a+n);
	long long max = a[0], ts=1;
	for(long long i=1; i<n; i++){
		if(a[i]>max){
			max = a[i];
			ts = 1;
		}
		else
			ts++;
		if(a[i]<a[i+1] || i==n-1)
		if(ts<=gtri){
			gtri = ts;
			kq = a[i];
		}
	}
	cout<<n*x - kq*gtri;
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}