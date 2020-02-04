#include <bits/stdc++.h>
#define i64 long long
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cout << #a " is " << (a) << endl;
 
const int N = 200005;
const long long base = 1e9+7;
const long long inf = 1e18+7;

using namespace std;
void Solve(){
    int n,m;
    cin >> n >> m;
    int a[m+5];
    for(int i=0;i<m;i++) cin >> a[i];
    sort(a,a+m);
    // for(int i=0;i<m;i++) cout <<  a[i]<<' ';
    int minn=INT_MAX;
    for(int i=0;i<m-n+1;i++){
        if(a[n-1+i]-a[i]<minn) minn=a[n-1+i]-a[i];
    }
    cout << minn;
}
int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}