//cay phan doan
#include <bits/stdc++.h>
#define i64 long long
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cout << #a " is " << (a) << endl;
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
const int N = 50005;
const long long base = 1e9+7;
const long long inf = 1e18+7;

using namespace std;

struct vcs{
    i64 valMax;
    i64 valMin;
};

vcs ST[N*3];

long long a[N];
void init(){
    for(int i=0;i<=N*3;i++){
        ST[i].valMax=INT_MIN;
        ST[i].valMin=INT_MAX;
    }
}

void build(i64 id,i64 st,i64 en){
    if(st==en){
        ST[id].valMax=a[st];
        ST[id].valMin=a[st];
        return;
    }
    i64 mid=(st+en)/2;
    build(id*2,st,mid);
    build(id*2+1,mid+1,en);
    ST[id].valMax=max(ST[id*2].valMax,ST[id*2+1].valMax);
    ST[id].valMin=min(ST[id*2].valMin,ST[id*2+1].valMin);
}

long long getMax(i64 id,i64 st,i64 en,i64 l,i64 r){
    if(l>en || r<st){
        return INT_MIN;
    }
    if(l<= st && r >=en){
        return ST[id].valMax;
    }
    i64 mid =(st+en)/2;
    return max(getMax(id*2,st,mid,l,r),getMax(id*2+1,mid+1,en,l,r));
}

long long getMin(i64 id,i64 st,i64 en,i64 l,i64 r){
    if(l>en || r<st){
        return INT_MAX;
    }
    if(l<= st && r >=en){
        return ST[id].valMin;
    }
    i64 mid =(st+en)/2;
    return min(getMin(id*2,st,mid,l,r),getMin(id*2+1,mid+1,en,l,r));
}

long long ans(i64 id,i64 st,i64 en,i64 l,i64 r){
    return getMax(id,st,en,l,r)-getMin(id,st,en,l,r);
}

void Solve(){
    i64 n,q;
    init();
    scanf("%lld%lld",&n,&q);
    for(i64 i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    build(1,1,n);
    // cout << q<<endl;
    while(q--){
        i64 l,r;
        scanf("%lld%lld",&l,&r);
        printf("%lld\n",ans(1,1,n,l,r));
    }
}

int main(){
    fast
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}