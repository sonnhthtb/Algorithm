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
    int c,n;
    cin >> c >> n;
    int a[n + 5];
    int dp[c + 5] = {0};
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = c; j >= a[i];j--){
            if(dp[j] == 1 || dp[j-a[i]] == 1)
                dp[j] = 1;
        }
    }
    for (int i = c; i >= 0;i--){
        // cout << dp[i] << ' ';
        if (dp[i] == 1)
        {
            cout << i<<endl;
            return;
        }
    }
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}