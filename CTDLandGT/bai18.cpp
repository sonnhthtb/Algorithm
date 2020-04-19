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
int n,S;
int a[100];
bool unVis[100];
int ans=1e9+7;
long long tong=0;
void Try(int i,int Sum){
	if(Sum<0) return;
	if(Sum>tong) return;
	if(i>=ans) return;
	for(int j=1;j<=n;j++){
		if(unVis[j]){
			unVis[j]=false;
			Sum-=a[j];
			tong-=a[j];
			if(Sum==0){
				ans=min(ans,i);
			}
			else{
				Try(i+1,Sum);
			}
			Sum+=a[j];
			tong+=a[j];
			unVis[j]=true;
		}
	}
}
void Solve(){
	cin >> n >> S;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		tong+=a[i];
		unVis[i]=true;
	}
	Try(1,S);
	if(ans==1e9+7) cout << "-1";
	else cout << ans;
}

int main(){
	int T=1;
	// cin >> T;
	while(T--){
		Solve();
	}
	return 0;
}