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
    int n;
    cin >> n;
    long long a[n + 5];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cnt[10]={0};
    for (int i = 0; i < n; i++){
        while(a[i]!=0){
            int tmp = a[i] % 10;
            cnt[tmp]++;
            a[i] /= 10;
        }
    }
    for (int i = 0; i <= 9; i++){
        if(cnt[i]>0){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}