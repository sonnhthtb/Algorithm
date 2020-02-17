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
    int a[N];
    for(int i=0;i<n;i++) cin >> a[i];
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            ans++;
            a[i]++;
        }
    }
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    if(sum==0) ans++;
    cout << ans<<endl;

}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}