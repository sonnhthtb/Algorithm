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
struct Dv{
	int W;
	int V;
};
 
bool cmp(Dv a,Dv b){
	return a.V*b.W> b.V*a.W;
}
int Sum(Dv a[]);
void Try(int i);
void Solve(){
    Dv a[10000];
	cin >> n>>M;
	for(int i=1;i<=n;i++){
		cin >> a[i].W;
		cin >> a[i].V;
	}
	sort(a+1,a+n+1,cmp);
    for(int i=0;i<2;i++){
        x[i]=i;
        if()
    }
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}
int Sum(Dv a[]){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=x[i]*a[i].V;
	}
	return sum;
} 