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
//Tim day con tang dai nhat,tim ra duoc so vi tri sai ngan nhat chinh la ket qua cua bai toan
void Solve(){
    int n;
    cin >> n;
    int a[n + 5];
    long long dp[n + 5];
    for (int i = 1; i <= n;i++){
        cin >> a[i];
        dp[i] = 1;
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j < i;j++){
            if(a[j]<=a[i]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    int tmp = *max_element(dp + 1, dp + n + 1);
    cout << n - tmp << endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}