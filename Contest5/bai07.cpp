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
    //ways(n, m) = ways(n-1, m) + ways(n-2, m) + ... ways(n-m, m)
    int n,k;
    cin >> n >> k;
    i64 tmp=0;
    i64 res[n+1]={0};
    res[0]=1;
    for(int i=1; i<=n ;i++){
        int limit=i-k-1;
        if(limit >=0){
            tmp-=res[limit];
        }
        tmp+=res[i-1];
        res[i]=tmp%base;
    }
    cout << res[n]<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}