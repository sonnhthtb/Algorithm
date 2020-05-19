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
    int n,v;
    cin >> n >> v;
    int a[n + 5], c[n + 5];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> c[i];
    }
    long long dp[n + 5][v + 5]={0};
    for (int i = 0; i < n;i++){
        for (int j = 0; j <= v; j++){
            if(i==0 || j==0)
                dp[i][j] = 0;
            else if(a[i]>j) 
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]+c[i]);
        }
    }
    cout << dp[n-1][v] << endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}