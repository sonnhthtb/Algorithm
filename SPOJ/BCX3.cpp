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
int n,a[1000005];
void Solve(){
    cin >> n;
    long long ans=0;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ans+=a[i]^a[j];
        }
    }
    cout << ans;
}
int main(){
    int T=1;
    // cin >> T
    while(T--){
        Solve();
    }
    return 0;
}