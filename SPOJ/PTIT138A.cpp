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

void Solve(){
    int a,b,c;
    while(1){
        cin >> a >> b >> c;
        if(a==0 && b==0 && c==0) break;
        bool check=false;
        if(a+b > c && a+c>b && b+c >a && (a*a+b*b==c*c || a*a+c*c ==b*b || b*b+c*c ==a*a)) check =true;
        if(check) cout << "right"<<endl;
        else cout << "wrong"<<endl;
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