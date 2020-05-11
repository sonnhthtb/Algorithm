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
int dp[1005][1005];
void Solve(){
    string s;
    cin >> s;
    int n=s.size();
    memset(dp,0,sizeof(dp));
    int ans=1;
    for(int i=0;i<n;i++) dp[i][i]=1;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            dp[i][i+1]=1;
            ans=2;
        }
    }
    for(int k=3;k<=n;k++){
        for(int i=0;i<n-k+1;i++){
            int j=i+k-1;
            if(s[i]==s[j] && dp[i+1][j-1]){
                dp[i][j]=1;
                ans=k;
            }
        }
    }
    cout << ans<<endl;
}

int main(){
    int T=1;
    cin >> T;
    cin.ignore();
    while(T--){
        Solve();
    }
    return 0;
}