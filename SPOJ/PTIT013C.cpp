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
long long d(i64 x1,i64 y1,i64 x2,i64 y2){
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
void Solve(){
    i64 x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    long long ans=inf;
    for(int i=0;i<=1000000;i++){
        ans=min(ans,d(x1,y1,i,0)+d(x2,y2,i,0));
        // if(ans<0){ cout << i << endl; break;}
    }
    cout << ans<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}