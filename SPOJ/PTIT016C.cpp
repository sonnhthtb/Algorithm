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
    string s;
    cin >> s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if((s[i]-'0')%2==0 && i%2==0){
            cout << "NO"<<endl;
            return;
        }
        if((s[i]-'0')%2==1 && i%2==1){
            cout << "NO"<<endl;
            return;
        }
    }
    cout << "YES"<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}