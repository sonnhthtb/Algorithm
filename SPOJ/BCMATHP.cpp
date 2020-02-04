#include <bits/stdc++.h>
#define i64 long long
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cout << #a " is " << (a) << endl;
 
const int N = 200005;
const long long base = 1e9+7;
const long long inf = 1e18+7;

using namespace std;
int first_num(long long a ){
    int ans;
    while(a != 0){
        ans=a%10;
        a/=10;
    }
    return ans;
}

void Solve(){
    int a,b;
    cin >> a >> b;
    long long tmp=1;
    for(int i=1;i<=a;i++) tmp *= 2;
    int ans=0;
    for(int i=a+1;i<63;i++){
        tmp*=2;
        if(first_num(tmp) == b){
            ans=i;
            break;
        }
    }
    cout << ans <<endl;
}
int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}