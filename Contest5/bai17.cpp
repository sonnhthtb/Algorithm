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
    int a[n + 5];
    int dp[n + 5];
    int dp1[n+5];
    dp[0] = 0;
    dp1[n+1]=0;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        dp[i] = a[i];
        dp1[i] = a[i];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j < i; j++){
            if(a[i]>a[j])
                dp[i] = max(dp[i], dp[j] + a[i]);
        }
    }
    for (int i = n; i >=1; i--){
        for (int j = n; j > i; j--){
            if(a[i]>a[j])
                dp1[i] = max(dp1[i], dp1[j] + a[i]);
        }
    }
    for (int i = 1; i < n; i++){
        ans = max(dp[i] + dp1[i] - a[i], ans);
    }
    cout << ans << endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}