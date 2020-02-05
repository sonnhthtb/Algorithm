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
    int a,b,c,m[105],t=3,x,y,s=0;
	cin>>a>>b>>c;
	for(int i=1;i<=100;i++)m[i]=0;
	while(t--){
		cin>>x>>y;
		for(int i=x;i<y;i++)m[i]++;
	}
	for(int i=0;i<=100;i++){
		if(m[i]==1)s=s+a;
		if(m[i]==2)s=s+b*2;
		if(m[i]==3)s=s+c*3;
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