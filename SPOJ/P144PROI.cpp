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
    long long l[150],r[150],max=-1;
	int n,s=-1;
	bool flag;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>l[i]>>r[i];
	for(int i=1;i<=n;i++){
		flag=1;
		for(int j=1;j<=n;j++){
			if(i!=j){
				if(l[j]<l[i]||r[j]>r[i]){
					flag=0;
					break;
				}
			}
		}
		if(flag&&r[i]-l[i]>max){
			s=i;
			max=r[i]-l[i];
		}
	}
	cout<<s;
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}