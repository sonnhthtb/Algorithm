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

int a[24][60];
void Solve(){
    for(int i = 0; i < 24; i ++){
        for(int j = 0; j < 60; j++){
            a[i][j] = 0;
        }
    }
    int n, x, y;
    int res = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        a[x][y]++;
        res = max(res, a[x][y]);
    }
    cout << res;
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}