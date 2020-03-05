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
    int a[n+5][15];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=11;j++){
            cin >> a[i][j];
        }
    }
    long long sum=0;
    long long ans=0;
    for(int i=1;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            for(int k=j+1;k<=n;k++){
                sum=0;
                for(int u=1;u<=11;u++){
                    sum+= max(max(a[i][u],a[j][u]),a[k][u]);
                }
                ans=max(ans,sum);
            }
        }
    }
    cout << ans<<endl;
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}