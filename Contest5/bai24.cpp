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
    int n,m;
    cin >> n >> m;
    i64 dp[n + 5][m + 5];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n + 1; i++)
    {
        for (int j = 1; j <= m + 1; j++){
            if(i==1 || j==1)
                dp[i][j] = 1;
            else
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    cout << dp[n + 1][m + 1] << endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}