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
int C[1005][10005];
void ToHHop(){
    C[0][0]=1;
    C[1][0]=1;
    C[1][1]=1;
    C[0][1]=1;
    for(int i=2;i<=1000;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i) C[i][j]=1;
            if(j==1 || j==i-1) C[i][j]=i;
            else
                C[i][j]=(C[i-1][j-1]%base+C[i-1][j]%base)%base;
        }
    }
}
void Solve(){
    int n,k;
    cin >> n >> k;
    cout << C[n][k]<<endl;
}

int main(){
    int T=1;
    cin >> T;
    ToHHop();
    while(T--){
        Solve();
    }
    return 0;
}