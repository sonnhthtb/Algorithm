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
i64 dp[101][50001];
int n,k;
void Solve(){
    cin >> n >>k;
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            for(int m=0;m<=9;m++){
                if(i==1 && m==0) continue;
                if(m<=j){
                    dp[i][j]=(dp[i][j]%base+dp[i-1][j-m]%base)%base;
                }
            }
        }
    }
    cout << dp[n][k]<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}