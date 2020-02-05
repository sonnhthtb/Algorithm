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
        int n;
        cin >> n;
        if(n==0) return;
        if(n==1){
            cout << 1;
            cout << endl;
            continue;
        }
        long long ans=1;
        while(n!=1){
            if(n%2==0) n/=2;
            else n=n*3+1;
            ans++;
        }
        cout << ans;
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