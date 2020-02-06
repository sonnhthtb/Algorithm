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
    while(1){
        string s;
        cin >> s;
        if(s=="#") break;
        i64 a=0;
        i64 y=0;
        i64 n=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A') a++;
            if(s[i]=='Y') y++;
            if(s[i]=='N') n++;
        }
        if(s.size()-a<=a) cout <<"need quorum";
        else if(y>n) cout <<"yes";
        else if(y==n) cout << "tie";
        else cout <<"no";
        cout << endl;
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