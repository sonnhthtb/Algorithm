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
    int m,n;
    cin >> m >> n;
    int a[m+5],b[n+5],c[m+n+5]={0};
    for(int i=0;i<m;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++){
            c[i+j]+=a[i]*b[j];
        }
    }
    for(int i=0;i<m+n-1;i++) cout << c[i]<<" ";
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