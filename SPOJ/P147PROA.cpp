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
    long long a,b,c;
    cin >> a >> b >> c;
    long long x=sqrt(a*b*c)/a;
    long long y=sqrt(a*b*c)/b;
    long long z=sqrt(a*b*c)/c;
    cout << 4*(x+y+z);
}
int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}