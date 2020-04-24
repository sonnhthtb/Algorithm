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

void print(i64 p,i64 q){
    if(p==0 || q ==0 ) return;
    if(q%p==0){
        cout << "1/"<<q/p;
        return;
    }
    i64 n=q/p+1;
    cout << "1/"<<n<<" + ";
    print(p*n-q,q*n);
}

void Solve(){
    i64 p,q;
    cin >> p >> q;
    print(p,q);
    cout << endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}