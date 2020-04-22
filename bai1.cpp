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


void Try(long long n,int ans){
    if(n==0){
        cout << ans<<endl;
        return;
    }
    Try(n/10,ans+1);
}
void Solve(){
    long long n;
    cin >> n;
    Try(n,0);
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}