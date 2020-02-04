#include <bits/stdc++.h>
#define i64 long long
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cout << #a " is " << (a) << endl;
 
const int N = 200005;
const long long base = 1e9+7;
const long long inf = 1e18+7;

using namespace std;

int Dp[2005][2005];

void Solve(){
    string a,b;
    cin >> a;
    cin.ignore();
    cin >> b;
    int n=a.size();
    int m=b.size();
    a=' '+a;
    b=' '+b;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i]==b[j]) Dp[i][j]=Dp[i-1][j-1]+1;
            else Dp[i][j]=max(Dp[i-1][j],Dp[i][j-1]);
        }
    }
    cout << Dp[n][m];
}
int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}