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

i64 d(i64 n){
    i64 sum=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            long long a;
            a=n/i;
            if(a==i) sum+=a;
            else {
                sum+=a;
                sum+=i;
            }
        }
    }
    return sum;
}

void Solve(){
    i64 n;
    cin >> n;
    if(d(d(n))==2*n) cout <<"YES\n";
    else cout << "NO\n";
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}