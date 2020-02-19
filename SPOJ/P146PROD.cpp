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
    int cnt[n+5]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            int x;
            cin >> x;
            cnt[i]+=x;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(cnt[i]>=2) ans++;
    }
    cout << ans;

}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}