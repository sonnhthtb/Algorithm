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
 
struct mincy{
    int l;
    int r;
};
 
bool cmp(mincy a,mincy b){
    return a.r<b.r;
}
 
void Solve(){
    int n;
    cin >> n;
    mincy s[n+5];
    int a[n+5],b[n+5];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
        s[i].l=a[i];
        s[i].r=b[i];
    }
    sort(s,s+n,cmp);
    // for(int i=0;i<n;i++) cout <<  a[i].l<<" "<< a[i].r<<endl;
    int tmp=0;
    int ans=1;
    for(int i=1;i<n;i++){
        if(s[i].l>=s[tmp].r){
            ans++;
            tmp=i;
        }
    }
    cout << ans<<endl;
}
 
int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
} 