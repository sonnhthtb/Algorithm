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
        string s;
        cin >> s;
        if(s=="0") break;
        long long ans=0;
        for(int i=0;i<s.size();i++){
            int x=s[i]-'0';
            if(x>4) x--;
            ans=9*ans+x;
        }
        cout <<s<<": "<<ans<<endl; 
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