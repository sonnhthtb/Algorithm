#include <bits/stdc++.h>
#define i64 long long
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cout << #a " is " << (a) << endl;
 
const int N = 300005;
const long long base = 1e9+7;
const long long inf = 1e18+7;

using namespace std;
void Solve(){
    int n;
    cin >> n;
    int a[N];
    for(int i=0;i<n;i++) cin >> a[i];
    int fr=-1;
    int ba=n;
    for(int i=0;i<n;i++){
        if(a[i]<i) break;
        else fr=i;
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]<n-1-i) break;
        else ba=i;
    }
    if(ba<=fr) cout <<"Yes"<<endl;
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