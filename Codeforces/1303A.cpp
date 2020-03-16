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
    if(s.length()==1){
        cout << 0<<endl;
        return;
    }
    while(s[0]=='0' && s.length()!=0){
        s.erase(0,1);
    }
    while(s[s.length()-1]=='0' && s.length()!=0){
        s.erase(s.length()-1,1);
    }
    // cout << s<<endl;
    i64 ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') ans++;
    }
    cout << ans<<endl;
}

int main(){
    int T=1;
    cin >> T;
    cin.ignore();
    while(T--){
        Solve();
    }
    return 0;
}