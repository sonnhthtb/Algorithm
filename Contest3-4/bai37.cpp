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

int floor(int a[],int l,int r,int x){
    if(l>r) return -1;
    if(x>=a[r]) return r;
    int mid =(l+r)/2;
    if(a[mid]==x) return mid;
    if(mid >0 && a[mid-1]<=x && a[mid]>x) return mid-1;
    if(x<a[mid]) return floor(a,l,mid-1,x);
    return floor(a,mid+1,r,x);
}
int a[10000005];
void Solve(){
    int n,x;
    cin >> n>> x;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    int ans= floor(a,1,n,x);
    if(ans<1) cout << "-1"<<endl;
    else  cout << ans<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}