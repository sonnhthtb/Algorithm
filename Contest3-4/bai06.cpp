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
    int a[n+5];
    int b[n+5];
    for(int i=0;i<n;i++){
        cin >> a[i];
        b[i]=a[i];
    }   
    sort(b,b+n);
    bool check=true;
    int mid=n/2;
    for(int i=mid;i<n;i++){
        // cout << a[i]<<' '<<b[i];
        if(a[i]!=b[i] && a[i]!=b[n-i-1]) check=false;   
    }
    if(check) cout << "Yes"<<endl;
    else cout << "No"<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}