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
    int ins, del, cp;
    cin >> ins >> del >> cp;
    if(n==1){
        cout << ins << endl;
        return;
    }
    long long dp[n + 5] = {0};
    dp[1] = ins;
    for (int i = 2; i <= n; i++)
    {
        if(i%2==0)
            dp[i] = min(dp[i - 1] + ins, dp[i / 2] + cp);
        else
            dp[i] = min(dp[i - 1] + ins, dp[(i + 1) / 2] + cp + del);
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