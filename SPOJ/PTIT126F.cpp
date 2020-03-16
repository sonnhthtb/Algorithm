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
    string s;
    cin >> s;
    int n=s.size();
    int L=0,Lmax=0,R=0,Rmax=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            L++;
            Lmax++;
            ans=max(ans,(Lmax-R));
        }
        if(s[i]=='R'){
            R++;
            Rmax++;
            ans=max(ans,(Rmax-L));
        }
        if(s[i]=='?'){
            Lmax++;
            Rmax++;
            ans=max(ans,(Lmax-R));
            ans=max(ans,(Rmax-L));
        }
    }
    cout << ans;
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}