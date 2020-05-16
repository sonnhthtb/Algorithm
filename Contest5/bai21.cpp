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
    int n, k;
    cin >> n >> k;
    int a[n + 5];
    int dp[k + 5]={0};
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= k;i++){
        for (int j = 0; j < n; j++){
            if(i>=a[j])
                dp[i] = (dp[i]%base + dp[i - a[j]]%base)%base;
        }
    }
    cout << dp[k] << endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}