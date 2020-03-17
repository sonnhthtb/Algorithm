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
    long long n;
    cin>> n;
    long tmp=0, dem=1;
    while (n/10!=0)
    {
        tmp=(n%10+tmp>=5);
        n = n / 10; dem=dem*10;
    }
    cout << (n+tmp)*dem << endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}