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
    // long long tmp=1;
    long long gt=1;
    int n=s.size();
    long long ans=0;
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++){
        gt*=(i+1);
        ans+=(s[i]-'0')*gt;
        // cout << ans<<endl;
        
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