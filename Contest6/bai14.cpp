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
bool isPrime[1000005];
void Sang(){
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i*i <= 1000000; i++){
        if(isPrime[i]){
            for (int j = i*i; j <= 1000000; j+=i){
                isPrime[j] = false;
            }
        }
    }
}

void Solve(){
    int n;
    cin >> n;
    bool check = true;
    for (int i = 2; i < n; i++){
        if(isPrime[n-i] && isPrime[i]){
            cout << i << ' ' << n - i << endl;
            check = false;
            break;
        }
    }
    if(check)
        cout << -1 << endl;
}

int main(){
    int T=1;
    cin >> T;
    Sang();
    while(T--){
        Solve();
    }
    return 0;
}