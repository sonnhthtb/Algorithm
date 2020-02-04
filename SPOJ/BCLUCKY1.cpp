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
    string s;
    cin >> s;
    int cnt=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='4' || s[i]=='7') cnt++;
    }
    if(cnt ==4 || cnt ==7) cout << "YES";
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