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
    int n,k;
    cin >> n >> k;
    int a[n+5];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int kk=k;
    for(int i=0;i<k;i++){
        if(a[i]<0){
            a[i]=-a[i];
            kk--;
        }
        else break;
    }
    long long sum=0;
    sort(a,a+n);
    for(int i=0;i<kk;i++){
        a[0]*=-1;
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
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
