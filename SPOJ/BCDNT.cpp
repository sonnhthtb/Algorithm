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
const int maxn = 60000;
using namespace std;

int T[600000], x ,kq=0, n;

void update(int id,int a,int b){
    int mid;
    if(a>b) return;
    if( (a>x) || (b<x)) return;
    if(a==b){
        // cout << a<<endl;
        T[id]++;
        return;
    }
    mid = (a + b)/2;
    update(id*2,a,mid);
    update(id*2+1,mid+1,b);
    T[id]=T[id*2]+T[id*2+1];
}


void get(int id,int a,int b){
    if(a>b) return;
    if(b<x+1) return;
    if(a>x){
        kq+=T[id];
        // cout <<a << " "<< id<<" " <<T[id]<<endl;
        return;
    }
    int mid= (a + b)/2;
    get(id*2,a,mid);
    get(id*2+1,mid+1,b);
}
void Solve(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin>> x;
        update(1,1,maxn);
        get(1,1,maxn);
    }
    cout << kq;
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}