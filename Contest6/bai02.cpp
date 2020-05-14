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
int n,x;
int a[N];

bool cmp(int a,int b){
    return abs(a - x) < abs(b - x);
}
void Solve(){
    cin >> n >> x;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    stable_sort(a, a + n, cmp);
    for (int i = 0; i < n; i++){
        cout << a[i]<<' ';
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