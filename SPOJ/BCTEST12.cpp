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
    vector <char> v;
    for(int i=0;i<s.size();i++){
        if(s[i]!='e'  && s[i]!='u'&& s[i]!='o' && s[i]!='a' && s[i]!='i' && s[i]!='E'  && s[i]!='U'&& s[i]!='O' && s[i]!='A' && s[i]!='I' && s[i]!='y' && s[i]!='Y'){
            if(s[i]>='A' && s[i] <='Z'){
                s[i]=char(s[i]+32);
            }
            v.pb('.');
            v.pb(s[i]);
        }
    }
    for(auto x:v) cout << x;
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}