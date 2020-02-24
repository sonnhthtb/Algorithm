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
long long dp[N]={0};
char find(int n,int k){
    if(n==1) return 'm';
    if(n==2 || n==3 ) return 'o';
    if(n<=dp[k-1]) return find(n,k-1);
    else if(n>dp[k-1]+k+3) return find(n-dp[k-1]-k-3,k-1);
    else{
        if(n-dp[k-1]==1) return 'm';
        else return 'o';
    } 
}

void Solve(){
    int n;
    cin >> n;
    dp[0]=3;
    int k=1;
    for(int i=1;;i++){
        k++;
        dp[i]=dp[i-1]*2+i+3;
        if(dp[i]>=n) break;
    }
    cout << find(n,k);
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}