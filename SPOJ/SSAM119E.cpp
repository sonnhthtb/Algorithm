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
long long C(int k, int n){
	long long r = 1;
	for (int i = 1; i <= k; i++,n--)
		r = r*n%M*exp(i,M-2)%M;
	return r%M;
}
int a[10]={10,45,120,210,252,210,120,45,10,1};
int main (){
	int t;
	cin>>t;
	int a[10]={10,45,120,210,252,210,120,45,10,1};
	while(t--){
		int n;
		cin>>n;
		long long ans=0;
		for(int i=0;i<10;i++){
			ans= (ans+ a[i]*C(i,n-1))%M;
		}
		cout<<ans<<endl;
	}
	return 0;
}
void Solve(){
    int n;
		cin>>n;
		long long ans=0;
		for(int i=0;i<10;i++){
			ans= (ans+ a[i]*C(i,n-1))%M;
		}
		cout<<ans<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}