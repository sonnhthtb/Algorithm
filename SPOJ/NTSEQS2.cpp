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
int L[N]={0};
void Solve(){
    int n,s;
    cin >> n >> s;
    int a[n+5];
    L[0]=1;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++){
        for(int t=s;t>=a[i];t--){
            if(L[t]==0 && L[t-a[i]]==1) L[t]=1;
        }
    }
    if(L[s]==1) cout << "YES";
    else cout << "NO";
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}