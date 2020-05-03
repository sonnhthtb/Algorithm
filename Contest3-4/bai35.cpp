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
int n,a[1000];

int maxSubArrayHaveMid(int l,int m,int r){
    //SubArray max in left
    int sum=0;
    int sum_l=-base;
    for(int i=m;i>=l;i--){
        sum+=a[i];
        sum_l=max(sum_l,sum);
    }
    //SubArray max in right
    sum=0;
    int sum_r=-base;
    for(int i=m+1;i<=r;i++){
        sum+=a[i];
        sum_r=max(sum_r,sum);
    }
    
    return max(max(sum_l,sum_r),sum_l+sum_r);
}

int maxSubArray(int l,int r){
    if(l>=r) return a[l];
    int mid=(l+r)/2;
    return max(max(maxSubArray(l,mid),maxSubArray(mid+1,r)),maxSubArrayHaveMid(l,mid,r));
}

void Solve(){
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    cout << maxSubArray(0,n-1)<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}