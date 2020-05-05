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

int countZeros(int a[],int l,int r){
    if(l>r) return l;
    int mid = (l+r)/2;
    if((mid==0 || a[mid-1]==0) && a[mid]==1) return mid;
    if(a[mid]==1) return countZeros(a,l,mid-1);
    return countZeros(a,mid+1,r);
}

void Solve(){
    int n;
    cin >> n;
    int a[n+5];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << countZeros(a,0,n-1)<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}