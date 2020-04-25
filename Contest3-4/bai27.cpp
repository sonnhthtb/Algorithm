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
int find(i64 k,i64 n){
    if(n==1) return 1;
    double x=log(n);
    double y =log(2);
    double z = x/y;                             //Tinh logarit co so 2 cua n
    i64 tmp=pow(2,(long long)z);                //Tim vi tri giua cua mang cuoi
    if(k==tmp) return n%2;
    else if(k%2==1) return 1;
    else if( k < tmp) return find(k,n/2);
    else if( k > tmp) return find(k-tmp,n/2);
}
void Solve(){
    i64 n,l,r;
    cin >> n >> l >> r;
    i64 sum=0;
    for(i64 i=l;i<=r;i++){
        sum+= find(i,n);
    }
    cout << sum<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}