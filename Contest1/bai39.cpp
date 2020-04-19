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

string s;
i64 n;
i64 m;
void find(i64 m,i64 l){
    if(m<=n){
        cout << s[m]<<endl;
        return;
    }
    if(m<=l/2){
        return find(m,l/2);
    }
    else if(m==(l/2+1)){
        return find(l/2,l/2); 
    }
    else{
        return find(m-l/2-1,l/2);
    }
}


void Solve(){
    cin >> s;
    cin >> m;
    n=s.size();
    i64 l=s.size();
    s=' '+s;
    while(l<m) l*=2;
    find(m,l);
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}