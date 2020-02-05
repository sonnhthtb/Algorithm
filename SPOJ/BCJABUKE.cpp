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
    i64 m,n;
    cin >> n >> m;
    i64 J;
    cin >> J;
    i64 dau=1,cuoi =m;
    i64 ans=0;
    for(int i=0;i<J;i++){
        i64 x;
        cin >> x;
        if(x >= dau && x<= cuoi) continue;
        else{
            i64 tmp=min(abs(x-dau),abs(x-cuoi));
            ans+=tmp;
            if(x< dau){
                dau=dau-tmp;
                cuoi=cuoi -tmp;
            }
            else{
                cuoi=cuoi + tmp;
                dau=dau + tmp;
            }
        }
    }
    cout << ans<<endl;
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}