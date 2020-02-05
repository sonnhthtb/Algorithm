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
    int n;
	cin>>n;
	for(int i=0;i<=n;i++){
		for(int j=1;j<=2*n-i*2;j++)printf(" ");
		for(int j=0;j<i;j++)printf("%d ",j);
		printf("%d",i);
		for(int j=i-1;j>=0;j--)printf(" %d",j);
		printf("\n");
	}
	for(int i=n-1;i>=0;i--){
		for(int j=1;j<=2*n-i*2;j++)printf(" ");
		for(int j=0;j<i;j++)printf("%d ",j);
		printf("%d",i);
		for(int j=i-1;j>=0;j--)printf(" %d",j);
		if(i>0)printf("\n");
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