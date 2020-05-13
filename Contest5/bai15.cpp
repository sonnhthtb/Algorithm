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
int dp[101][101][101];
void Solve(){
    int n, m, k;
    cin >> n >> m >> k;
    string a, b, c;
    cin >> a >> b >> c;
    memset(dp, 0, sizeof(dp));
    a = ' ' + a;
    b = ' ' + b;
    c = ' ' + c;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            for (int u = 1; u <= k; u++){
                if(a[i] == b[j] && b[j] == c[u])
                    dp[i][j][u] = dp[i - 1][j - 1][u - 1] + 1;
                else
                    dp[i][j][u] = max(dp[i - 1][j][u], max(dp[i][j - 1][u], dp[i][j][u - 1]));
            }
        }
    }
    cout << dp[n][m][k] << endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}