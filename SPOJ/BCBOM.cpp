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
void Solve(){
    while(1){
        int n,m;
        cin >> n >> m;
        if(n==0 && m==0) break;
        char a[n+5][m+5];
        int ans[n+5][m+5];
        for(int i=0;i<=n+3;i++){
            for(int j=0;j<=m+3;j++){
                a[i][j]='.';
                ans[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin >>a[i][j];
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(a[i][j]=='*') ans[i][j]=-1;
                else{
                    if(a[i-1][j-1]=='*'){
                        ans[i][j]++;
                    }
                    if(a[i-1][j]=='*'){
                        ans[i][j]++;
                    }
                    if(a[i-1][j+1]=='*'){
                        ans[i][j]++;
                    }
                    if(a[i][j-1]=='*'){
                        ans[i][j]++;
                    }
                    if(a[i][j+1]=='*'){
                        ans[i][j]++;
                    }
                    if(a[i+1][j-1]=='*'){
                        ans[i][j]++;
                    }
                    if(a[i+1][j]=='*'){
                        ans[i][j]++;
                    }
                    if(a[i+1][j+1]=='*'){
                        ans[i][j]++;
                    }
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(ans[i][j]!=-1)
                    cout << ans[i][j];
                else cout << "*";
            }
            cout << endl;
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