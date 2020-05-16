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
    for (int i = 1; i <= n;i++){
        cin >> a[i];
    }
    long long dp[n + 5] = {0};
    dp[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        dp[i] = max(a[i] + dp[i - 2], dp[i - 1]);
    }
    cout << dp[n] << endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}