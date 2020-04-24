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
int n,s,m;
void Solve(){
    cin >> n >> s >> m;
    if(6*n<7*m && s>6 || m>n){
        cout << -1<<endl;
    }
    else{
        int tmp=(m*s)/n;
        if((m*s)%n!=0) tmp++;
        cout << tmp<<endl;
    }
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}