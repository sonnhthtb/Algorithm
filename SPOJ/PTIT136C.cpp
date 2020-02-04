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
int a[1005][1005];
void Solve(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    int x[n+5];
    x[n-1]=(a[n-1][n-2]+a[0][n-1]-a[0][n-2])/2;
    for(int i=n-2;i>=0;i--){
        x[i]=a[i+1][i]-x[i+1];
    }
    for(int i=0;i<n;i++) cout << x[i]<<" ";
}
int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}