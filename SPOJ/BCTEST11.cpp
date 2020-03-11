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
int a[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};

bool check(int n){
    for(auto x:a){
        if(n%x==0) return true;
    }
    return false;
}

void Solve(){
    int n;
    cin >> n;
    if(check(n)) cout << "YES";
    else cout << "NO";
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}