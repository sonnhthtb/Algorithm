#include <bits/stdc++.h>
#define i64 unsigned long long
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
i64 poww(i64 x,i64 y){
    i64 ans=1;
    for(int i=0;i<y;i++){
        ans*=x;
    }
    return ans;
}
i64 find(i64 n,i64 k){
    
    long long mid=poww(2,n-1);
    // if(mid==0) return -1;
    // cout << n<<" " << k <<" "<< mid<<endl;
    if(k == mid) return n;
    if(k < mid) return find(n-1,k);
    if(k > mid) return find(n-1,k-mid);
}
void Solve(){
    i64 n,k;
    cin >> n >> k;
    // cout << n << k;
    cout << find(n,k)<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}