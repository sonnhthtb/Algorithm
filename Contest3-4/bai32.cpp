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
const long long maxnn = 10000009;
using namespace std;
long long n,T[6*maxnn],a[maxnn],res=0;
struct data{
    long long val;
    long long pos;
};
bool cmp(data a,data b){
    return a.val <b.val;
}
void update(i64 x) {
     while (x < maxnn) {
           T[x]++;
           x += (x & (-x));
     }
}
 
i64 get(i64 x) {
     i64 ans=0;
     while (x>0) {
           ans += T[x];
           x -= (x & (-x));
     }
     return ans;
}
void Solve(){
    res=0;
    cin >> n;
    memset(T,0,sizeof(T));
    i64 a[maxnn+5],b[maxnn+5];
    data z[maxnn+5];

    //Thuc hien roi rac hoa du lieu
    for(int i=1;i<=n;i++){
        cin >> a[i];
        z[i].val=a[i];
        z[i].pos=i;
    }
    sort(z+1,z+n+1,cmp);
    long long dem=0,last=inf;
    for(int i=1;i<=n;i++){
        if(z[i].val != last){
            dem++;
            last=z[i].val;
        }
        b[z[i].pos]=dem;
    }
    //thuc hien ferwich tree
    for(int i=n;i>0;i--){
		res=res+get(b[i]-1);
		update(b[i]);
	}
    cout << res<<endl;
}
 
int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
} 