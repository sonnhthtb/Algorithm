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
    cin >> n;
    int a[n+5];
    bool check=true;
    int maxx=-base;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]>0) check=false;
        maxx=max(maxx,a[i]);
    }
    if(check) cout << maxx<<' '<<maxx;
    else
    {
        long long ans=-inf;
        long long tmp=0;
        for(int i=0;i<n;i++){
            tmp+=a[i];
            if(tmp<0){
                tmp=0;
            }
            ans=max(ans,tmp);
        }
        long long ans2=0;
        for(int i=0;i<n;i++){
            if(a[i]>0) ans2+=a[i];
        }
        cout << ans<<" "<<ans2;
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