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
// P(n, k) = P(n-1, k) + k* P(n-1, k-1)
int P[1005][1005];
void Solve(){
    memset(P, 0, sizeof(P));
    int n,k;
    cin >> n >> k;
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= k;j++){
            if(j>i)
                P[i][j] = 0;
            else if(j == 0){
                P[i][j] = 1;
            }
            else{
                P[i][j] = (P[i - 1][j] % base + (j  *(P[i - 1][j - 1] % base)) % base) % base;
            }
        }
    }
    cout << P[n][k] << endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}