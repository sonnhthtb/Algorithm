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
    string s;
    cin >> s;
    string ans="";
    int son=1;
    int tmp=0;
    int n=s.size();
    for(int i=n-1;i>=0;i--){
        tmp+=son*(s[i]-'0');
        son*=2;
        // cout << tmp<<endl;
        if(son==8 || i==0){
            // cout << tmp<<endl;
            ans=(char)(tmp+'0')+ans;
            tmp=0;
            son=1;
        }
    }
    cout << ans;
}
int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}