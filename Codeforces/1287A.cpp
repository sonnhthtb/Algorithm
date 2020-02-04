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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int dem=0;
    int ans=0;
    bool check=false;
    for(int i=0;i<s.size();i++){
        if(check && (s[i]=='A')){
            ans=max(ans,dem);
            dem=0;
        }
        if(s[i]=='A'){
            check=true;
            dem=0;
        }
        else{
            dem++;
        }
    }
    if(check)
        ans=max(ans,dem);
    cout << ans;
    cout << endl;
}
int main(){
    int T=1;
    cin >> T;cin.ignore();
    while(T--){
        Solve();
    }
    return 0;
}