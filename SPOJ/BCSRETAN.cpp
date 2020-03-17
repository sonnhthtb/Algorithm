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
    long long k;
    cin >> k;
    k++;
    vector <int> vt;
    if(k==0) vt.pb(0);
    while(k!=0){
        vt.push_back(k%2);
        k/=2;
    }
    // reverse(vt.begin(),vt.end());
    for(int i=vt.size()-2;i>=0;i--){
        if(vt[i]==0) cout << 4;
        else cout << 7;
    }
    cout << endl;
}

int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}