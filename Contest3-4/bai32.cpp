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
const long long maxn = 10000000;
using namespace std;
 
long long T[6*10000000], x ,kq=0, n;
struct data{
    long long val;
    long long pos;
};
bool cmp(data a,data b){
    return a.val <b.val;
}
void update(i64 id,i64 a,i64 b){
    i64 mid;
    if(a>b) return;
    if( (a>x) || (b<x)) return;
    if(a==b)
    {
        // cout << a<<endl;
        T[id]++;
        return;
    }
    mid = (a + b)/2;
    update(id*2,a,mid);
    update(id*2+1,mid+1,b);
    T[id]=T[id*2]+T[id*2+1];
}
 
void get(i64 id,i64 a,i64 b){
    if(a>b) return;
    if(b<x+1) return;
    if(a>x){
        kq+=T[id];
        // cout << kq<<endl;
        return;
    }
    i64 mid= (a + b)/2;
    get(id*2,a,mid);
    get(id*2+1,mid+1,b);
}
void Solve(){
    kq=0;
    cin >> n;
    memset(T,0,sizeof(T));
    i64 a[n+5],b[n+5];
    data z[n+5];

    //Thuc hien roi rac hoa du lieu
    for(int i=0;i<n;i++){
        cin >> a[i];
        z[i].val=a[i];
        z[i].pos=i;
    }
    sort(z,z+n,cmp);
    long long dem=0,last=inf;
    for(int i=0;i<n;i++){
        if(z[i].val != last){
            dem++;
            last=z[i].val;
        }
        b[z[i].pos]=dem;
    }
    //thuc hien cay phan doan
    for(int i=0;i<n;i++){
        x=b[i];
        // cout << x<<' ';
        update(1,1,maxn);
        get(1,1,maxn);
    }
    cout << kq<<endl;
}
 
int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
} 