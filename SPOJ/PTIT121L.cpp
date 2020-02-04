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
    long long a1,a2,a3;
    long long b1,b2,b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    if(a1<b1) swap(a1,b1);
    if(a2<b2) swap(a2,b2);
    if(a3<b3) swap(a3,b3);
    if(a1==a2 && a2==a3 && b1+b2+b3==a1){
        cout << a1;
    }
    else{
        if(a1+b2==a3 && a2==b1 && a2+b3==a3){
            cout << a3;
        }
        else if(a2+b1==a3 && a1==b2 && a1+b3==a3){
            cout << a3;
        }
        else if(b1+b2==a3 && a1==a2 && a1+b3==a3){
            cout << a3;
        }
        else if(a3+b2==a1 && a2==b3 && a2+b1==a1){
            cout << a1;
        }
        else if(a2+b3==a1 && a3==b2 && a3+b1==a1){
            cout << a1;
        }
        else if(b3+b2==a1 && a3==a2 && a3+b1==a1){
            cout << a1;
        }
        else if(a3+b1==a2 && a1==b3 && a1+b2==a2){
            cout << a2;
        }
        else if(a1+b3==a2 && a3==b1 && a3+b2==a2){
            cout << a2;
        }
        else if(b3+b1==a2 && a3==a1 && a3+b2==a2){
            cout << a2;
        }
        else cout << 0;
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