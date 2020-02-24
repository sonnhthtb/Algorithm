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
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    deque <char> dq;
    for(int i=0;i<n;i++){
        while(k>0 && !dq.empty() && s[i]>dq.back()){
            dq.pop_back();
            k--;
        }
        dq.pb(s[i]);
    }
    for(int i=0;i<n-k;i++){
        cout << dq.front();
        dq.pop_front();
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