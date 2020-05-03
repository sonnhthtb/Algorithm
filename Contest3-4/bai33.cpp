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
long long reverse(long long n){
    long long r=0;
    while(n>0){
        r=r*10+n%10;
        n/=10;
    }
    return r;
}
long long poww(i64 n,i64 k){
    if(k==0) return 1;
    long long x=poww(n,k/2);
    if(k%2==0) return (x*x%base);
    else return n*(x*x%base)%base;
}
void Solve(){
    long long n;
    cin >> n;
    long long r=reverse(n);
    cout << poww(n,r)<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}