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

int Search(i64 a[],i64 b[],int l,int r){
    if(l>r) return -1;
    if(a[r]!=b[r-1]) return r;
    int mid= (l+r)/2;
    if(a[mid-1]==b[mid-1] && a[mid]!=b[mid])
        return mid;
    if(a[mid]==b[mid]) return Search(a,b,mid+1,r);
    return Search(a,b,l,mid-1);
}

void Solve(){
    int n;
    cin >> n;
    i64 a[n+5];
    i64 b[n+5];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n-1; i++){
        cin >> b[i];
    }
    cout << Search(a,b,0,n-1)+1<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}