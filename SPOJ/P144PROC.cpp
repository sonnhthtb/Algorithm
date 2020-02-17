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

long long poww(long long a,long long b){
    if(b==0) return 1;
    if(b==1) return a % base;
    long long tmp=poww(a,b/2);
    if(b%2==0) return ((tmp%base)*(tmp%base))%base;
    if(b%2==1)  return ((((tmp%base)*(tmp%base))%base)*(a%base))%base
}

void Solve(){
    long long a,b;
    while(1){
        cin >> a>>b;
        if(a==0 && b==0) break;
        else cout << poww(a,b)<<endl;
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