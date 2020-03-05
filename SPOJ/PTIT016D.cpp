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
    i64 n,k;
    cin >> n >> k;
    int a[n+5];
    long long sum=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sum=a[0];
    sort(a+1,a+n);
    for(int i=n-1;i>=1;i--){
        // cout << a[i]<<endl;
        if(k>0){
            k--;
            sum+=a[i];
        }
        else{
            sum-=a[i];
        }
    }
    cout << sum<<endl;
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}