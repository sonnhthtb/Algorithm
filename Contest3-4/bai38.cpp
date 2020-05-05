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
int m,n;
int a[10000005],b[10000005];

int Search(int a[], int m, int b[], int n, int k){
    if(k < 1 || k > n + m ) return -1;                    // khong tim thay
    if(m > n ) return Search(b,n,a,m,k);                 // luon luon de mang a nho hon mang b
    if(m == 0 ) return b[k - 1];
    if(k == 1 ) return min(a[0],b[0]);
    int minA = min(m, k / 2);
    int minB = min(n, k / 2);
    if(a[minA - 1] > b[minB - 1])
        return Search(a,m,b+minB,n-minB,k - minB);
    else 
        return Search(a+minA,m-minA,b,n,k-minA);
}

void Solve(){
    int m,n,k;
    cin >> m >> n >> k;
    int a[m+5], b[n+5];
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    cout << Search(a,m,b,n,k)<< endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}