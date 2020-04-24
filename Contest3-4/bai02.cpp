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
void Solve(){
    int a,b;
    cin >> a>> b;
    int sum=a+b;
    int minn=sum,maxx=sum;
    int dem=1;
    while(a!=0){
        if(a%10==5){
            maxx+=dem;
        }
        if(a%10==6){
            minn-=dem;
        }
        a/=10;
        dem*=10;
    }
    dem=1;
    while(b!=0){
        if(b%10==5){
            maxx+=dem;
        }
        if(b%10==6){
            minn-=dem;
        }
        b/=10;
        dem*=10;
    }
    cout << minn<<' '<<maxx;
}
int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
} 