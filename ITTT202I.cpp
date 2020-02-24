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
    int a[10];
    for(int i=0;i<4;i++) cin >> a[i];
    sort(a,a+4);
    cout << a[3]-a[2]<<" "<<a[3]-a[1]<<" "<<a[3]-a[0];
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}