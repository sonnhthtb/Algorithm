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
vector <bool> isPrime(10000000,true);
vector <int> Exist;
int n,k;
void Sang(){

    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            Exist.pb(i);
            isPrime[i]==false;
            for(int j=i*i;j<=n;j+=i){
                if(isPrime[j]){
                    Exist.pb(j);
                }
                isPrime[j]=false;
            }
        }
    }
}
void Solve(){
    cin >> n >> k;
    Sang();
    // for(auto x:Exist) cout << x<<' ';
    // cout << endl;
    cout << Exist[k-1]<<endl;
}
int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}