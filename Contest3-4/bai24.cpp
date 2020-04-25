#include <bits/stdc++.h>
#define i64 long long
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cerr << #a " is " << (a) << endl;
 
const int N = 200005;
const long long base = 123456789;
const long long inf = 1e18+7;

using namespace std;
long long poww(i64 n,i64 k){
    if(k==1) return n%base;
    if(k==0) return 1;
    long long x=poww(n,k/2);
    if(k%2==0) return ((x%base)*(x%base))%base;
    else return ((((x%base)*(x%base))%base)*(n%base))%base;
}
void Solve(){
    i64 n;
    cin >> n;
    cout << poww(2,n-1)<<endl;
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}