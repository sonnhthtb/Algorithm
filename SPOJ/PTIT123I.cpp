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
vector <bool> isPrime(100000000,true);
vector <int> cnt(100000000,0);
void Sang(){
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2;i<=1000;i++){
        if(isPrime[i]){
            for(int j=i*i;j<=100000000;j+=i){
                isPrime[j]=false;
            }
        }
    }
}
void SonYeuChau(){
    for(int i=2;i<=10000000;i++){
        if(isPrime[i]) cnt[i]=cnt[i-1]+1;
        else cnt[i]=cnt[i-1];
    }
}
void Solve(){n
    Sang();
    SonYeuChau();
    // cout << cnt[10]<<' '<<cnt[20];
    int n;
    while(1){
        cin >> n;
        if(n==0) break;
        cout << cnt[2*n]-cnt[n]<<endl;
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