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
//xet bai toan xau con chung lap lai dai nhat cua 2 xau con s
void Solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int dp[n + 1][n + 1]={0};
    s = ' ' + s;
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if(s[i]==s[j] && i!=j)
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    cout << dp[n][n] << endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}