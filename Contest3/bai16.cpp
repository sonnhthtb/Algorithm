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
int S,D;
string minNumber(){
    string ans="";
    if(S>9*D) return "-1";
    S--;
    for(int i=0;i<D-1;i++){
        // cout << S<<endl;
        if(S>9){ 
            ans="9"+ans;
            S-=9;
        }
        else if(S<=9){ 
            ans=char(S+'0')+ans;
            S=0;
        }
    }
    ans=char(S+'1')+ans;
    // reverse(ans.begin(),ans.end());
    return ans;
}
void Solve(){
    cin >> S >> D;
    cout << minNumber()<<endl;
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}