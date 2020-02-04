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
string excel(long long n){
    string tmp="";
    while(n!=0){
        n--;
        char c='A'+n%26;
        tmp=c+tmp;
        n/=26;
    }
    return tmp;
}
void Solve(){
    long long r,c;
    char tmp;
    while(1==1){
        cin >> tmp >> r >> tmp >> c;
        if(r==0 && c==0 ) break;
        cout << excel(c)<<r;
        cout << endl;
    }

}
int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}