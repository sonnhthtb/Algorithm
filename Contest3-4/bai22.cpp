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
int b_search(int a[],int l,int r,int k){
    int mid=(l+r)/2;
    if(l>r) return -1;
    if(a[mid]==k) return mid;
    else if(a[mid] >k) return b_search(a,l,mid-1,k);
    else return b_search(a,mid+1,r,k); 
}
void Solve(){
    int n,k;
    cin >> n >> k;
    int a[n+5];
    for(int i=1;i<=n;i++) cin >> a[i];
    if(b_search(a,1,n,k)<0) cout <<"NO"<<endl;
    else cout << b_search(a,1,n,k)<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}